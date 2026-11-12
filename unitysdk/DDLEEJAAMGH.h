#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDLEEJAAMGH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DDLEEJAAMGH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F45ADA0)
#define DDLEEJAAMGH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F45AF60)
#define DDLEEJAAMGH_CLONE_OFFSET UNITYSDK_OFFSET(0x1F45A980)
#define DDLEEJAAMGH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F45A950)
#define DDLEEJAAMGH_CTOR_OFFSET UNITYSDK_OFFSET(0x1F45A940)
#define DDLEEJAAMGH_DEJBKFOMCOO_OFFSET UNITYSDK_OFFSET(0x1F45A9D0)
#define DDLEEJAAMGH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F45AAD0)
#define DDLEEJAAMGH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F45A9F0)
#define DDLEEJAAMGH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F45AC50)
#define DDLEEJAAMGH_GMPHLFAHODH_OFFSET UNITYSDK_OFFSET(0x1F45A9E0)
#define DDLEEJAAMGH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F45A900)
#define DDLEEJAAMGH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F45AE00)
#define DDLEEJAAMGH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F45ADD0)
#define DDLEEJAAMGH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F45A930)
#define DDLEEJAAMGH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F45AC80)
#define DDLEEJAAMGH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F45ACE0)

inline static constexpr unsigned int DDLEEJAAMGH_TypeDefinitionIndex = 34482;

	class DDLEEJAAMGH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean JJKJOJLKAGB; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DDLEEJAAMGH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DDLEEJAAMGH*>**)UnitySDK::FromName("", "DDLEEJAAMGH")->GetStaticField(0x27D70);
		}

		// static const ::System::Object HBIEDKPOLHK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLEEJAAMGH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DDLEEJAAMGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDLEEJAAMGH*))((::PBYTE)hIl2Cpp + DDLEEJAAMGH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDLEEJAAMGH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DDLEEJAAMGH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DDLEEJAAMGH*>*(*)())((::PBYTE)hIl2Cpp + DDLEEJAAMGH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLEEJAAMGH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DDLEEJAAMGH* Clone()
		{
			return ((::DDLEEJAAMGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLEEJAAMGH_CLONE_OFFSET))(this);
		}

		::System::Boolean DEJBKFOMCOO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLEEJAAMGH_DEJBKFOMCOO_OFFSET))(this);
		}

		::System::Void GMPHLFAHODH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DDLEEJAAMGH_GMPHLFAHODH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DDLEEJAAMGH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DDLEEJAAMGH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DDLEEJAAMGH*))((::PBYTE)hIl2Cpp + DDLEEJAAMGH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLEEJAAMGH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLEEJAAMGH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DDLEEJAAMGH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLEEJAAMGH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DDLEEJAAMGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDLEEJAAMGH*))((::PBYTE)hIl2Cpp + DDLEEJAAMGH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DDLEEJAAMGH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
