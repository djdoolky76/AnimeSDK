#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMJPAPIDKKM;
class KFEPCAOAMML;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KFEPCAOAMML_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7E9E10)
#define KFEPCAOAMML_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7EA1A0)
#define KFEPCAOAMML_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7E9960)
#define KFEPCAOAMML_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7E98D0)
#define KFEPCAOAMML_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7E9890)
#define KFEPCAOAMML_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7E9B10)
#define KFEPCAOAMML_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7E99C0)
#define KFEPCAOAMML_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E7E99B0)
#define KFEPCAOAMML_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7E9C30)
#define KFEPCAOAMML_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7E9850)
#define KFEPCAOAMML_LCHHOMMPFCN_OFFSET UNITYSDK_OFFSET(0x1E7E9990)
#define KFEPCAOAMML_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7E9FE0)
#define KFEPCAOAMML_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7E9F40)
#define KFEPCAOAMML_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E7E99A0)
#define KFEPCAOAMML_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7E9880)
#define KFEPCAOAMML_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7E9CA0)
#define KFEPCAOAMML_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7E9D00)

inline static constexpr unsigned int KFEPCAOAMML_TypeDefinitionIndex = 32194;

	class KFEPCAOAMML : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::BMJPAPIDKKM*>* GKENPDNNAKC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::KFEPCAOAMML*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KFEPCAOAMML*>**)UnitySDK::FromName("", "KFEPCAOAMML")->GetStaticField(0x125C0);
		}

		static ::Google::Protobuf::FieldCodec_1<::BMJPAPIDKKM*>** StaticGet_ECFIHCFFJED()
		{
			return (::Google::Protobuf::FieldCodec_1<::BMJPAPIDKKM*>**)UnitySDK::FromName("", "KFEPCAOAMML")->GetStaticField(0x125C8);
		}

		// static const ::System::Object HEKNKDNFIME; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFEPCAOAMML_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KFEPCAOAMML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFEPCAOAMML*))((::PBYTE)hIl2Cpp + KFEPCAOAMML_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFEPCAOAMML_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KFEPCAOAMML*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KFEPCAOAMML*>*(*)())((::PBYTE)hIl2Cpp + KFEPCAOAMML_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFEPCAOAMML_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KFEPCAOAMML* Clone()
		{
			return ((::KFEPCAOAMML*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFEPCAOAMML_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BMJPAPIDKKM*>* LCHHOMMPFCN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BMJPAPIDKKM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFEPCAOAMML_LCHHOMMPFCN_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFEPCAOAMML_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KFEPCAOAMML_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KFEPCAOAMML_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KFEPCAOAMML* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KFEPCAOAMML*))((::PBYTE)hIl2Cpp + KFEPCAOAMML_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFEPCAOAMML_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFEPCAOAMML_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KFEPCAOAMML_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFEPCAOAMML_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KFEPCAOAMML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFEPCAOAMML*))((::PBYTE)hIl2Cpp + KFEPCAOAMML_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KFEPCAOAMML_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
