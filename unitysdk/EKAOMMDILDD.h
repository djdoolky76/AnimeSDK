#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/FloatMessageType.h"
#include "unitysdk/IGKFNIEJGLM.h"
class BNFKHGEEBGM;
class FOPJIACKHCC;
class GOJNGCCBOGI;
namespace RPG::Client { class UIFollow3DTarget; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define EKAOMMDILDD_BCAMNAGBDDC_OFFSET UNITYSDK_OFFSET(0x164427C0)
#define EKAOMMDILDD_CTOR_OFFSET UNITYSDK_OFFSET(0x16442FD0)
#define EKAOMMDILDD_DBPBLBHLICO_OFFSET UNITYSDK_OFFSET(0x16442820)
#define EKAOMMDILDD_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0x16442870)
#define EKAOMMDILDD_GBOPFKBDMLI_OFFSET UNITYSDK_OFFSET(0x16442F80)
#define EKAOMMDILDD_GET_MESSAGETYPE_OFFSET UNITYSDK_OFFSET(0x16442B10)
#define EKAOMMDILDD_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0x16442B80)
#define EKAOMMDILDD_ILAFECOFNLE_OFFSET UNITYSDK_OFFSET(0x16442DB0)
#define EKAOMMDILDD_JFNGFBKKBNF_OFFSET UNITYSDK_OFFSET(0x16442990)
#define EKAOMMDILDD_KBPMCFICODM_OFFSET UNITYSDK_OFFSET(0x16442AB0)
#define EKAOMMDILDD_KGPANCMMECP_OFFSET UNITYSDK_OFFSET(0x16442F00)
#define EKAOMMDILDD_LCGCBEJPEAJ_OFFSET UNITYSDK_OFFSET(0x164426A0)
#define EKAOMMDILDD_LFMLAOPMMNA_OFFSET UNITYSDK_OFFSET(0x16442DF0)
#define EKAOMMDILDD_NHPDCPKMNAM_OFFSET UNITYSDK_OFFSET(0x16442B30)
#define EKAOMMDILDD_NLNDGOIKOJO_OFFSET UNITYSDK_OFFSET(0x16442EC0)
#define EKAOMMDILDD_OCCIFHOEJMI_OFFSET UNITYSDK_OFFSET(0x16442940)
#define EKAOMMDILDD_PABFOMOCMNA_OFFSET UNITYSDK_OFFSET(0x16442A20)
#define EKAOMMDILDD_SET_MESSAGETYPE_OFFSET UNITYSDK_OFFSET(0x16442B20)
#define EKAOMMDILDD__ONBIND_OFFSET UNITYSDK_OFFSET(0x164425A0)
#define EKAOMMDILDD__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x16442BE0)
#define EKAOMMDILDD__ONTICK_OFFSET UNITYSDK_OFFSET(0x16442C90)
#define EKAOMMDILDD__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x16442C40)

inline static constexpr unsigned int EKAOMMDILDD_TypeDefinitionIndex = 73524;

	class EKAOMMDILDD : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::UIFollow3DTarget* LLBJOCEMNPK; // 0x60
		::BNFKHGEEBGM* JGBNJENLKLH; // 0x68
		::System::Single MFIFOONNJPE; // 0x70
		::System::Boolean HCGJMGFNFBL; // 0x74
		::System::Boolean MCAPIAKDMAA; // 0x75
		::System::Byte _padding0[0x2];
		::System::Single HBDJCFFDGDD; // 0x78
		::RPG::GameCore::FloatMessageType _MessageType_k__BackingField; // 0x7C
		::System::Single IONFONLCDPF; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKAOMMDILDD_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKAOMMDILDD__ONBIND_OFFSET))(this);
		}

		::System::Void LCGCBEJPEAJ(::RPG::GameCore::GameEntity* a1, ::FOPJIACKHCC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::FOPJIACKHCC*))((::PBYTE)hIl2Cpp + EKAOMMDILDD_LCGCBEJPEAJ_OFFSET))(this, a1, a2);
		}

		::System::Void BCAMNAGBDDC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EKAOMMDILDD_BCAMNAGBDDC_OFFSET))(this, a1);
		}

		::System::Void DBPBLBHLICO(::GOJNGCCBOGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOJNGCCBOGI*))((::PBYTE)hIl2Cpp + EKAOMMDILDD_DBPBLBHLICO_OFFSET))(this, a1);
		}

		::System::Void DMKJAJLNEBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKAOMMDILDD_DMKJAJLNEBK_OFFSET))(this);
		}

		::System::Void OCCIFHOEJMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKAOMMDILDD_OCCIFHOEJMI_OFFSET))(this);
		}

		::System::Boolean JFNGFBKKBNF(::RPG::GameCore::FloatMessageType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FloatMessageType))((::PBYTE)hIl2Cpp + EKAOMMDILDD_JFNGFBKKBNF_OFFSET))(this, a1);
		}

		::System::Void PABFOMOCMNA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKAOMMDILDD_PABFOMOCMNA_OFFSET))(this);
		}

		::System::Void KBPMCFICODM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EKAOMMDILDD_KBPMCFICODM_OFFSET))(this, a1);
		}

		::RPG::GameCore::FloatMessageType get_MessageType()
		{
			return ((::RPG::GameCore::FloatMessageType(*)(::PVOID))((::PBYTE)hIl2Cpp + EKAOMMDILDD_GET_MESSAGETYPE_OFFSET))(this);
		}

		::System::Void set_MessageType(::RPG::GameCore::FloatMessageType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FloatMessageType))((::PBYTE)hIl2Cpp + EKAOMMDILDD_SET_MESSAGETYPE_OFFSET))(this, a1);
		}

		::System::Void NHPDCPKMNAM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EKAOMMDILDD_NHPDCPKMNAM_OFFSET))(this, a1);
		}

		static ::System::String* IAMCNOAAALI(::RPG::GameCore::FloatMessageType a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::FloatMessageType))((::PBYTE)hIl2Cpp + EKAOMMDILDD_IAMCNOAAALI_OFFSET))(a1);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + EKAOMMDILDD__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKAOMMDILDD__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EKAOMMDILDD__ONTICK_OFFSET))(this, a1);
		}

		::System::Void LFMLAOPMMNA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKAOMMDILDD_LFMLAOPMMNA_OFFSET))(this);
		}

		::System::Boolean NLNDGOIKOJO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EKAOMMDILDD_NLNDGOIKOJO_OFFSET))(this);
		}

		::System::Void KGPANCMMECP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EKAOMMDILDD_KGPANCMMECP_OFFSET))(this, a1);
		}

		::System::Boolean ILAFECOFNLE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EKAOMMDILDD_ILAFECOFNLE_OFFSET))(this);
		}

		::System::Void GBOPFKBDMLI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKAOMMDILDD_GBOPFKBDMLI_OFFSET))(this);
		}

	};
