#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HJDKFAGLCEH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define HJDKFAGLCEH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5A6310)
#define HJDKFAGLCEH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5A6630)
#define HJDKFAGLCEH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5A5D80)
#define HJDKFAGLCEH_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E5A5E20)
#define HJDKFAGLCEH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5A5D10)
#define HJDKFAGLCEH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5A5D00)
#define HJDKFAGLCEH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5A5FC0)
#define HJDKFAGLCEH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5A5E40)
#define HJDKFAGLCEH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E5A5E10)
#define HJDKFAGLCEH_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E5A5E30)
#define HJDKFAGLCEH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5A6140)
#define HJDKFAGLCEH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5A5CC0)
#define HJDKFAGLCEH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5A6470)
#define HJDKFAGLCEH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5A63E0)
#define HJDKFAGLCEH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E5A5E00)
#define HJDKFAGLCEH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5A5CF0)
#define HJDKFAGLCEH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5A61D0)
#define HJDKFAGLCEH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5A6230)

inline static constexpr unsigned int HJDKFAGLCEH_TypeDefinitionIndex = 26010;

	class HJDKFAGLCEH : public ::System::Object
	{
	public:
		::Proto::ItemList* JDAFJANAEBG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::HJDKFAGLCEH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HJDKFAGLCEH*>**)UnitySDK::FromName("", "HJDKFAGLCEH")->GetStaticField(0x3F780);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDKFAGLCEH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HJDKFAGLCEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJDKFAGLCEH*))((::PBYTE)hIl2Cpp + HJDKFAGLCEH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJDKFAGLCEH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HJDKFAGLCEH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HJDKFAGLCEH*>*(*)())((::PBYTE)hIl2Cpp + HJDKFAGLCEH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDKFAGLCEH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HJDKFAGLCEH* Clone()
		{
			return ((::HJDKFAGLCEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDKFAGLCEH_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDKFAGLCEH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HJDKFAGLCEH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDKFAGLCEH_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + HJDKFAGLCEH_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HJDKFAGLCEH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HJDKFAGLCEH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HJDKFAGLCEH*))((::PBYTE)hIl2Cpp + HJDKFAGLCEH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDKFAGLCEH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDKFAGLCEH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HJDKFAGLCEH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDKFAGLCEH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HJDKFAGLCEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJDKFAGLCEH*))((::PBYTE)hIl2Cpp + HJDKFAGLCEH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HJDKFAGLCEH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
