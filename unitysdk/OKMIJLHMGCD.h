#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAJDPEBBFMG;
class OKMIJLHMGCD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OKMIJLHMGCD_ADFBNDEBELO_OFFSET UNITYSDK_OFFSET(0x1DEA04B0)
#define OKMIJLHMGCD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEA0A00)
#define OKMIJLHMGCD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEA0D50)
#define OKMIJLHMGCD_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEA0360)
#define OKMIJLHMGCD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEA0230)
#define OKMIJLHMGCD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEA0220)
#define OKMIJLHMGCD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEA0660)
#define OKMIJLHMGCD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEA04E0)
#define OKMIJLHMGCD_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DEA04D0)
#define OKMIJLHMGCD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEA07E0)
#define OKMIJLHMGCD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEA01E0)
#define OKMIJLHMGCD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEA0BC0)
#define OKMIJLHMGCD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEA0AD0)
#define OKMIJLHMGCD_NHLEFCEKMAM_OFFSET UNITYSDK_OFFSET(0x1DEA04A0)
#define OKMIJLHMGCD_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DEA04C0)
#define OKMIJLHMGCD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEA0210)
#define OKMIJLHMGCD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEA08C0)
#define OKMIJLHMGCD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEA0920)

inline static constexpr unsigned int OKMIJLHMGCD_TypeDefinitionIndex = 27381;

	class OKMIJLHMGCD : public ::System::Object
	{
	public:
		::GAJDPEBBFMG* CCAGFEOIGIE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::OKMIJLHMGCD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OKMIJLHMGCD*>**)UnitySDK::FromName("", "OKMIJLHMGCD")->GetStaticField(0x23050);
		}

		// static const ::System::Object PHNAANFIFGB; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMIJLHMGCD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OKMIJLHMGCD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKMIJLHMGCD*))((::PBYTE)hIl2Cpp + OKMIJLHMGCD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKMIJLHMGCD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OKMIJLHMGCD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OKMIJLHMGCD*>*(*)())((::PBYTE)hIl2Cpp + OKMIJLHMGCD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMIJLHMGCD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OKMIJLHMGCD* Clone()
		{
			return ((::OKMIJLHMGCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMIJLHMGCD_CLONE_OFFSET))(this);
		}

		::GAJDPEBBFMG* NHLEFCEKMAM()
		{
			return ((::GAJDPEBBFMG*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMIJLHMGCD_NHLEFCEKMAM_OFFSET))(this);
		}

		::System::Void ADFBNDEBELO(::GAJDPEBBFMG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAJDPEBBFMG*))((::PBYTE)hIl2Cpp + OKMIJLHMGCD_ADFBNDEBELO_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMIJLHMGCD_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OKMIJLHMGCD_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OKMIJLHMGCD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OKMIJLHMGCD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OKMIJLHMGCD*))((::PBYTE)hIl2Cpp + OKMIJLHMGCD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMIJLHMGCD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMIJLHMGCD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OKMIJLHMGCD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMIJLHMGCD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OKMIJLHMGCD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKMIJLHMGCD*))((::PBYTE)hIl2Cpp + OKMIJLHMGCD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OKMIJLHMGCD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
