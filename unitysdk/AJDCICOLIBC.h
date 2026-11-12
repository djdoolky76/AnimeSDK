#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJDCICOLIBC;
class ALNGMGOJDOA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AJDCICOLIBC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F67AE80)
#define AJDCICOLIBC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F67B270)
#define AJDCICOLIBC_CLONE_OFFSET UNITYSDK_OFFSET(0x1F67A940)
#define AJDCICOLIBC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F67A8D0)
#define AJDCICOLIBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1F67A8C0)
#define AJDCICOLIBC_EDHGOHPFOFB_OFFSET UNITYSDK_OFFSET(0x1F67A9E0)
#define AJDCICOLIBC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F67AB80)
#define AJDCICOLIBC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F67AA00)
#define AJDCICOLIBC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F67A9D0)
#define AJDCICOLIBC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F67AD00)
#define AJDCICOLIBC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F67A880)
#define AJDCICOLIBC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F67B050)
#define AJDCICOLIBC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F67AF50)
#define AJDCICOLIBC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F67A9C0)
#define AJDCICOLIBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F67A8B0)
#define AJDCICOLIBC_PDMEGKFCOEE_OFFSET UNITYSDK_OFFSET(0x1F67A9F0)
#define AJDCICOLIBC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F67AD40)
#define AJDCICOLIBC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F67ADA0)

inline static constexpr unsigned int AJDCICOLIBC_TypeDefinitionIndex = 31508;

	class AJDCICOLIBC : public ::System::Object
	{
	public:
		::ALNGMGOJDOA* NBDGOJNBINH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::AJDCICOLIBC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AJDCICOLIBC*>**)UnitySDK::FromName("", "AJDCICOLIBC")->GetStaticField(0x3D950);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object IDIAOOLKKBC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDCICOLIBC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AJDCICOLIBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJDCICOLIBC*))((::PBYTE)hIl2Cpp + AJDCICOLIBC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJDCICOLIBC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AJDCICOLIBC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AJDCICOLIBC*>*(*)())((::PBYTE)hIl2Cpp + AJDCICOLIBC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDCICOLIBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AJDCICOLIBC* Clone()
		{
			return ((::AJDCICOLIBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDCICOLIBC_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDCICOLIBC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AJDCICOLIBC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::ALNGMGOJDOA* EDHGOHPFOFB()
		{
			return ((::ALNGMGOJDOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDCICOLIBC_EDHGOHPFOFB_OFFSET))(this);
		}

		::System::Void PDMEGKFCOEE(::ALNGMGOJDOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALNGMGOJDOA*))((::PBYTE)hIl2Cpp + AJDCICOLIBC_PDMEGKFCOEE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AJDCICOLIBC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AJDCICOLIBC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AJDCICOLIBC*))((::PBYTE)hIl2Cpp + AJDCICOLIBC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDCICOLIBC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDCICOLIBC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AJDCICOLIBC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDCICOLIBC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AJDCICOLIBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJDCICOLIBC*))((::PBYTE)hIl2Cpp + AJDCICOLIBC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AJDCICOLIBC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
