#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPMJEKOHNME;
class GCFDJCPFOGG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EPMJEKOHNME_BPAKJJMLLAJ_OFFSET UNITYSDK_OFFSET(0x1E3173D0)
#define EPMJEKOHNME_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E317970)
#define EPMJEKOHNME_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E317BC0)
#define EPMJEKOHNME_CLONE_OFFSET UNITYSDK_OFFSET(0x1E317350)
#define EPMJEKOHNME_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3172E0)
#define EPMJEKOHNME_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3172D0)
#define EPMJEKOHNME_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E317560)
#define EPMJEKOHNME_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3173F0)
#define EPMJEKOHNME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E317830)
#define EPMJEKOHNME_IGLHALAGIHD_OFFSET UNITYSDK_OFFSET(0x1E3173E0)
#define EPMJEKOHNME_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E317290)
#define EPMJEKOHNME_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E317A40)
#define EPMJEKOHNME_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3179D0)
#define EPMJEKOHNME_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3172C0)
#define EPMJEKOHNME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E317880)
#define EPMJEKOHNME_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3178E0)

inline static constexpr unsigned int EPMJEKOHNME_TypeDefinitionIndex = 28248;

	class EPMJEKOHNME : public ::System::Object
	{
	public:
		::GCFDJCPFOGG* GOLIHABDEBJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::EPMJEKOHNME*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EPMJEKOHNME*>**)UnitySDK::FromName("", "EPMJEKOHNME")->GetStaticField(0x569D0);
		}

		// static const ::System::Object CDNLDKBAJMK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMJEKOHNME_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EPMJEKOHNME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPMJEKOHNME*))((::PBYTE)hIl2Cpp + EPMJEKOHNME_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPMJEKOHNME_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EPMJEKOHNME*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EPMJEKOHNME*>*(*)())((::PBYTE)hIl2Cpp + EPMJEKOHNME_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMJEKOHNME_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EPMJEKOHNME* Clone()
		{
			return ((::EPMJEKOHNME*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMJEKOHNME_CLONE_OFFSET))(this);
		}

		::GCFDJCPFOGG* BPAKJJMLLAJ()
		{
			return ((::GCFDJCPFOGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMJEKOHNME_BPAKJJMLLAJ_OFFSET))(this);
		}

		::System::Void IGLHALAGIHD(::GCFDJCPFOGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCFDJCPFOGG*))((::PBYTE)hIl2Cpp + EPMJEKOHNME_IGLHALAGIHD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPMJEKOHNME_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EPMJEKOHNME* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EPMJEKOHNME*))((::PBYTE)hIl2Cpp + EPMJEKOHNME_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMJEKOHNME_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMJEKOHNME_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EPMJEKOHNME_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMJEKOHNME_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EPMJEKOHNME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPMJEKOHNME*))((::PBYTE)hIl2Cpp + EPMJEKOHNME_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EPMJEKOHNME_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
