#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JIJPDHKHFML;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JIJPDHKHFML_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x204B70C0)
#define JIJPDHKHFML_CCTOR_OFFSET UNITYSDK_OFFSET(0x204B7160)
#define JIJPDHKHFML_CLONE_OFFSET UNITYSDK_OFFSET(0x204B6DB0)
#define JIJPDHKHFML_CTOR_1_OFFSET UNITYSDK_OFFSET(0x204B6D80)
#define JIJPDHKHFML_CTOR_OFFSET UNITYSDK_OFFSET(0x204B6D70)
#define JIJPDHKHFML_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x204B6EC0)
#define JIJPDHKHFML_EQUALS_OFFSET UNITYSDK_OFFSET(0x204B6DF0)
#define JIJPDHKHFML_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x204B7020)
#define JIJPDHKHFML_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x204B6D30)
#define JIJPDHKHFML_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x204B7110)
#define JIJPDHKHFML_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x204B70E0)
#define JIJPDHKHFML_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x204B6D60)
#define JIJPDHKHFML_TOSTRING_OFFSET UNITYSDK_OFFSET(0x204B7050)
#define JIJPDHKHFML_WRITETO_OFFSET UNITYSDK_OFFSET(0x204B70B0)

inline static constexpr unsigned int JIJPDHKHFML_TypeDefinitionIndex = 31266;

	class JIJPDHKHFML : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::JIJPDHKHFML*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JIJPDHKHFML*>**)UnitySDK::FromName("", "JIJPDHKHFML")->GetStaticField(0x608E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJPDHKHFML_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JIJPDHKHFML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JIJPDHKHFML*))((::PBYTE)hIl2Cpp + JIJPDHKHFML_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIJPDHKHFML_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JIJPDHKHFML*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JIJPDHKHFML*>*(*)())((::PBYTE)hIl2Cpp + JIJPDHKHFML_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJPDHKHFML_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JIJPDHKHFML* Clone()
		{
			return ((::JIJPDHKHFML*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJPDHKHFML_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JIJPDHKHFML_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JIJPDHKHFML* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JIJPDHKHFML*))((::PBYTE)hIl2Cpp + JIJPDHKHFML_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJPDHKHFML_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJPDHKHFML_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JIJPDHKHFML_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJPDHKHFML_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JIJPDHKHFML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JIJPDHKHFML*))((::PBYTE)hIl2Cpp + JIJPDHKHFML_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JIJPDHKHFML_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
