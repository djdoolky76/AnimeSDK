#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKJMIJBIIHO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EKJMIJBIIHO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E297300)
#define EKJMIJBIIHO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E297520)
#define EKJMIJBIIHO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E296F50)
#define EKJMIJBIIHO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E296F20)
#define EKJMIJBIIHO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E296F10)
#define EKJMIJBIIHO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E297080)
#define EKJMIJBIIHO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E296FB0)
#define EKJMIJBIIHO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E296FA0)
#define EKJMIJBIIHO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2971F0)
#define EKJMIJBIIHO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E296ED0)
#define EKJMIJBIIHO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2973C0)
#define EKJMIJBIIHO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E297390)
#define EKJMIJBIIHO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E296F90)
#define EKJMIJBIIHO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E296F00)
#define EKJMIJBIIHO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E297220)
#define EKJMIJBIIHO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E297280)

inline static constexpr unsigned int EKJMIJBIIHO_TypeDefinitionIndex = 31727;

	class EKJMIJBIIHO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::EKJMIJBIIHO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EKJMIJBIIHO*>**)UnitySDK::FromName("", "EKJMIJBIIHO")->GetStaticField(0x50250);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJMIJBIIHO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EKJMIJBIIHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKJMIJBIIHO*))((::PBYTE)hIl2Cpp + EKJMIJBIIHO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKJMIJBIIHO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EKJMIJBIIHO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EKJMIJBIIHO*>*(*)())((::PBYTE)hIl2Cpp + EKJMIJBIIHO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJMIJBIIHO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EKJMIJBIIHO* Clone()
		{
			return ((::EKJMIJBIIHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJMIJBIIHO_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJMIJBIIHO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EKJMIJBIIHO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EKJMIJBIIHO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EKJMIJBIIHO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKJMIJBIIHO*))((::PBYTE)hIl2Cpp + EKJMIJBIIHO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJMIJBIIHO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJMIJBIIHO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EKJMIJBIIHO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJMIJBIIHO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EKJMIJBIIHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKJMIJBIIHO*))((::PBYTE)hIl2Cpp + EKJMIJBIIHO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EKJMIJBIIHO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
