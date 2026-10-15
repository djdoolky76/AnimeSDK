#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEFFFLGJAEM;
class EIDKOEHEAAA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EIDKOEHEAAA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2A79F0)
#define EIDKOEHEAAA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2A7D90)
#define EIDKOEHEAAA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2A7550)
#define EIDKOEHEAAA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2A7490)
#define EIDKOEHEAAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A7440)
#define EIDKOEHEAAA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2A7700)
#define EIDKOEHEAAA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2A75B0)
#define EIDKOEHEAAA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E2A75A0)
#define EIDKOEHEAAA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2A7820)
#define EIDKOEHEAAA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2A7400)
#define EIDKOEHEAAA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2A7BC0)
#define EIDKOEHEAAA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2A7B20)
#define EIDKOEHEAAA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E2A7590)
#define EIDKOEHEAAA_OKMMHHNNAJJ_OFFSET UNITYSDK_OFFSET(0x1E2A7580)
#define EIDKOEHEAAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2A7430)
#define EIDKOEHEAAA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2A7890)
#define EIDKOEHEAAA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2A78F0)

inline static constexpr unsigned int EIDKOEHEAAA_TypeDefinitionIndex = 34911;

	class EIDKOEHEAAA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::DEFFFLGJAEM*>* KJOEIBPNOFC; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_CEPDBGEJOFK()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "EIDKOEHEAAA")->GetStaticField(0x49700);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EIDKOEHEAAA")->GetStaticField(0x49708);
		}

		// static const ::System::Object MFHLIGPKOJI; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDKOEHEAAA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EIDKOEHEAAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EIDKOEHEAAA*))((::PBYTE)hIl2Cpp + EIDKOEHEAAA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIDKOEHEAAA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EIDKOEHEAAA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDKOEHEAAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EIDKOEHEAAA* Clone()
		{
			return ((::EIDKOEHEAAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDKOEHEAAA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::DEFFFLGJAEM*>* OKMMHHNNAJJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::DEFFFLGJAEM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDKOEHEAAA_OKMMHHNNAJJ_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDKOEHEAAA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EIDKOEHEAAA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EIDKOEHEAAA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EIDKOEHEAAA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EIDKOEHEAAA*))((::PBYTE)hIl2Cpp + EIDKOEHEAAA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDKOEHEAAA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDKOEHEAAA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EIDKOEHEAAA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDKOEHEAAA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EIDKOEHEAAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EIDKOEHEAAA*))((::PBYTE)hIl2Cpp + EIDKOEHEAAA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EIDKOEHEAAA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
