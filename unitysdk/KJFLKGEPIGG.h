#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCMCKOKEJNI;
class KJFLKGEPIGG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KJFLKGEPIGG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E83E880)
#define KJFLKGEPIGG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E83EBB0)
#define KJFLKGEPIGG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E83E150)
#define KJFLKGEPIGG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E83E0C0)
#define KJFLKGEPIGG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E83E0B0)
#define KJFLKGEPIGG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E83E380)
#define KJFLKGEPIGG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E83E210)
#define KJFLKGEPIGG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E83E650)
#define KJFLKGEPIGG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E83E070)
#define KJFLKGEPIGG_LFLEEHMPGHJ_OFFSET UNITYSDK_OFFSET(0x1E83E1F0)
#define KJFLKGEPIGG_LJLKHJNMCHF_OFFSET UNITYSDK_OFFSET(0x1E83E200)
#define KJFLKGEPIGG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E83E9E0)
#define KJFLKGEPIGG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E83E8E0)
#define KJFLKGEPIGG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E83E0A0)
#define KJFLKGEPIGG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E83E790)
#define KJFLKGEPIGG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E83E7F0)

inline static constexpr unsigned int KJFLKGEPIGG_TypeDefinitionIndex = 31012;

	class KJFLKGEPIGG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::CCMCKOKEJNI* DGKCCADKLJM; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KJFLKGEPIGG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KJFLKGEPIGG*>**)UnitySDK::FromName("", "KJFLKGEPIGG")->GetStaticField(0x1A000);
		}

		// static const ::System::Object POCBBKBBPMC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFLKGEPIGG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KJFLKGEPIGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJFLKGEPIGG*))((::PBYTE)hIl2Cpp + KJFLKGEPIGG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJFLKGEPIGG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KJFLKGEPIGG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KJFLKGEPIGG*>*(*)())((::PBYTE)hIl2Cpp + KJFLKGEPIGG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFLKGEPIGG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KJFLKGEPIGG* Clone()
		{
			return ((::KJFLKGEPIGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFLKGEPIGG_CLONE_OFFSET))(this);
		}

		::CCMCKOKEJNI* LFLEEHMPGHJ()
		{
			return ((::CCMCKOKEJNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFLKGEPIGG_LFLEEHMPGHJ_OFFSET))(this);
		}

		::System::Void LJLKHJNMCHF(::CCMCKOKEJNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCMCKOKEJNI*))((::PBYTE)hIl2Cpp + KJFLKGEPIGG_LJLKHJNMCHF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KJFLKGEPIGG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KJFLKGEPIGG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KJFLKGEPIGG*))((::PBYTE)hIl2Cpp + KJFLKGEPIGG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFLKGEPIGG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFLKGEPIGG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KJFLKGEPIGG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFLKGEPIGG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KJFLKGEPIGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJFLKGEPIGG*))((::PBYTE)hIl2Cpp + KJFLKGEPIGG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KJFLKGEPIGG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
