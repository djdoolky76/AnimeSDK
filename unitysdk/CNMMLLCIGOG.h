#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNMMLLCIGOG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define CNMMLLCIGOG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F404A80)
#define CNMMLLCIGOG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F404E60)
#define CNMMLLCIGOG_CLONE_OFFSET UNITYSDK_OFFSET(0x1F404440)
#define CNMMLLCIGOG_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1F4044D0)
#define CNMMLLCIGOG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F4043C0)
#define CNMMLLCIGOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4043B0)
#define CNMMLLCIGOG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F4046C0)
#define CNMMLLCIGOG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F404530)
#define CNMMLLCIGOG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F404520)
#define CNMMLLCIGOG_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1F4044E0)
#define CNMMLLCIGOG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F404850)
#define CNMMLLCIGOG_INAEHNCKBJC_OFFSET UNITYSDK_OFFSET(0x1F404500)
#define CNMMLLCIGOG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F404370)
#define CNMMLLCIGOG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F404C80)
#define CNMMLLCIGOG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F404BE0)
#define CNMMLLCIGOG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F404510)
#define CNMMLLCIGOG_OLBKJMAIDKH_OFFSET UNITYSDK_OFFSET(0x1F4044F0)
#define CNMMLLCIGOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F4043A0)
#define CNMMLLCIGOG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F4048E0)
#define CNMMLLCIGOG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F404940)

inline static constexpr unsigned int CNMMLLCIGOG_TypeDefinitionIndex = 26495;

	class CNMMLLCIGOG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Proto::ItemList* JDAFJANAEBG; // 0x18
		::System::UInt32 OFAGPEOKFKD; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::MessageParser_1<::CNMMLLCIGOG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CNMMLLCIGOG*>**)UnitySDK::FromName("", "CNMMLLCIGOG")->GetStaticField(0x1ABA0);
		}

		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object FDJBMJHPBGK; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMMLLCIGOG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CNMMLLCIGOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNMMLLCIGOG*))((::PBYTE)hIl2Cpp + CNMMLLCIGOG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNMMLLCIGOG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CNMMLLCIGOG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CNMMLLCIGOG*>*(*)())((::PBYTE)hIl2Cpp + CNMMLLCIGOG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMMLLCIGOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CNMMLLCIGOG* Clone()
		{
			return ((::CNMMLLCIGOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMMLLCIGOG_CLONE_OFFSET))(this);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMMLLCIGOG_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CNMMLLCIGOG_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::UInt32 OLBKJMAIDKH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMMLLCIGOG_OLBKJMAIDKH_OFFSET))(this);
		}

		::System::Void INAEHNCKBJC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CNMMLLCIGOG_INAEHNCKBJC_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMMLLCIGOG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CNMMLLCIGOG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CNMMLLCIGOG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CNMMLLCIGOG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CNMMLLCIGOG*))((::PBYTE)hIl2Cpp + CNMMLLCIGOG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMMLLCIGOG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMMLLCIGOG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CNMMLLCIGOG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMMLLCIGOG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CNMMLLCIGOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNMMLLCIGOG*))((::PBYTE)hIl2Cpp + CNMMLLCIGOG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CNMMLLCIGOG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
