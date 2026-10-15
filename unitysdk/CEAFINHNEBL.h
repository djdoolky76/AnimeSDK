#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEAFINHNEBL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define CEAFINHNEBL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E08D5A0)
#define CEAFINHNEBL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E08D900)
#define CEAFINHNEBL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E08CF70)
#define CEAFINHNEBL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E08CF00)
#define CEAFINHNEBL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E08CEF0)
#define CEAFINHNEBL_EGINIIDBAMH_OFFSET UNITYSDK_OFFSET(0x1E08D000)
#define CEAFINHNEBL_EOFNEJIAOJI_OFFSET UNITYSDK_OFFSET(0x1E08D010)
#define CEAFINHNEBL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E08D170)
#define CEAFINHNEBL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E08D070)
#define CEAFINHNEBL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E08D060)
#define CEAFINHNEBL_FCABEJKEOCO_OFFSET UNITYSDK_OFFSET(0x1E08CFF0)
#define CEAFINHNEBL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E08D310)
#define CEAFINHNEBL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E08CEB0)
#define CEAFINHNEBL_JLOHFHNNCBJ_OFFSET UNITYSDK_OFFSET(0x1E08D020)
#define CEAFINHNEBL_LEAGLHLPODK_OFFSET UNITYSDK_OFFSET(0x1E08D040)
#define CEAFINHNEBL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E08D810)
#define CEAFINHNEBL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E08D760)
#define CEAFINHNEBL_MJMDBOEPLMN_OFFSET UNITYSDK_OFFSET(0x1E08D030)
#define CEAFINHNEBL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E08D050)
#define CEAFINHNEBL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E08CEE0)
#define CEAFINHNEBL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E08D3B0)
#define CEAFINHNEBL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E08D410)

inline static constexpr unsigned int CEAFINHNEBL_TypeDefinitionIndex = 32223;

	class CEAFINHNEBL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Proto::ItemList* DJOEHFPMIGI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 IFJEPCLOOED; // 0x24
		::System::UInt32 JPBNOBHKPJC; // 0x28
		static ::Google::Protobuf::MessageParser_1<::CEAFINHNEBL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CEAFINHNEBL*>**)UnitySDK::FromName("", "CEAFINHNEBL")->GetStaticField(0x10050);
		}

		// static const ::System::Object BDGFLAMBPOC; // 0x0
		// static const ::System::Object BGLLEEOCPHM; // 0x0
		// static const ::System::Object LNAMBCDBPIH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAFINHNEBL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CEAFINHNEBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEAFINHNEBL*))((::PBYTE)hIl2Cpp + CEAFINHNEBL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEAFINHNEBL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CEAFINHNEBL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CEAFINHNEBL*>*(*)())((::PBYTE)hIl2Cpp + CEAFINHNEBL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAFINHNEBL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CEAFINHNEBL* Clone()
		{
			return ((::CEAFINHNEBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAFINHNEBL_CLONE_OFFSET))(this);
		}

		::System::UInt32 FCABEJKEOCO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAFINHNEBL_FCABEJKEOCO_OFFSET))(this);
		}

		::System::Void EGINIIDBAMH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CEAFINHNEBL_EGINIIDBAMH_OFFSET))(this, a1);
		}

		::System::UInt32 EOFNEJIAOJI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAFINHNEBL_EOFNEJIAOJI_OFFSET))(this);
		}

		::System::Void JLOHFHNNCBJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CEAFINHNEBL_JLOHFHNNCBJ_OFFSET))(this, a1);
		}

		::Proto::ItemList* MJMDBOEPLMN()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAFINHNEBL_MJMDBOEPLMN_OFFSET))(this);
		}

		::System::Void LEAGLHLPODK(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CEAFINHNEBL_LEAGLHLPODK_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAFINHNEBL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CEAFINHNEBL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CEAFINHNEBL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CEAFINHNEBL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CEAFINHNEBL*))((::PBYTE)hIl2Cpp + CEAFINHNEBL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAFINHNEBL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAFINHNEBL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CEAFINHNEBL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAFINHNEBL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CEAFINHNEBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEAFINHNEBL*))((::PBYTE)hIl2Cpp + CEAFINHNEBL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CEAFINHNEBL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
