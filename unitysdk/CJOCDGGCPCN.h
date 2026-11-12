#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJOCDGGCPCN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CJOCDGGCPCN_AMDKHOGOJMM_OFFSET UNITYSDK_OFFSET(0x1F3B7350)
#define CJOCDGGCPCN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F3B7740)
#define CJOCDGGCPCN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3B7A20)
#define CJOCDGGCPCN_CLONE_OFFSET UNITYSDK_OFFSET(0x1F3B7290)
#define CJOCDGGCPCN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F3B7250)
#define CJOCDGGCPCN_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3B7240)
#define CJOCDGGCPCN_EEJAHMKEEFC_OFFSET UNITYSDK_OFFSET(0x1F3B7300)
#define CJOCDGGCPCN_ENEIEIPBBPN_OFFSET UNITYSDK_OFFSET(0x1F3B7340)
#define CJOCDGGCPCN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F3B73D0)
#define CJOCDGGCPCN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F3B7370)
#define CJOCDGGCPCN_FAIBDDGBENA_OFFSET UNITYSDK_OFFSET(0x1F3B7320)
#define CJOCDGGCPCN_FFFDGCMLLAI_OFFSET UNITYSDK_OFFSET(0x1F3B7330)
#define CJOCDGGCPCN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F3B74C0)
#define CJOCDGGCPCN_IGGPGCBJDCE_OFFSET UNITYSDK_OFFSET(0x1F3B7360)
#define CJOCDGGCPCN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F3B7200)
#define CJOCDGGCPCN_KGDBFKKHCEM_OFFSET UNITYSDK_OFFSET(0x1F3B7310)
#define CJOCDGGCPCN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F3B7980)
#define CJOCDGGCPCN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F3B7930)
#define CJOCDGGCPCN_MKCIIJINCLJ_OFFSET UNITYSDK_OFFSET(0x1F3B72F0)
#define CJOCDGGCPCN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F3B7230)
#define CJOCDGGCPCN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F3B7510)
#define CJOCDGGCPCN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F3B7570)

inline static constexpr unsigned int CJOCDGGCPCN_TypeDefinitionIndex = 34625;

	class CJOCDGGCPCN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean EJILNELPGIG; // 0x18
		::System::Byte _padding0[0x7];
		::System::Int64 MFHNPAODGGN; // 0x20
		::System::UInt32 EMLBIJJEIBH; // 0x28
		::System::UInt32 JCLFHFHJFJJ; // 0x2C
		static ::Google::Protobuf::MessageParser_1<::CJOCDGGCPCN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CJOCDGGCPCN*>**)UnitySDK::FromName("", "CJOCDGGCPCN")->GetStaticField(0x138B0);
		}

		// static const ::System::Object DOOPJHCPFKN; // 0x0
		// static const ::System::Object EAPHOIJNOFO; // 0x0
		// static const ::System::Object FIEMKPOELCD; // 0x0
		// static const ::System::Object LKEIDDLFFBI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJOCDGGCPCN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CJOCDGGCPCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJOCDGGCPCN*))((::PBYTE)hIl2Cpp + CJOCDGGCPCN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJOCDGGCPCN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CJOCDGGCPCN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CJOCDGGCPCN*>*(*)())((::PBYTE)hIl2Cpp + CJOCDGGCPCN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJOCDGGCPCN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CJOCDGGCPCN* Clone()
		{
			return ((::CJOCDGGCPCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJOCDGGCPCN_CLONE_OFFSET))(this);
		}

		::System::Boolean MKCIIJINCLJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJOCDGGCPCN_MKCIIJINCLJ_OFFSET))(this);
		}

		::System::Void EEJAHMKEEFC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CJOCDGGCPCN_EEJAHMKEEFC_OFFSET))(this, a1);
		}

		::System::UInt32 KGDBFKKHCEM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJOCDGGCPCN_KGDBFKKHCEM_OFFSET))(this);
		}

		::System::Void FAIBDDGBENA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CJOCDGGCPCN_FAIBDDGBENA_OFFSET))(this, a1);
		}

		::System::Int64 FFFDGCMLLAI()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CJOCDGGCPCN_FFFDGCMLLAI_OFFSET))(this);
		}

		::System::Void ENEIEIPBBPN(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CJOCDGGCPCN_ENEIEIPBBPN_OFFSET))(this, a1);
		}

		::System::UInt32 AMDKHOGOJMM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJOCDGGCPCN_AMDKHOGOJMM_OFFSET))(this);
		}

		::System::Void IGGPGCBJDCE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CJOCDGGCPCN_IGGPGCBJDCE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CJOCDGGCPCN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CJOCDGGCPCN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CJOCDGGCPCN*))((::PBYTE)hIl2Cpp + CJOCDGGCPCN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJOCDGGCPCN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJOCDGGCPCN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CJOCDGGCPCN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJOCDGGCPCN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CJOCDGGCPCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJOCDGGCPCN*))((::PBYTE)hIl2Cpp + CJOCDGGCPCN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CJOCDGGCPCN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
