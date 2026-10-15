#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJMKOJEHMII;
class MEEPKLELIKK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define MEEPKLELIKK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA0AAB0)
#define MEEPKLELIKK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA0AEB0)
#define MEEPKLELIKK_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA0A250)
#define MEEPKLELIKK_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1EA0A330)
#define MEEPKLELIKK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA0A1A0)
#define MEEPKLELIKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA0A190)
#define MEEPKLELIKK_DDLGCOIFIAB_OFFSET UNITYSDK_OFFSET(0x1EA0A320)
#define MEEPKLELIKK_ELHFCMBPKIL_OFFSET UNITYSDK_OFFSET(0x1EA0A310)
#define MEEPKLELIKK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA0A5A0)
#define MEEPKLELIKK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA0A370)
#define MEEPKLELIKK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA0A360)
#define MEEPKLELIKK_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1EA0A340)
#define MEEPKLELIKK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA0A7D0)
#define MEEPKLELIKK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA0A150)
#define MEEPKLELIKK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA0ACB0)
#define MEEPKLELIKK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA0ABC0)
#define MEEPKLELIKK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA0A350)
#define MEEPKLELIKK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA0A180)
#define MEEPKLELIKK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA0A910)
#define MEEPKLELIKK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA0A970)

inline static constexpr unsigned int MEEPKLELIKK_TypeDefinitionIndex = 34946;

	class MEEPKLELIKK : public ::System::Object
	{
	public:
		::KJMKOJEHMII* HOPDKOBGIGG; // 0x10
		::Proto::ItemList* JDAFJANAEBG; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MEEPKLELIKK")->GetStaticField(0x4A5E0);
		}

		// static const ::System::Object NLGBNLCIKGN; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEPKLELIKK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MEEPKLELIKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEEPKLELIKK*))((::PBYTE)hIl2Cpp + MEEPKLELIKK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEEPKLELIKK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MEEPKLELIKK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEPKLELIKK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MEEPKLELIKK* Clone()
		{
			return ((::MEEPKLELIKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEPKLELIKK_CLONE_OFFSET))(this);
		}

		::KJMKOJEHMII* ELHFCMBPKIL()
		{
			return ((::KJMKOJEHMII*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEPKLELIKK_ELHFCMBPKIL_OFFSET))(this);
		}

		::System::Void DDLGCOIFIAB(::KJMKOJEHMII* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJMKOJEHMII*))((::PBYTE)hIl2Cpp + MEEPKLELIKK_DDLGCOIFIAB_OFFSET))(this, a1);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEPKLELIKK_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + MEEPKLELIKK_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEPKLELIKK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MEEPKLELIKK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MEEPKLELIKK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MEEPKLELIKK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MEEPKLELIKK*))((::PBYTE)hIl2Cpp + MEEPKLELIKK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEPKLELIKK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEPKLELIKK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MEEPKLELIKK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEPKLELIKK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MEEPKLELIKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEEPKLELIKK*))((::PBYTE)hIl2Cpp + MEEPKLELIKK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MEEPKLELIKK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
