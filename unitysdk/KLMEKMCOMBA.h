#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLMEKMCOMBA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define KLMEKMCOMBA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8912A0)
#define KLMEKMCOMBA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E891540)
#define KLMEKMCOMBA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E890C30)
#define KLMEKMCOMBA_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E890CB0)
#define KLMEKMCOMBA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E890BC0)
#define KLMEKMCOMBA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E890BB0)
#define KLMEKMCOMBA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E890E40)
#define KLMEKMCOMBA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E890CD0)
#define KLMEKMCOMBA_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E890CC0)
#define KLMEKMCOMBA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E891110)
#define KLMEKMCOMBA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E890B70)
#define KLMEKMCOMBA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E891390)
#define KLMEKMCOMBA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E891300)
#define KLMEKMCOMBA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E890BA0)
#define KLMEKMCOMBA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8911B0)
#define KLMEKMCOMBA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E891210)

inline static constexpr unsigned int KLMEKMCOMBA_TypeDefinitionIndex = 32090;

	class KLMEKMCOMBA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Proto::ItemList* JDAFJANAEBG; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KLMEKMCOMBA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KLMEKMCOMBA*>**)UnitySDK::FromName("", "KLMEKMCOMBA")->GetStaticField(0x217B0);
		}

		// static const ::System::Object EBMIJAAKMMH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMEKMCOMBA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KLMEKMCOMBA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLMEKMCOMBA*))((::PBYTE)hIl2Cpp + KLMEKMCOMBA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLMEKMCOMBA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KLMEKMCOMBA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KLMEKMCOMBA*>*(*)())((::PBYTE)hIl2Cpp + KLMEKMCOMBA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMEKMCOMBA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KLMEKMCOMBA* Clone()
		{
			return ((::KLMEKMCOMBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMEKMCOMBA_CLONE_OFFSET))(this);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMEKMCOMBA_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + KLMEKMCOMBA_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KLMEKMCOMBA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KLMEKMCOMBA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KLMEKMCOMBA*))((::PBYTE)hIl2Cpp + KLMEKMCOMBA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMEKMCOMBA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMEKMCOMBA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KLMEKMCOMBA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMEKMCOMBA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KLMEKMCOMBA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLMEKMCOMBA*))((::PBYTE)hIl2Cpp + KLMEKMCOMBA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KLMEKMCOMBA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
