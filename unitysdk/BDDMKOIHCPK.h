#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDDMKOIHCPK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BDDMKOIHCPK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FBD8EE0)
#define BDDMKOIHCPK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBD9260)
#define BDDMKOIHCPK_CLMHHFDHNBJ_OFFSET UNITYSDK_OFFSET(0x1FBD8B30)
#define BDDMKOIHCPK_CLONE_OFFSET UNITYSDK_OFFSET(0x1FBD8AC0)
#define BDDMKOIHCPK_CPBLBPJOBMN_OFFSET UNITYSDK_OFFSET(0x1FBD8B50)
#define BDDMKOIHCPK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FBD8A80)
#define BDDMKOIHCPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBD8A70)
#define BDDMKOIHCPK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FBD8C50)
#define BDDMKOIHCPK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FBD8B70)
#define BDDMKOIHCPK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FBD8D20)
#define BDDMKOIHCPK_IJFJCEOHDLE_OFFSET UNITYSDK_OFFSET(0x1FBD8B60)
#define BDDMKOIHCPK_JIMHOBGKOAJ_OFFSET UNITYSDK_OFFSET(0x1FBD8B40)
#define BDDMKOIHCPK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FBD8A30)
#define BDDMKOIHCPK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FBD90C0)
#define BDDMKOIHCPK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FBD9070)
#define BDDMKOIHCPK_MJPGIEICBAP_OFFSET UNITYSDK_OFFSET(0x1FBD8B10)
#define BDDMKOIHCPK_OKPOGFPMGNM_OFFSET UNITYSDK_OFFSET(0x1FBD8B20)
#define BDDMKOIHCPK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FBD8A60)
#define BDDMKOIHCPK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FBD8D50)
#define BDDMKOIHCPK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FBD8DB0)

inline static constexpr unsigned int BDDMKOIHCPK_TypeDefinitionIndex = 32309;

	class BDDMKOIHCPK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NGFGMKLACAK; // 0x18
		::System::UInt32 EKCHCJMBPFB; // 0x1C
		::System::UInt32 KJAENGKDFJD; // 0x20
		static ::Google::Protobuf::MessageParser_1<::BDDMKOIHCPK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BDDMKOIHCPK*>**)UnitySDK::FromName("", "BDDMKOIHCPK")->GetStaticField(0x457D0);
		}

		// static const ::System::Object JBEKMBAIGCK; // 0x0
		// static const ::System::Object EPMOLGOAKCJ; // 0x0
		// static const ::System::Object PIACMPBJOIK; // 0x0
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

		static ::Google::Protobuf::MessageParser_1<::BDDMKOIHCPK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BDDMKOIHCPK*>*(*)())((::PBYTE)hIl2Cpp + BDDMKOIHCPK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDMKOIHCPK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BDDMKOIHCPK* Clone()
		{
			return ((::BDDMKOIHCPK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDMKOIHCPK_CLONE_OFFSET))(this);
		}

		::System::UInt32 MJPGIEICBAP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDMKOIHCPK_MJPGIEICBAP_OFFSET))(this);
		}

		::System::Void OKPOGFPMGNM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDDMKOIHCPK_OKPOGFPMGNM_OFFSET))(this, a1);
		}

		::System::UInt32 CLMHHFDHNBJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDMKOIHCPK_CLMHHFDHNBJ_OFFSET))(this);
		}

		::System::Void JIMHOBGKOAJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDDMKOIHCPK_JIMHOBGKOAJ_OFFSET))(this, a1);
		}

		::System::UInt32 CPBLBPJOBMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDMKOIHCPK_CPBLBPJOBMN_OFFSET))(this);
		}

		::System::Void IJFJCEOHDLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDDMKOIHCPK_IJFJCEOHDLE_OFFSET))(this, a1);
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
