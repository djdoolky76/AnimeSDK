#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDDMKOIHCPK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BDDMKOIHCPK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E914C20)
#define BDDMKOIHCPK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E914FA0)
#define BDDMKOIHCPK_CLMHHFDHNBJ_OFFSET UNITYSDK_OFFSET(0x1E914870)
#define BDDMKOIHCPK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E914800)
#define BDDMKOIHCPK_CPBLBPJOBMN_OFFSET UNITYSDK_OFFSET(0x1E914850)
#define BDDMKOIHCPK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9147C0)
#define BDDMKOIHCPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9147B0)
#define BDDMKOIHCPK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E914990)
#define BDDMKOIHCPK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9148B0)
#define BDDMKOIHCPK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E914A60)
#define BDDMKOIHCPK_IJFJCEOHDLE_OFFSET UNITYSDK_OFFSET(0x1E914860)
#define BDDMKOIHCPK_JIMHOBGKOAJ_OFFSET UNITYSDK_OFFSET(0x1E914880)
#define BDDMKOIHCPK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E914770)
#define BDDMKOIHCPK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E914E00)
#define BDDMKOIHCPK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E914DB0)
#define BDDMKOIHCPK_MJPGIEICBAP_OFFSET UNITYSDK_OFFSET(0x1E914890)
#define BDDMKOIHCPK_OKPOGFPMGNM_OFFSET UNITYSDK_OFFSET(0x1E9148A0)
#define BDDMKOIHCPK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9147A0)
#define BDDMKOIHCPK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E914A90)
#define BDDMKOIHCPK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E914AF0)

inline static constexpr unsigned int BDDMKOIHCPK_TypeDefinitionIndex = 31396;

	class BDDMKOIHCPK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KJAENGKDFJD; // 0x18
		::System::UInt32 EKCHCJMBPFB; // 0x1C
		::System::UInt32 NGFGMKLACAK; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BDDMKOIHCPK")->GetStaticField(0x3D3C0);
		}

		// static const ::System::Object PIACMPBJOIK; // 0x0
		// static const ::System::Object EPMOLGOAKCJ; // 0x0
		// static const ::System::Object JBEKMBAIGCK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDMKOIHCPK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BDDMKOIHCPK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDDMKOIHCPK*))((::PBYTE)hIl2Cpp + BDDMKOIHCPK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDDMKOIHCPK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BDDMKOIHCPK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDMKOIHCPK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BDDMKOIHCPK* Clone()
		{
			return ((::BDDMKOIHCPK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDMKOIHCPK_CLONE_OFFSET))(this);
		}

		::System::UInt32 CPBLBPJOBMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDMKOIHCPK_CPBLBPJOBMN_OFFSET))(this);
		}

		::System::Void IJFJCEOHDLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDDMKOIHCPK_IJFJCEOHDLE_OFFSET))(this, a1);
		}

		::System::UInt32 CLMHHFDHNBJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDMKOIHCPK_CLMHHFDHNBJ_OFFSET))(this);
		}

		::System::Void JIMHOBGKOAJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDDMKOIHCPK_JIMHOBGKOAJ_OFFSET))(this, a1);
		}

		::System::UInt32 MJPGIEICBAP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDMKOIHCPK_MJPGIEICBAP_OFFSET))(this);
		}

		::System::Void OKPOGFPMGNM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDDMKOIHCPK_OKPOGFPMGNM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BDDMKOIHCPK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BDDMKOIHCPK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BDDMKOIHCPK*))((::PBYTE)hIl2Cpp + BDDMKOIHCPK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDMKOIHCPK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDMKOIHCPK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BDDMKOIHCPK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDMKOIHCPK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BDDMKOIHCPK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDDMKOIHCPK*))((::PBYTE)hIl2Cpp + BDDMKOIHCPK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BDDMKOIHCPK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
