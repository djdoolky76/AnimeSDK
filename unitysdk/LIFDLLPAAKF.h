#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LIFDLLPAAKF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LIFDLLPAAKF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E93F3E0)
#define LIFDLLPAAKF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E93F480)
#define LIFDLLPAAKF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E93F0D0)
#define LIFDLLPAAKF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E93F0A0)
#define LIFDLLPAAKF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E93F090)
#define LIFDLLPAAKF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E93F1E0)
#define LIFDLLPAAKF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E93F110)
#define LIFDLLPAAKF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E93F340)
#define LIFDLLPAAKF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E93F050)
#define LIFDLLPAAKF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E93F430)
#define LIFDLLPAAKF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E93F400)
#define LIFDLLPAAKF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E93F080)
#define LIFDLLPAAKF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E93F370)
#define LIFDLLPAAKF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E93F3D0)

inline static constexpr unsigned int LIFDLLPAAKF_TypeDefinitionIndex = 31644;

	class LIFDLLPAAKF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::LIFDLLPAAKF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LIFDLLPAAKF*>**)UnitySDK::FromName("", "LIFDLLPAAKF")->GetStaticField(0x37F70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFDLLPAAKF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LIFDLLPAAKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LIFDLLPAAKF*))((::PBYTE)hIl2Cpp + LIFDLLPAAKF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIFDLLPAAKF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LIFDLLPAAKF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LIFDLLPAAKF*>*(*)())((::PBYTE)hIl2Cpp + LIFDLLPAAKF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFDLLPAAKF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LIFDLLPAAKF* Clone()
		{
			return ((::LIFDLLPAAKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFDLLPAAKF_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LIFDLLPAAKF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LIFDLLPAAKF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LIFDLLPAAKF*))((::PBYTE)hIl2Cpp + LIFDLLPAAKF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFDLLPAAKF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFDLLPAAKF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LIFDLLPAAKF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFDLLPAAKF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LIFDLLPAAKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LIFDLLPAAKF*))((::PBYTE)hIl2Cpp + LIFDLLPAAKF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LIFDLLPAAKF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
