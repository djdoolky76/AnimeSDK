#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PacketStatus.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PHIMHNKDFJP.h"
#include "unitysdk/System/ArraySegment_1.h"
class GHIOLFLBBHD;
class GOCBELPFLHO;
class JGMDBNHGDND;
namespace Google::Protobuf { class IMessage; }
namespace System::IO { class MemoryStream; }

#define RPG_CLIENT_NETPACKET_CLEARDATA_OFFSET UNITYSDK_OFFSET(0x2033BD60)
#define RPG_CLIENT_NETPACKET_CTOR_OFFSET UNITYSDK_OFFSET(0x20323A60)
#define RPG_CLIENT_NETPACKET_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x20333070)
#define RPG_CLIENT_NETPACKET_GETBODYLEN_OFFSET UNITYSDK_OFFSET(0x2033BBB0)
#define RPG_CLIENT_NETPACKET_GETCMDID_OFFSET UNITYSDK_OFFSET(0x20324FF0)
#define RPG_CLIENT_NETPACKET_GETDATA_1_OFFSET UNITYSDK_OFFSET(0x2033BC90)
#define RPG_CLIENT_NETPACKET_GETHEADLEN_OFFSET UNITYSDK_OFFSET(0x2033BB60)
#define RPG_CLIENT_NETPACKET_GETHEADMAGIC_OFFSET UNITYSDK_OFFSET(0x2033BB00)
#define RPG_CLIENT_NETPACKET_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x2033BD70)
#define RPG_CLIENT_NETPACKET_GETPACKETID_OFFSET UNITYSDK_OFFSET(0x2033BC10)
#define RPG_CLIENT_NETPACKET_GETPACKETLEN_OFFSET UNITYSDK_OFFSET(0x20335950)
#define RPG_CLIENT_NETPACKET_GETPACKETRECVTIMEMS_OFFSET UNITYSDK_OFFSET(0x2033BC80)
#define RPG_CLIENT_NETPACKET_GETRAWDATA_OFFSET UNITYSDK_OFFSET(0x2033BCA0)
#define RPG_CLIENT_NETPACKET_GETTAILMAGIC_OFFSET UNITYSDK_OFFSET(0x2033BC20)
#define RPG_CLIENT_NETPACKET_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x20324FE0)
#define RPG_CLIENT_NETPACKET_ONNEW_OFFSET UNITYSDK_OFFSET(0x2033B9D0)
#define RPG_CLIENT_NETPACKET_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x2033B9E0)
#define RPG_CLIENT_NETPACKET_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x20332650)
#define RPG_CLIENT_NETPACKET_SETBODYLEN_OFFSET UNITYSDK_OFFSET(0x2033BE50)
#define RPG_CLIENT_NETPACKET_SETCMDID_OFFSET UNITYSDK_OFFSET(0x20323C70)
#define RPG_CLIENT_NETPACKET_SETDATA_OFFSET UNITYSDK_OFFSET(0x2033BEB0)
#define RPG_CLIENT_NETPACKET_SETHEADLEN_OFFSET UNITYSDK_OFFSET(0x2033BE00)
#define RPG_CLIENT_NETPACKET_SETPACKETID_OFFSET UNITYSDK_OFFSET(0x2033BDF0)
#define RPG_CLIENT_NETPACKET_SETPACKETRECVTIMEMS_OFFSET UNITYSDK_OFFSET(0x2033BEF0)
#define RPG_CLIENT_NETPACKET_SETRAWDATA_OFFSET UNITYSDK_OFFSET(0x2033BED0)

namespace RPG::Client
{
	inline static constexpr unsigned int NetPacket_TypeDefinitionIndex = 45003;

	class NetPacket : public ::System::Object
	{
	public:
		::Google::Protobuf::IMessage* _Data; // 0x10
		::GOCBELPFLHO* _MsgProtoHead; // 0x18
		::Il2CppArray<::System::Byte>* _RawData; // 0x20
		::System::IO::MemoryStream* _Head; // 0x28
		::JGMDBNHGDND* _Body; // 0x30
		::System::UInt32 _BodyLen; // 0x38
		::System::Int32 HeadSize; // 0x3C
		::System::UInt16 _CmdID; // 0x40
		::System::UInt16 _HeadLen; // 0x42
		::System::UInt32 _PacketID; // 0x44
		::System::UInt32 _HeadMagic; // 0x48
		::System::UInt32 _TailMagic; // 0x4C
		::System::UInt32 _Seed; // 0x50
		::System::Byte _padding0[0x4];
		::System::UInt64 _RecvTimeStampMs; // 0x58
		::System::Int32 BodySize; // 0x60
		::System::Boolean isInUse; // 0x64
		// static const ::System::Object HeadMagic; // 0x0
		// static const ::System::Object TailMagic; // 0x0
		// static const ::System::Object HeadVersion; // 0x0
		// static const ::System::Object PacketHeadLen; // 0x0
		// static const ::System::Object PacketTailLen; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_CTOR_OFFSET))(this);
		}

		::System::Boolean OnRecycle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_ONRECYCLE_OFFSET))(this);
		}

		::System::Void OnNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_ONNEW_OFFSET))(this);
		}

		::System::UInt32 GetHeadMagic()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_GETHEADMAGIC_OFFSET))(this);
		}

		::System::UInt16 GetCmdId()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_GETCMDID_OFFSET))(this);
		}

		::System::UInt16 GetHeadLen()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_GETHEADLEN_OFFSET))(this);
		}

		::System::UInt32 GetBodyLen()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_GETBODYLEN_OFFSET))(this);
		}

		::System::UInt32 GetPacketID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_GETPACKETID_OFFSET))(this);
		}

		::System::UInt32 GetTailMagic()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_GETTAILMAGIC_OFFSET))(this);
		}

		::System::UInt64 GetPacketRecvTimeMs()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_GETPACKETRECVTIMEMS_OFFSET))(this);
		}

		::Google::Protobuf::IMessage* GetData_1()
		{
			return ((::Google::Protobuf::IMessage*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_GETDATA_1_OFFSET))(this);
		}

		::PHIMHNKDFJP GetRawData()
		{
			return ((::PHIMHNKDFJP(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_GETRAWDATA_OFFSET))(this);
		}

		::System::Void ClearData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_CLEARDATA_OFFSET))(this);
		}

		::System::Int64 GetLength()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_GETLENGTH_OFFSET))(this);
		}

		::System::Int32 GetPacketLen()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_GETPACKETLEN_OFFSET))(this);
		}

		::System::Void SetPacketID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_SETPACKETID_OFFSET))(this, a1);
		}

		::System::Void SetCmdId(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_SETCMDID_OFFSET))(this, a1);
		}

		::System::Void SetHeadLen(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_SETHEADLEN_OFFSET))(this, a1);
		}

		::System::Void SetBodyLen(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_SETBODYLEN_OFFSET))(this, a1);
		}

		::System::Boolean SetData(::Google::Protobuf::IMessage* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::IMessage*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_SETDATA_OFFSET))(this, a1, a2);
		}

		::System::Boolean SetRawData(::Il2CppArray<::System::Byte>* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_SETRAWDATA_OFFSET))(this, a1, a2);
		}

		::System::Void SetPacketRecvTimeMs(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_SETPACKETRECVTIMEMS_OFFSET))(this, a1);
		}

		::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_ISDATAEMPTY_OFFSET))(this);
		}

		::System::Boolean Serialize(::System::IO::MemoryStream* a1, ::System::IO::MemoryStream* a2, ::GHIOLFLBBHD* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IO::MemoryStream*, ::System::IO::MemoryStream*, ::GHIOLFLBBHD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::PacketStatus Deserialize(::System::ArraySegment_1<::System::Byte> a1, ::GHIOLFLBBHD* a2)
		{
			return ((::RPG::Client::PacketStatus(*)(::PVOID, ::System::ArraySegment_1<::System::Byte>, ::GHIOLFLBBHD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETPACKET_DESERIALIZE_OFFSET))(this, a1, a2);
		}

	};
}
