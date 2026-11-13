#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HAIFIDAHGJG;
class HHMGCCNGECJ;
class JBJNJPAOCDA;
class KPBCIIFIAGI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HHMGCCNGECJ_BAOOLAENFMC_OFFSET UNITYSDK_OFFSET(0x20514CA0)
#define HHMGCCNGECJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x205152F0)
#define HHMGCCNGECJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x20515780)
#define HHMGCCNGECJ_CLONE_OFFSET UNITYSDK_OFFSET(0x20514C30)
#define HHMGCCNGECJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20514A60)
#define HHMGCCNGECJ_CTOR_OFFSET UNITYSDK_OFFSET(0x20514A20)
#define HHMGCCNGECJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20514D00)
#define HHMGCCNGECJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x20514CD0)
#define HHMGCCNGECJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x20514CC0)
#define HHMGCCNGECJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20514F80)
#define HHMGCCNGECJ_HHIKOAGMIOE_OFFSET UNITYSDK_OFFSET(0x20514C70)
#define HHMGCCNGECJ_HKEGFHDLOOF_OFFSET UNITYSDK_OFFSET(0x20514C90)
#define HHMGCCNGECJ_JDMCGDBJFIA_OFFSET UNITYSDK_OFFSET(0x20514C60)
#define HHMGCCNGECJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x205149E0)
#define HHMGCCNGECJ_LIGPEECHAIG_OFFSET UNITYSDK_OFFSET(0x20514C80)
#define HHMGCCNGECJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20515650)
#define HHMGCCNGECJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x205154A0)
#define HHMGCCNGECJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x20514CB0)
#define HHMGCCNGECJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20514A10)
#define HHMGCCNGECJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x205150C0)
#define HHMGCCNGECJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x20515120)

inline static constexpr unsigned int HHMGCCNGECJ_TypeDefinitionIndex = 35149;

	class HHMGCCNGECJ : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::JBJNJPAOCDA*>* PJBPLFEOHIA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::KPBCIIFIAGI* KJHCGOCAHMM; // 0x20
		::HAIFIDAHGJG* PHNJLDALHPO; // 0x28
		::System::UInt32 NAEACGPKNNH; // 0x30
		static ::Google::Protobuf::FieldCodec_1<::JBJNJPAOCDA*>** StaticGet_ELNGKCNELPG()
		{
			return (::Google::Protobuf::FieldCodec_1<::JBJNJPAOCDA*>**)UnitySDK::FromName("", "HHMGCCNGECJ")->GetStaticField(0x2E4C0);
		}

		static ::Google::Protobuf::MessageParser_1<::HHMGCCNGECJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HHMGCCNGECJ*>**)UnitySDK::FromName("", "HHMGCCNGECJ")->GetStaticField(0x2E4C8);
		}

		// static const ::System::Object DEEKKMHEIGL; // 0x0
		// static const ::System::Object OJIBDKIEHND; // 0x0
		// static const ::System::Object EAAAHGFIFNB; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMGCCNGECJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HHMGCCNGECJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHMGCCNGECJ*))((::PBYTE)hIl2Cpp + HHMGCCNGECJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHMGCCNGECJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HHMGCCNGECJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HHMGCCNGECJ*>*(*)())((::PBYTE)hIl2Cpp + HHMGCCNGECJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMGCCNGECJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HHMGCCNGECJ* Clone()
		{
			return ((::HHMGCCNGECJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMGCCNGECJ_CLONE_OFFSET))(this);
		}

		::HAIFIDAHGJG* JDMCGDBJFIA()
		{
			return ((::HAIFIDAHGJG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMGCCNGECJ_JDMCGDBJFIA_OFFSET))(this);
		}

		::System::Void HHIKOAGMIOE(::HAIFIDAHGJG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HAIFIDAHGJG*))((::PBYTE)hIl2Cpp + HHMGCCNGECJ_HHIKOAGMIOE_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JBJNJPAOCDA*>* LIGPEECHAIG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JBJNJPAOCDA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMGCCNGECJ_LIGPEECHAIG_OFFSET))(this);
		}

		::KPBCIIFIAGI* HKEGFHDLOOF()
		{
			return ((::KPBCIIFIAGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMGCCNGECJ_HKEGFHDLOOF_OFFSET))(this);
		}

		::System::Void BAOOLAENFMC(::KPBCIIFIAGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPBCIIFIAGI*))((::PBYTE)hIl2Cpp + HHMGCCNGECJ_BAOOLAENFMC_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMGCCNGECJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HHMGCCNGECJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HHMGCCNGECJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HHMGCCNGECJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HHMGCCNGECJ*))((::PBYTE)hIl2Cpp + HHMGCCNGECJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMGCCNGECJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMGCCNGECJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HHMGCCNGECJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMGCCNGECJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HHMGCCNGECJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHMGCCNGECJ*))((::PBYTE)hIl2Cpp + HHMGCCNGECJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HHMGCCNGECJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
