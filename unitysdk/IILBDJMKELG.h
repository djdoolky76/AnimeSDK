#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGFGGFBNOJC;
class IILBDJMKELG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IILBDJMKELG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E65C890)
#define IILBDJMKELG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E65CB90)
#define IILBDJMKELG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E65C410)
#define IILBDJMKELG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E65C360)
#define IILBDJMKELG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E65C310)
#define IILBDJMKELG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E65C5F0)
#define IILBDJMKELG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E65C470)
#define IILBDJMKELG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E65C710)
#define IILBDJMKELG_IDOPMBNFENB_OFFSET UNITYSDK_OFFSET(0x1E65C460)
#define IILBDJMKELG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E65C2A0)
#define IILBDJMKELG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E65C9D0)
#define IILBDJMKELG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E65C930)
#define IILBDJMKELG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E65C300)
#define IILBDJMKELG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E65C780)
#define IILBDJMKELG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E65C7E0)

inline static constexpr unsigned int IILBDJMKELG_TypeDefinitionIndex = 28009;

	class IILBDJMKELG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::AGFGGFBNOJC*>* PPAKCHGAPJI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::AGFGGFBNOJC*>** StaticGet_AMNJPJLCOFL()
		{
			return (::Google::Protobuf::FieldCodec_1<::AGFGGFBNOJC*>**)UnitySDK::FromName("", "IILBDJMKELG")->GetStaticField(0x4F2D0);
		}

		static ::Google::Protobuf::MessageParser_1<::IILBDJMKELG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IILBDJMKELG*>**)UnitySDK::FromName("", "IILBDJMKELG")->GetStaticField(0x4F2D8);
		}

		// static const ::System::Object OJFIKDOKNBK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IILBDJMKELG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IILBDJMKELG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IILBDJMKELG*))((::PBYTE)hIl2Cpp + IILBDJMKELG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IILBDJMKELG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IILBDJMKELG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IILBDJMKELG*>*(*)())((::PBYTE)hIl2Cpp + IILBDJMKELG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IILBDJMKELG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IILBDJMKELG* Clone()
		{
			return ((::IILBDJMKELG*(*)(::PVOID))((::PBYTE)hIl2Cpp + IILBDJMKELG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::AGFGGFBNOJC*>* IDOPMBNFENB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::AGFGGFBNOJC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IILBDJMKELG_IDOPMBNFENB_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IILBDJMKELG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IILBDJMKELG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IILBDJMKELG*))((::PBYTE)hIl2Cpp + IILBDJMKELG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IILBDJMKELG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IILBDJMKELG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IILBDJMKELG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IILBDJMKELG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IILBDJMKELG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IILBDJMKELG*))((::PBYTE)hIl2Cpp + IILBDJMKELG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IILBDJMKELG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
