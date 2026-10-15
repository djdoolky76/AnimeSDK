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

#define RPG_CLIENT_NETPACKET_CLEARDATA_OFFSET UNITYSDK_OFFSET(0x1DDB4060)
#define RPG_CLIENT_NETPACKET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD9BD80)
#define RPG_CLIENT_NETPACKET_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1DDAB270)
#define RPG_CLIENT_NETPACKET_GETBODYLEN_OFFSET UNITYSDK_OFFSET(0x1DDB3EB0)
#define RPG_CLIENT_NETPACKET_GETCMDID_OFFSET UNITYSDK_OFFSET(0x1DD9D320)
#define RPG_CLIENT_NETPACKET_GETDATA_1_OFFSET UNITYSDK_OFFSET(0x1DDB3F90)
#define RPG_CLIENT_NETPACKET_GETHEADLEN_OFFSET UNITYSDK_OFFSET(0x1DDB3E60)
#define RPG_CLIENT_NETPACKET_GETHEADMAGIC_OFFSET UNITYSDK_OFFSET(0x1DDB3E00)
#define RPG_CLIENT_NETPACKET_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x1DDB4070)
#define RPG_CLIENT_NETPACKET_GETPACKETID_OFFSET UNITYSDK_OFFSET(0x1DDB3F10)
#define RPG_CLIENT_NETPACKET_GETPACKETLEN_OFFSET UNITYSDK_OFFSET(0x1DDADD20)
#define RPG_CLIENT_NETPACKET_GETPACKETRECVTIMEMS_OFFSET UNITYSDK_OFFSET(0x1DDB3F80)
#define RPG_CLIENT_NETPACKET_GETRAWDATA_OFFSET UNITYSDK_OFFSET(0x1DDB3FA0)
#define RPG_CLIENT_NETPACKET_GETTAILMAGIC_OFFSET UNITYSDK_OFFSET(0x1DDB3F20)
#define RPG_CLIENT_NETPACKET_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1DD9D310)
#define RPG_CLIENT_NETPACKET_ONNEW_OFFSET UNITYSDK_OFFSET(0x1DDB3CD0)
#define RPG_CLIENT_NETPACKET_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1DDB3CE0)
#define RPG_CLIENT_NETPACKET_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1DDAA850)
#define RPG_CLIENT_NETPACKET_SETBODYLEN_OFFSET UNITYSDK_OFFSET(0x1DDB4150)
#define RPG_CLIENT_NETPACKET_SETCMDID_OFFSET UNITYSDK_OFFSET(0x1DD9BF90)
#define RPG_CLIENT_NETPACKET_SETDATA_OFFSET UNITYSDK_OFFSET(0x1DDB41B0)
#define RPG_CLIENT_NETPACKET_SETHEADLEN_OFFSET UNITYSDK_OFFSET(0x1DDB4100)
#define RPG_CLIENT_NETPACKET_SETPACKETID_OFFSET UNITYSDK_OFFSET(0x1DDB40F0)
#define RPG_CLIENT_NETPACKET_SETPACKETRECVTIMEMS_OFFSET UNITYSDK_OFFSET(0x1DDB41F0)
#define RPG_CLIENT_NETPACKET_SETRAWDATA_OFFSET UNITYSDK_OFFSET(0x1DDB41D0)

namespace RPG::Client
{
	inline static constexpr unsigned int NetPacket_TypeDefinitionIndex = 43928;

	class NetPacket : public ::System::Object
	{
	public:
		::System::IO::MemoryStream* _Head; // 0x10
		::GOCBELPFLHO* _MsgProtoHead; // 0x18
		::JGMDBNHGDND* _Body; // 0x20
		::Google::Protobuf::IMessage* _Data; // 0x28
		::Il2CppArray<::System::Byte>* _RawData; // 0x30
		::System::UInt32 _PacketID; // 0x38
		::System::UInt32 _BodyLen; // 0x3C
		::System::Int32 BodySize; // 0x40
		::System::UInt16 _CmdID; // 0x44
		::System::Byte _padding0[0x2];
		::System::UInt32 _Seed; // 0x48
		::System::Byte _padding1[0x4];
		::System::UInt64 _RecvTimeStampMs; // 0x50
		::System::UInt32 _TailMagic; // 0x58
		::System::UInt32 _HeadMagic; // 0x5C
		::System::Int32 HeadSize; // 0x60
		::System::Boolean isInUse; // 0x64
		::System::Byte _padding2[0x1];
		::System::UInt16 _HeadLen; // 0x66
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
