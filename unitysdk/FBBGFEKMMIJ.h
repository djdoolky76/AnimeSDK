#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBBGFEKMMIJ;
class NMHHIBMCJHI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define FBBGFEKMMIJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E32E8E0)
#define FBBGFEKMMIJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E32ED90)
#define FBBGFEKMMIJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E32E100)
#define FBBGFEKMMIJ_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E32E200)
#define FBBGFEKMMIJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E32E050)
#define FBBGFEKMMIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E32E040)
#define FBBGFEKMMIJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E32E450)
#define FBBGFEKMMIJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E32E220)
#define FBBGFEKMMIJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E32E1F0)
#define FBBGFEKMMIJ_FJFMPKDONJF_OFFSET UNITYSDK_OFFSET(0x1E32E1D0)
#define FBBGFEKMMIJ_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E32E210)
#define FBBGFEKMMIJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E32E680)
#define FBBGFEKMMIJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E32E000)
#define FBBGFEKMMIJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E32EB60)
#define FBBGFEKMMIJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E32E9F0)
#define FBBGFEKMMIJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E32E1E0)
#define FBBGFEKMMIJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E32E030)
#define FBBGFEKMMIJ_PNHHCFDBIBF_OFFSET UNITYSDK_OFFSET(0x1E32E1C0)
#define FBBGFEKMMIJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E32E740)
#define FBBGFEKMMIJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E32E7A0)

inline static constexpr unsigned int FBBGFEKMMIJ_TypeDefinitionIndex = 31446;

	class FBBGFEKMMIJ : public ::System::Object
	{
	public:
		::Proto::ItemList* JDAFJANAEBG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::NMHHIBMCJHI* CEPGCMBOKOH; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser_1<::FBBGFEKMMIJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FBBGFEKMMIJ*>**)UnitySDK::FromName("", "FBBGFEKMMIJ")->GetStaticField(0x58C40);
		}

		// static const ::System::Object BKOEOFFCIOB; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBGFEKMMIJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FBBGFEKMMIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBBGFEKMMIJ*))((::PBYTE)hIl2Cpp + FBBGFEKMMIJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBBGFEKMMIJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FBBGFEKMMIJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FBBGFEKMMIJ*>*(*)())((::PBYTE)hIl2Cpp + FBBGFEKMMIJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBGFEKMMIJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FBBGFEKMMIJ* Clone()
		{
			return ((::FBBGFEKMMIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBGFEKMMIJ_CLONE_OFFSET))(this);
		}

		::NMHHIBMCJHI* PNHHCFDBIBF()
		{
			return ((::NMHHIBMCJHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBGFEKMMIJ_PNHHCFDBIBF_OFFSET))(this);
		}

		::System::Void FJFMPKDONJF(::NMHHIBMCJHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMHHIBMCJHI*))((::PBYTE)hIl2Cpp + FBBGFEKMMIJ_FJFMPKDONJF_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBGFEKMMIJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FBBGFEKMMIJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBGFEKMMIJ_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + FBBGFEKMMIJ_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBBGFEKMMIJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FBBGFEKMMIJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FBBGFEKMMIJ*))((::PBYTE)hIl2Cpp + FBBGFEKMMIJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBGFEKMMIJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBGFEKMMIJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FBBGFEKMMIJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBGFEKMMIJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FBBGFEKMMIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBBGFEKMMIJ*))((::PBYTE)hIl2Cpp + FBBGFEKMMIJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FBBGFEKMMIJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
