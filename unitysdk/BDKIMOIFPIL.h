#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APAMFCKFHLL;
class BDKIMOIFPIL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BDKIMOIFPIL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8EC1F0)
#define BDKIMOIFPIL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8EC580)
#define BDKIMOIFPIL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8EBD40)
#define BDKIMOIFPIL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8EBCB0)
#define BDKIMOIFPIL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8EBC70)
#define BDKIMOIFPIL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8EBEF0)
#define BDKIMOIFPIL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8EBDA0)
#define BDKIMOIFPIL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E8EBD90)
#define BDKIMOIFPIL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8EC010)
#define BDKIMOIFPIL_HCLHAFDEFLG_OFFSET UNITYSDK_OFFSET(0x1E8EBD70)
#define BDKIMOIFPIL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8EBC30)
#define BDKIMOIFPIL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8EC3C0)
#define BDKIMOIFPIL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8EC320)
#define BDKIMOIFPIL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E8EBD80)
#define BDKIMOIFPIL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8EBC60)
#define BDKIMOIFPIL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8EC080)
#define BDKIMOIFPIL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8EC0E0)

inline static constexpr unsigned int BDKIMOIFPIL_TypeDefinitionIndex = 29992;

	class BDKIMOIFPIL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* AKIPNODIFLD; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::BDKIMOIFPIL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BDKIMOIFPIL*>**)UnitySDK::FromName("", "BDKIMOIFPIL")->GetStaticField(0x52260);
		}

		static ::Google::Protobuf::FieldCodec_1<::APAMFCKFHLL*>** StaticGet_LEKLGKDDFMM()
		{
			return (::Google::Protobuf::FieldCodec_1<::APAMFCKFHLL*>**)UnitySDK::FromName("", "BDKIMOIFPIL")->GetStaticField(0x52268);
		}

		// static const ::System::Object OHCPOGIAMMG; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDKIMOIFPIL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BDKIMOIFPIL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDKIMOIFPIL*))((::PBYTE)hIl2Cpp + BDKIMOIFPIL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDKIMOIFPIL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BDKIMOIFPIL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BDKIMOIFPIL*>*(*)())((::PBYTE)hIl2Cpp + BDKIMOIFPIL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDKIMOIFPIL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BDKIMOIFPIL* Clone()
		{
			return ((::BDKIMOIFPIL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDKIMOIFPIL_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* HCLHAFDEFLG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDKIMOIFPIL_HCLHAFDEFLG_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDKIMOIFPIL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDKIMOIFPIL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BDKIMOIFPIL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BDKIMOIFPIL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BDKIMOIFPIL*))((::PBYTE)hIl2Cpp + BDKIMOIFPIL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDKIMOIFPIL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDKIMOIFPIL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BDKIMOIFPIL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDKIMOIFPIL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BDKIMOIFPIL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDKIMOIFPIL*))((::PBYTE)hIl2Cpp + BDKIMOIFPIL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BDKIMOIFPIL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
