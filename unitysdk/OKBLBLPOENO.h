#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KOFMGCNIMIN;
class OKBLBLPOENO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OKBLBLPOENO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F137D90)
#define OKBLBLPOENO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F138010)
#define OKBLBLPOENO_CGFNAFJEEKG_OFFSET UNITYSDK_OFFSET(0x1F1377F0)
#define OKBLBLPOENO_CLONE_OFFSET UNITYSDK_OFFSET(0x1F137750)
#define OKBLBLPOENO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F1376D0)
#define OKBLBLPOENO_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1376C0)
#define OKBLBLPOENO_DKPHFOGFAGI_OFFSET UNITYSDK_OFFSET(0x1F1377E0)
#define OKBLBLPOENO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F137970)
#define OKBLBLPOENO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F137800)
#define OKBLBLPOENO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F137C40)
#define OKBLBLPOENO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F137680)
#define OKBLBLPOENO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F137E90)
#define OKBLBLPOENO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F137DF0)
#define OKBLBLPOENO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F1376B0)
#define OKBLBLPOENO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F137CA0)
#define OKBLBLPOENO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F137D00)

inline static constexpr unsigned int OKBLBLPOENO_TypeDefinitionIndex = 33781;

	class OKBLBLPOENO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::KOFMGCNIMIN* NLLPBGADLLJ; // 0x18
		static ::Google::Protobuf::MessageParser_1<::OKBLBLPOENO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OKBLBLPOENO*>**)UnitySDK::FromName("", "OKBLBLPOENO")->GetStaticField(0x1C340);
		}

		// static const ::System::Object CCMJLMIDGGC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKBLBLPOENO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OKBLBLPOENO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKBLBLPOENO*))((::PBYTE)hIl2Cpp + OKBLBLPOENO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKBLBLPOENO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OKBLBLPOENO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OKBLBLPOENO*>*(*)())((::PBYTE)hIl2Cpp + OKBLBLPOENO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKBLBLPOENO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OKBLBLPOENO* Clone()
		{
			return ((::OKBLBLPOENO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKBLBLPOENO_CLONE_OFFSET))(this);
		}

		::KOFMGCNIMIN* DKPHFOGFAGI()
		{
			return ((::KOFMGCNIMIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKBLBLPOENO_DKPHFOGFAGI_OFFSET))(this);
		}

		::System::Void CGFNAFJEEKG(::KOFMGCNIMIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOFMGCNIMIN*))((::PBYTE)hIl2Cpp + OKBLBLPOENO_CGFNAFJEEKG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OKBLBLPOENO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OKBLBLPOENO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OKBLBLPOENO*))((::PBYTE)hIl2Cpp + OKBLBLPOENO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKBLBLPOENO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKBLBLPOENO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OKBLBLPOENO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKBLBLPOENO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OKBLBLPOENO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKBLBLPOENO*))((::PBYTE)hIl2Cpp + OKBLBLPOENO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OKBLBLPOENO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
