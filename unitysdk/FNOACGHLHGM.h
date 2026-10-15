#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNOACGHLHGM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FNOACGHLHGM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3C7FF0)
#define FNOACGHLHGM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3C8090)
#define FNOACGHLHGM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3C7CE0)
#define FNOACGHLHGM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3C7CB0)
#define FNOACGHLHGM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3C7CA0)
#define FNOACGHLHGM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3C7DF0)
#define FNOACGHLHGM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3C7D20)
#define FNOACGHLHGM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3C7F50)
#define FNOACGHLHGM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3C7C60)
#define FNOACGHLHGM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3C8040)
#define FNOACGHLHGM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3C8010)
#define FNOACGHLHGM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3C7C90)
#define FNOACGHLHGM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3C7F80)
#define FNOACGHLHGM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3C7FE0)

inline static constexpr unsigned int FNOACGHLHGM_TypeDefinitionIndex = 31317;

	class FNOACGHLHGM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::FNOACGHLHGM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FNOACGHLHGM*>**)UnitySDK::FromName("", "FNOACGHLHGM")->GetStaticField(0x5E100);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNOACGHLHGM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FNOACGHLHGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNOACGHLHGM*))((::PBYTE)hIl2Cpp + FNOACGHLHGM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNOACGHLHGM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FNOACGHLHGM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FNOACGHLHGM*>*(*)())((::PBYTE)hIl2Cpp + FNOACGHLHGM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNOACGHLHGM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FNOACGHLHGM* Clone()
		{
			return ((::FNOACGHLHGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNOACGHLHGM_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FNOACGHLHGM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FNOACGHLHGM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FNOACGHLHGM*))((::PBYTE)hIl2Cpp + FNOACGHLHGM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNOACGHLHGM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNOACGHLHGM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FNOACGHLHGM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNOACGHLHGM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FNOACGHLHGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNOACGHLHGM*))((::PBYTE)hIl2Cpp + FNOACGHLHGM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FNOACGHLHGM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
