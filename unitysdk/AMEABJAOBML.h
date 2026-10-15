#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMEABJAOBML;
class OIEAMBAGHBK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define AMEABJAOBML_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E51B150)
#define AMEABJAOBML_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E51B5C0)
#define AMEABJAOBML_CJMBJAJIGHH_OFFSET UNITYSDK_OFFSET(0x1E51AC80)
#define AMEABJAOBML_CLONE_OFFSET UNITYSDK_OFFSET(0x1E51AC20)
#define AMEABJAOBML_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E51AB20)
#define AMEABJAOBML_CTOR_OFFSET UNITYSDK_OFFSET(0x1E51AAD0)
#define AMEABJAOBML_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E51ACD0)
#define AMEABJAOBML_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E51ACA0)
#define AMEABJAOBML_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E51AC60)
#define AMEABJAOBML_GBNBDHOIHHK_OFFSET UNITYSDK_OFFSET(0x1E51AC70)
#define AMEABJAOBML_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E51AEB0)
#define AMEABJAOBML_HONGLJECAAC_OFFSET UNITYSDK_OFFSET(0x1E51AC90)
#define AMEABJAOBML_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E51AA90)
#define AMEABJAOBML_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E51B390)
#define AMEABJAOBML_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E51B290)
#define AMEABJAOBML_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E51AC50)
#define AMEABJAOBML_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E51AAC0)
#define AMEABJAOBML_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E51AF90)
#define AMEABJAOBML_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E51AFF0)

inline static constexpr unsigned int AMEABJAOBML_TypeDefinitionIndex = 26578;

	class AMEABJAOBML : public ::System::Object
	{
	public:
		::Proto::ItemList* PJGCAOPPIFO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::OIEAMBAGHBK*>* AFNHANNCAMC; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::OIEAMBAGHBK*>** StaticGet_FCNMONMFJEF()
		{
			return (::Google::Protobuf::FieldCodec_1<::OIEAMBAGHBK*>**)UnitySDK::FromName("", "AMEABJAOBML")->GetStaticField(0x3B4D0);
		}

		static ::Google::Protobuf::MessageParser_1<::AMEABJAOBML*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AMEABJAOBML*>**)UnitySDK::FromName("", "AMEABJAOBML")->GetStaticField(0x3B4D8);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object FHCOJGPKBHG; // 0x0
		// static const ::System::Object GEJEJNNMGGP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEABJAOBML_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AMEABJAOBML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMEABJAOBML*))((::PBYTE)hIl2Cpp + AMEABJAOBML_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMEABJAOBML_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AMEABJAOBML*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AMEABJAOBML*>*(*)())((::PBYTE)hIl2Cpp + AMEABJAOBML_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEABJAOBML_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AMEABJAOBML* Clone()
		{
			return ((::AMEABJAOBML*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEABJAOBML_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEABJAOBML_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AMEABJAOBML_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Proto::ItemList* GBNBDHOIHHK()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEABJAOBML_GBNBDHOIHHK_OFFSET))(this);
		}

		::System::Void CJMBJAJIGHH(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + AMEABJAOBML_CJMBJAJIGHH_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::OIEAMBAGHBK*>* HONGLJECAAC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::OIEAMBAGHBK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEABJAOBML_HONGLJECAAC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AMEABJAOBML_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AMEABJAOBML* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AMEABJAOBML*))((::PBYTE)hIl2Cpp + AMEABJAOBML_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEABJAOBML_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEABJAOBML_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AMEABJAOBML_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEABJAOBML_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AMEABJAOBML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMEABJAOBML*))((::PBYTE)hIl2Cpp + AMEABJAOBML_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AMEABJAOBML_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
