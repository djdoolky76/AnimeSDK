#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLMAAHDFLGC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NLMAAHDFLGC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FA2BDD0)
#define NLMAAHDFLGC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA2BE70)
#define NLMAAHDFLGC_CLONE_OFFSET UNITYSDK_OFFSET(0x1FA2BAC0)
#define NLMAAHDFLGC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FA2BA90)
#define NLMAAHDFLGC_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA2BA80)
#define NLMAAHDFLGC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FA2BBD0)
#define NLMAAHDFLGC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FA2BB00)
#define NLMAAHDFLGC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FA2BD30)
#define NLMAAHDFLGC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FA2BA40)
#define NLMAAHDFLGC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FA2BE20)
#define NLMAAHDFLGC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FA2BDF0)
#define NLMAAHDFLGC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FA2BA70)
#define NLMAAHDFLGC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FA2BD60)
#define NLMAAHDFLGC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FA2BDC0)

inline static constexpr unsigned int NLMAAHDFLGC_TypeDefinitionIndex = 30602;

	class NLMAAHDFLGC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::NLMAAHDFLGC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NLMAAHDFLGC*>**)UnitySDK::FromName("", "NLMAAHDFLGC")->GetStaticField(0x68E20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMAAHDFLGC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NLMAAHDFLGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLMAAHDFLGC*))((::PBYTE)hIl2Cpp + NLMAAHDFLGC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLMAAHDFLGC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NLMAAHDFLGC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NLMAAHDFLGC*>*(*)())((::PBYTE)hIl2Cpp + NLMAAHDFLGC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMAAHDFLGC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NLMAAHDFLGC* Clone()
		{
			return ((::NLMAAHDFLGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMAAHDFLGC_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NLMAAHDFLGC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NLMAAHDFLGC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NLMAAHDFLGC*))((::PBYTE)hIl2Cpp + NLMAAHDFLGC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMAAHDFLGC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMAAHDFLGC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NLMAAHDFLGC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMAAHDFLGC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NLMAAHDFLGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLMAAHDFLGC*))((::PBYTE)hIl2Cpp + NLMAAHDFLGC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NLMAAHDFLGC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
