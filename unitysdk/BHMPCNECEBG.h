#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BHMPCNECEBG;
class HCFLAPPBPOP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BHMPCNECEBG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDCEE90)
#define BHMPCNECEBG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDCF190)
#define BHMPCNECEBG_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDCEA10)
#define BHMPCNECEBG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDCE960)
#define BHMPCNECEBG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDCE910)
#define BHMPCNECEBG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDCEBF0)
#define BHMPCNECEBG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDCEA70)
#define BHMPCNECEBG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDCED10)
#define BHMPCNECEBG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDCE8A0)
#define BHMPCNECEBG_JPBFLHILFMK_OFFSET UNITYSDK_OFFSET(0x1DDCEA60)
#define BHMPCNECEBG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDCEFD0)
#define BHMPCNECEBG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDCEF30)
#define BHMPCNECEBG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDCE900)
#define BHMPCNECEBG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDCED80)
#define BHMPCNECEBG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDCEDE0)

inline static constexpr unsigned int BHMPCNECEBG_TypeDefinitionIndex = 28615;

	class BHMPCNECEBG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::HCFLAPPBPOP*>* CJPFOEKDBLJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::HCFLAPPBPOP*>** StaticGet_CPMNHGEAHEI()
		{
			return (::Google::Protobuf::FieldCodec_1<::HCFLAPPBPOP*>**)UnitySDK::FromName("", "BHMPCNECEBG")->GetStaticField(0x56E60);
		}

		static ::Google::Protobuf::MessageParser_1<::BHMPCNECEBG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BHMPCNECEBG*>**)UnitySDK::FromName("", "BHMPCNECEBG")->GetStaticField(0x56E68);
		}

		// static const ::System::Object JPLOHDHOPMN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMPCNECEBG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BHMPCNECEBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHMPCNECEBG*))((::PBYTE)hIl2Cpp + BHMPCNECEBG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHMPCNECEBG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BHMPCNECEBG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BHMPCNECEBG*>*(*)())((::PBYTE)hIl2Cpp + BHMPCNECEBG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMPCNECEBG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BHMPCNECEBG* Clone()
		{
			return ((::BHMPCNECEBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMPCNECEBG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HCFLAPPBPOP*>* JPBFLHILFMK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HCFLAPPBPOP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMPCNECEBG_JPBFLHILFMK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BHMPCNECEBG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BHMPCNECEBG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BHMPCNECEBG*))((::PBYTE)hIl2Cpp + BHMPCNECEBG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMPCNECEBG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMPCNECEBG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BHMPCNECEBG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMPCNECEBG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BHMPCNECEBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHMPCNECEBG*))((::PBYTE)hIl2Cpp + BHMPCNECEBG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BHMPCNECEBG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
