#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKEOMFNPKPO;
class KOFMGCNIMIN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CKEOMFNPKPO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0E9AD0)
#define CKEOMFNPKPO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0E9D50)
#define CKEOMFNPKPO_CGFNAFJEEKG_OFFSET UNITYSDK_OFFSET(0x1E0E9530)
#define CKEOMFNPKPO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0E9490)
#define CKEOMFNPKPO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0E9410)
#define CKEOMFNPKPO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0E9400)
#define CKEOMFNPKPO_DKPHFOGFAGI_OFFSET UNITYSDK_OFFSET(0x1E0E9520)
#define CKEOMFNPKPO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0E96B0)
#define CKEOMFNPKPO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0E9540)
#define CKEOMFNPKPO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0E9980)
#define CKEOMFNPKPO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0E93C0)
#define CKEOMFNPKPO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0E9BD0)
#define CKEOMFNPKPO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0E9B30)
#define CKEOMFNPKPO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0E93F0)
#define CKEOMFNPKPO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0E99E0)
#define CKEOMFNPKPO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0E9A40)

inline static constexpr unsigned int CKEOMFNPKPO_TypeDefinitionIndex = 32870;

	class CKEOMFNPKPO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::KOFMGCNIMIN* NLLPBGADLLJ; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CKEOMFNPKPO")->GetStaticField(0x1ADA0);
		}

		// static const ::System::Object CCMJLMIDGGC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKEOMFNPKPO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CKEOMFNPKPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKEOMFNPKPO*))((::PBYTE)hIl2Cpp + CKEOMFNPKPO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKEOMFNPKPO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CKEOMFNPKPO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKEOMFNPKPO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CKEOMFNPKPO* Clone()
		{
			return ((::CKEOMFNPKPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKEOMFNPKPO_CLONE_OFFSET))(this);
		}

		::KOFMGCNIMIN* DKPHFOGFAGI()
		{
			return ((::KOFMGCNIMIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKEOMFNPKPO_DKPHFOGFAGI_OFFSET))(this);
		}

		::System::Void CGFNAFJEEKG(::KOFMGCNIMIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOFMGCNIMIN*))((::PBYTE)hIl2Cpp + CKEOMFNPKPO_CGFNAFJEEKG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CKEOMFNPKPO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CKEOMFNPKPO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CKEOMFNPKPO*))((::PBYTE)hIl2Cpp + CKEOMFNPKPO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKEOMFNPKPO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKEOMFNPKPO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CKEOMFNPKPO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKEOMFNPKPO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CKEOMFNPKPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKEOMFNPKPO*))((::PBYTE)hIl2Cpp + CKEOMFNPKPO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CKEOMFNPKPO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
