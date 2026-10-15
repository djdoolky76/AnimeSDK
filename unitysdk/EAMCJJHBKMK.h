#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAMCJJHBKMK;
class JEFCEGFBOAF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EAMCJJHBKMK_AJDFFPALCKM_OFFSET UNITYSDK_OFFSET(0x1E22DB40)
#define EAMCJJHBKMK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E22E100)
#define EAMCJJHBKMK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E22E450)
#define EAMCJJHBKMK_CDOOEBEKPDM_OFFSET UNITYSDK_OFFSET(0x1E22DB30)
#define EAMCJJHBKMK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E22DA60)
#define EAMCJJHBKMK_CPNDPOCKDKJ_OFFSET UNITYSDK_OFFSET(0x1E22DB50)
#define EAMCJJHBKMK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E22D9F0)
#define EAMCJJHBKMK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E22D9E0)
#define EAMCJJHBKMK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E22DCA0)
#define EAMCJJHBKMK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E22DB80)
#define EAMCJJHBKMK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E22DB10)
#define EAMCJJHBKMK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E22DDB0)
#define EAMCJJHBKMK_HKHAFJMJDBD_OFFSET UNITYSDK_OFFSET(0x1E22DAF0)
#define EAMCJJHBKMK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E22D9A0)
#define EAMCJJHBKMK_KEMMDDDJGHD_OFFSET UNITYSDK_OFFSET(0x1E22DB60)
#define EAMCJJHBKMK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E22E370)
#define EAMCJJHBKMK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E22E2E0)
#define EAMCJJHBKMK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E22DB00)
#define EAMCJJHBKMK_OHLKDNKLOMP_OFFSET UNITYSDK_OFFSET(0x1E22DB20)
#define EAMCJJHBKMK_ONEJHIAAJLI_OFFSET UNITYSDK_OFFSET(0x1E22DAE0)
#define EAMCJJHBKMK_PAACCJIDGKC_OFFSET UNITYSDK_OFFSET(0x1E22DB70)
#define EAMCJJHBKMK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E22D9D0)
#define EAMCJJHBKMK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E22DE80)
#define EAMCJJHBKMK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E22DEE0)

	class EAMCJJHBKMK : public ::System::Object
	{
	public:
		::JEFCEGFBOAF* FOIHNMFBHDG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Boolean FAMOHIDFCPG; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 JEMLHICKOFN; // 0x24
		::System::UInt32 CIJEMLMMANC; // 0x28
		::System::UInt32 NAEACGPKNNH; // 0x2C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EAMCJJHBKMK")->GetStaticField(0x49770);
		}

		// static const ::System::Object LNGMAHHIINN; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EGOIODGKPGK; // 0x0
		// static const ::System::Object PLLKJLMGPID; // 0x0
		// static const ::System::Object JFLBHIHNDOK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAMCJJHBKMK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EAMCJJHBKMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EAMCJJHBKMK*))((::PBYTE)hIl2Cpp + EAMCJJHBKMK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAMCJJHBKMK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EAMCJJHBKMK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAMCJJHBKMK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EAMCJJHBKMK* Clone()
		{
			return ((::EAMCJJHBKMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAMCJJHBKMK_CLONE_OFFSET))(this);
		}

		::JEFCEGFBOAF* ONEJHIAAJLI()
		{
			return ((::JEFCEGFBOAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAMCJJHBKMK_ONEJHIAAJLI_OFFSET))(this);
		}

		::System::Void HKHAFJMJDBD(::JEFCEGFBOAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEFCEGFBOAF*))((::PBYTE)hIl2Cpp + EAMCJJHBKMK_HKHAFJMJDBD_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAMCJJHBKMK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EAMCJJHBKMK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 OHLKDNKLOMP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAMCJJHBKMK_OHLKDNKLOMP_OFFSET))(this);
		}

		::System::Void CDOOEBEKPDM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EAMCJJHBKMK_CDOOEBEKPDM_OFFSET))(this, a1);
		}

		::System::Boolean AJDFFPALCKM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EAMCJJHBKMK_AJDFFPALCKM_OFFSET))(this);
		}

		::System::Void CPNDPOCKDKJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EAMCJJHBKMK_CPNDPOCKDKJ_OFFSET))(this, a1);
		}

		::System::UInt32 KEMMDDDJGHD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAMCJJHBKMK_KEMMDDDJGHD_OFFSET))(this);
		}

		::System::Void PAACCJIDGKC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EAMCJJHBKMK_PAACCJIDGKC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EAMCJJHBKMK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EAMCJJHBKMK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EAMCJJHBKMK*))((::PBYTE)hIl2Cpp + EAMCJJHBKMK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAMCJJHBKMK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAMCJJHBKMK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EAMCJJHBKMK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAMCJJHBKMK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EAMCJJHBKMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EAMCJJHBKMK*))((::PBYTE)hIl2Cpp + EAMCJJHBKMK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EAMCJJHBKMK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
