#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPPJOPMMLOA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KPPJOPMMLOA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8965B0)
#define KPPJOPMMLOA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8967D0)
#define KPPJOPMMLOA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8961A0)
#define KPPJOPMMLOA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E896170)
#define KPPJOPMMLOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E896160)
#define KPPJOPMMLOA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E896330)
#define KPPJOPMMLOA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E896230)
#define KPPJOPMMLOA_FJJCIOKAKAH_OFFSET UNITYSDK_OFFSET(0x1E896210)
#define KPPJOPMMLOA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8964A0)
#define KPPJOPMMLOA_HHEHMAIINGM_OFFSET UNITYSDK_OFFSET(0x1E896220)
#define KPPJOPMMLOA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8960F0)
#define KPPJOPMMLOA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E896670)
#define KPPJOPMMLOA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E896640)
#define KPPJOPMMLOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E896150)
#define KPPJOPMMLOA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8964D0)
#define KPPJOPMMLOA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E896530)

inline static constexpr unsigned int KPPJOPMMLOA_TypeDefinitionIndex = 25779;

	class KPPJOPMMLOA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NIKJIKABOIM; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KPPJOPMMLOA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KPPJOPMMLOA*>**)UnitySDK::FromName("", "KPPJOPMMLOA")->GetStaticField(0x233C0);
		}

		// static const ::System::Object FLFCIJFKMOG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPJOPMMLOA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KPPJOPMMLOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPPJOPMMLOA*))((::PBYTE)hIl2Cpp + KPPJOPMMLOA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPPJOPMMLOA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KPPJOPMMLOA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KPPJOPMMLOA*>*(*)())((::PBYTE)hIl2Cpp + KPPJOPMMLOA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPJOPMMLOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KPPJOPMMLOA* Clone()
		{
			return ((::KPPJOPMMLOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPJOPMMLOA_CLONE_OFFSET))(this);
		}

		::System::UInt32 FJJCIOKAKAH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPJOPMMLOA_FJJCIOKAKAH_OFFSET))(this);
		}

		::System::Void HHEHMAIINGM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KPPJOPMMLOA_HHEHMAIINGM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KPPJOPMMLOA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KPPJOPMMLOA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KPPJOPMMLOA*))((::PBYTE)hIl2Cpp + KPPJOPMMLOA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPJOPMMLOA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPJOPMMLOA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KPPJOPMMLOA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPJOPMMLOA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KPPJOPMMLOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPPJOPMMLOA*))((::PBYTE)hIl2Cpp + KPPJOPMMLOA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KPPJOPMMLOA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
