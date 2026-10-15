#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBEHKFHNNAI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CBEHKFHNNAI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E065A00)
#define CBEHKFHNNAI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E065AA0)
#define CBEHKFHNNAI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0656F0)
#define CBEHKFHNNAI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0656C0)
#define CBEHKFHNNAI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0656B0)
#define CBEHKFHNNAI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E065800)
#define CBEHKFHNNAI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E065730)
#define CBEHKFHNNAI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E065960)
#define CBEHKFHNNAI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E065670)
#define CBEHKFHNNAI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E065A50)
#define CBEHKFHNNAI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E065A20)
#define CBEHKFHNNAI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0656A0)
#define CBEHKFHNNAI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E065990)
#define CBEHKFHNNAI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0659F0)

inline static constexpr unsigned int CBEHKFHNNAI_TypeDefinitionIndex = 29706;

	class CBEHKFHNNAI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::CBEHKFHNNAI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CBEHKFHNNAI*>**)UnitySDK::FromName("", "CBEHKFHNNAI")->GetStaticField(0xBFA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEHKFHNNAI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CBEHKFHNNAI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBEHKFHNNAI*))((::PBYTE)hIl2Cpp + CBEHKFHNNAI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBEHKFHNNAI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CBEHKFHNNAI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CBEHKFHNNAI*>*(*)())((::PBYTE)hIl2Cpp + CBEHKFHNNAI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEHKFHNNAI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CBEHKFHNNAI* Clone()
		{
			return ((::CBEHKFHNNAI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEHKFHNNAI_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CBEHKFHNNAI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CBEHKFHNNAI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CBEHKFHNNAI*))((::PBYTE)hIl2Cpp + CBEHKFHNNAI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEHKFHNNAI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEHKFHNNAI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CBEHKFHNNAI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEHKFHNNAI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CBEHKFHNNAI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBEHKFHNNAI*))((::PBYTE)hIl2Cpp + CBEHKFHNNAI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CBEHKFHNNAI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
