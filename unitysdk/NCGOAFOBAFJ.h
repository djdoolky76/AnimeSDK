#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCGOAFOBAFJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NCGOAFOBAFJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x202F12F0)
#define NCGOAFOBAFJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x202F1510)
#define NCGOAFOBAFJ_CLONE_OFFSET UNITYSDK_OFFSET(0x202F0EE0)
#define NCGOAFOBAFJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x202F0EB0)
#define NCGOAFOBAFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x202F0EA0)
#define NCGOAFOBAFJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x202F1070)
#define NCGOAFOBAFJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x202F0F70)
#define NCGOAFOBAFJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x202F11E0)
#define NCGOAFOBAFJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x202F0E30)
#define NCGOAFOBAFJ_KIBGDKKJFHH_OFFSET UNITYSDK_OFFSET(0x202F0F50)
#define NCGOAFOBAFJ_LDDEMGKBCBN_OFFSET UNITYSDK_OFFSET(0x202F0F60)
#define NCGOAFOBAFJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x202F13B0)
#define NCGOAFOBAFJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x202F1380)
#define NCGOAFOBAFJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x202F0E90)
#define NCGOAFOBAFJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x202F1210)
#define NCGOAFOBAFJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x202F1270)

inline static constexpr unsigned int NCGOAFOBAFJ_TypeDefinitionIndex = 30031;

	class NCGOAFOBAFJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GBDNOABACCM; // 0x18
		static ::Google::Protobuf::MessageParser_1<::NCGOAFOBAFJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NCGOAFOBAFJ*>**)UnitySDK::FromName("", "NCGOAFOBAFJ")->GetStaticField(0x5CC60);
		}

		// static const ::System::Object DPKNEIECABN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGOAFOBAFJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NCGOAFOBAFJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCGOAFOBAFJ*))((::PBYTE)hIl2Cpp + NCGOAFOBAFJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCGOAFOBAFJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NCGOAFOBAFJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NCGOAFOBAFJ*>*(*)())((::PBYTE)hIl2Cpp + NCGOAFOBAFJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGOAFOBAFJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NCGOAFOBAFJ* Clone()
		{
			return ((::NCGOAFOBAFJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGOAFOBAFJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 KIBGDKKJFHH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGOAFOBAFJ_KIBGDKKJFHH_OFFSET))(this);
		}

		::System::Void LDDEMGKBCBN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NCGOAFOBAFJ_LDDEMGKBCBN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NCGOAFOBAFJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NCGOAFOBAFJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NCGOAFOBAFJ*))((::PBYTE)hIl2Cpp + NCGOAFOBAFJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGOAFOBAFJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGOAFOBAFJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NCGOAFOBAFJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGOAFOBAFJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NCGOAFOBAFJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCGOAFOBAFJ*))((::PBYTE)hIl2Cpp + NCGOAFOBAFJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NCGOAFOBAFJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
