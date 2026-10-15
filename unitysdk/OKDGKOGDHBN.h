#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKDGKOGDHBN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OKDGKOGDHBN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE64C30)
#define OKDGKOGDHBN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE64CD0)
#define OKDGKOGDHBN_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE64920)
#define OKDGKOGDHBN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE648F0)
#define OKDGKOGDHBN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE648E0)
#define OKDGKOGDHBN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE64A30)
#define OKDGKOGDHBN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE64960)
#define OKDGKOGDHBN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE64B90)
#define OKDGKOGDHBN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE648A0)
#define OKDGKOGDHBN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE64C80)
#define OKDGKOGDHBN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE64C50)
#define OKDGKOGDHBN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE648D0)
#define OKDGKOGDHBN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE64BC0)
#define OKDGKOGDHBN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE64C20)

inline static constexpr unsigned int OKDGKOGDHBN_TypeDefinitionIndex = 27847;

	class OKDGKOGDHBN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::OKDGKOGDHBN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OKDGKOGDHBN*>**)UnitySDK::FromName("", "OKDGKOGDHBN")->GetStaticField(0x1D920);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKDGKOGDHBN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OKDGKOGDHBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKDGKOGDHBN*))((::PBYTE)hIl2Cpp + OKDGKOGDHBN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKDGKOGDHBN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OKDGKOGDHBN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OKDGKOGDHBN*>*(*)())((::PBYTE)hIl2Cpp + OKDGKOGDHBN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKDGKOGDHBN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OKDGKOGDHBN* Clone()
		{
			return ((::OKDGKOGDHBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKDGKOGDHBN_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OKDGKOGDHBN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OKDGKOGDHBN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OKDGKOGDHBN*))((::PBYTE)hIl2Cpp + OKDGKOGDHBN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKDGKOGDHBN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKDGKOGDHBN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OKDGKOGDHBN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKDGKOGDHBN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OKDGKOGDHBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKDGKOGDHBN*))((::PBYTE)hIl2Cpp + OKDGKOGDHBN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OKDGKOGDHBN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
