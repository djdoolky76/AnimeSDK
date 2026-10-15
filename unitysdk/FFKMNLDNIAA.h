#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FFKMNLDNIAA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FFKMNLDNIAA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E346D70)
#define FFKMNLDNIAA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E347050)
#define FFKMNLDNIAA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3468E0)
#define FFKMNLDNIAA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E346850)
#define FFKMNLDNIAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E346800)
#define FFKMNLDNIAA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E346A40)
#define FFKMNLDNIAA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E346940)
#define FFKMNLDNIAA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E346920)
#define FFKMNLDNIAA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E346B30)
#define FFKMNLDNIAA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3467C0)
#define FFKMNLDNIAA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E346EA0)
#define FFKMNLDNIAA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E346E50)
#define FFKMNLDNIAA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E346910)
#define FFKMNLDNIAA_OLAKOMGJHPP_OFFSET UNITYSDK_OFFSET(0x1E346930)
#define FFKMNLDNIAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3467F0)
#define FFKMNLDNIAA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E346C30)
#define FFKMNLDNIAA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E346C90)

inline static constexpr unsigned int FFKMNLDNIAA_TypeDefinitionIndex = 34102;

	class FFKMNLDNIAA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FHBLFDBFECL; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_LJOIBKDEKEG()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "FFKMNLDNIAA")->GetStaticField(0x54CB0);
		}

		static ::Google::Protobuf::MessageParser_1<::FFKMNLDNIAA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FFKMNLDNIAA*>**)UnitySDK::FromName("", "FFKMNLDNIAA")->GetStaticField(0x54CB8);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object OOGFNHNLAGJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFKMNLDNIAA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FFKMNLDNIAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FFKMNLDNIAA*))((::PBYTE)hIl2Cpp + FFKMNLDNIAA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFKMNLDNIAA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FFKMNLDNIAA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FFKMNLDNIAA*>*(*)())((::PBYTE)hIl2Cpp + FFKMNLDNIAA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFKMNLDNIAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FFKMNLDNIAA* Clone()
		{
			return ((::FFKMNLDNIAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFKMNLDNIAA_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFKMNLDNIAA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FFKMNLDNIAA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OLAKOMGJHPP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFKMNLDNIAA_OLAKOMGJHPP_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FFKMNLDNIAA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FFKMNLDNIAA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FFKMNLDNIAA*))((::PBYTE)hIl2Cpp + FFKMNLDNIAA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFKMNLDNIAA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFKMNLDNIAA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FFKMNLDNIAA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFKMNLDNIAA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FFKMNLDNIAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FFKMNLDNIAA*))((::PBYTE)hIl2Cpp + FFKMNLDNIAA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FFKMNLDNIAA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
