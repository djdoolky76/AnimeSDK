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

#define ILHMIOLLLJI_BCAMNAGBDDC_OFFSET UNITYSDK_OFFSET(0x1B597DB0)
#define ILHMIOLLLJI_CTOR_OFFSET UNITYSDK_OFFSET(0x1B5985C0)
#define ILHMIOLLLJI_DBPBLBHLICO_OFFSET UNITYSDK_OFFSET(0x1B597E10)
#define ILHMIOLLLJI_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0x1B597E60)
#define ILHMIOLLLJI_GBOPFKBDMLI_OFFSET UNITYSDK_OFFSET(0x1B598570)
#define ILHMIOLLLJI_GET_MESSAGETYPE_OFFSET UNITYSDK_OFFSET(0x1B598140)
#define ILHMIOLLLJI_ILAFECOFNLE_OFFSET UNITYSDK_OFFSET(0x1B598380)
#define ILHMIOLLLJI_JFNGFBKKBNF_OFFSET UNITYSDK_OFFSET(0x1B597FB0)
#define ILHMIOLLLJI_KBPMCFICODM_OFFSET UNITYSDK_OFFSET(0x1B5980E0)
#define ILHMIOLLLJI_KGPANCMMECP_OFFSET UNITYSDK_OFFSET(0x1B5984F0)
#define ILHMIOLLLJI_LCGCBEJPEAJ_OFFSET UNITYSDK_OFFSET(0x1B597C60)
#define ILHMIOLLLJI_LFMLAOPMMNA_OFFSET UNITYSDK_OFFSET(0x1B5983D0)
#define ILHMIOLLLJI_NHPDCPKMNAM_OFFSET UNITYSDK_OFFSET(0x1B598160)
#define ILHMIOLLLJI_NLNDGOIKOJO_OFFSET UNITYSDK_OFFSET(0x1B5984A0)
#define ILHMIOLLLJI_OCCIFHOEJMI_OFFSET UNITYSDK_OFFSET(0x1B597F60)
#define ILHMIOLLLJI_PABFOMOCMNA_OFFSET UNITYSDK_OFFSET(0x1B598050)
#define ILHMIOLLLJI_SET_MESSAGETYPE_OFFSET UNITYSDK_OFFSET(0x1B598150)
#define ILHMIOLLLJI__ONBIND_OFFSET UNITYSDK_OFFSET(0x1B597B60)
#define ILHMIOLLLJI__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1B5981B0)
#define ILHMIOLLLJI__ONTICK_OFFSET UNITYSDK_OFFSET(0x1B598260)
#define ILHMIOLLLJI__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1B598210)

inline static constexpr unsigned int ILHMIOLLLJI_TypeDefinitionIndex = 73379;

	class ILHMIOLLLJI : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::UIFollow3DTarget* LLBJOCEMNPK; // 0x60
		::BNFKHGEEBGM* JGBNJENLKLH; // 0x68
		::System::Single IONFONLCDPF; // 0x70
		::System::Single MFIFOONNJPE; // 0x74
		::System::Single HBDJCFFDGDD; // 0x78
		::RPG::GameCore::FloatMessageType _MessageType_k__BackingField; // 0x7C
		::System::Boolean HCGJMGFNFBL; // 0x80
		::System::Boolean MCAPIAKDMAA; // 0x81
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHMIOLLLJI_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHMIOLLLJI__ONBIND_OFFSET))(this);
		}

		::System::Void LCGCBEJPEAJ(::RPG::GameCore::GameEntity* a1, ::FOPJIACKHCC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::FOPJIACKHCC*))((::PBYTE)hIl2Cpp + ILHMIOLLLJI_LCGCBEJPEAJ_OFFSET))(this, a1, a2);
		}

		::System::Void BCAMNAGBDDC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ILHMIOLLLJI_BCAMNAGBDDC_OFFSET))(this, a1);
		}

		::System::Void DBPBLBHLICO(::GOJNGCCBOGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOJNGCCBOGI*))((::PBYTE)hIl2Cpp + ILHMIOLLLJI_DBPBLBHLICO_OFFSET))(this, a1);
		}

		::System::Void DMKJAJLNEBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHMIOLLLJI_DMKJAJLNEBK_OFFSET))(this);
		}

		::System::Void OCCIFHOEJMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHMIOLLLJI_OCCIFHOEJMI_OFFSET))(this);
		}

		::System::Boolean JFNGFBKKBNF(::RPG::GameCore::FloatMessageType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FloatMessageType))((::PBYTE)hIl2Cpp + ILHMIOLLLJI_JFNGFBKKBNF_OFFSET))(this, a1);
		}

		::System::Void PABFOMOCMNA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHMIOLLLJI_PABFOMOCMNA_OFFSET))(this);
		}

		::System::Void KBPMCFICODM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ILHMIOLLLJI_KBPMCFICODM_OFFSET))(this, a1);
		}

		::RPG::GameCore::FloatMessageType get_MessageType()
		{
			return ((::RPG::GameCore::FloatMessageType(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHMIOLLLJI_GET_MESSAGETYPE_OFFSET))(this);
		}

		::System::Void set_MessageType(::RPG::GameCore::FloatMessageType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FloatMessageType))((::PBYTE)hIl2Cpp + ILHMIOLLLJI_SET_MESSAGETYPE_OFFSET))(this, a1);
		}

		::System::Void NHPDCPKMNAM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ILHMIOLLLJI_NHPDCPKMNAM_OFFSET))(this, a1);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + ILHMIOLLLJI__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHMIOLLLJI__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ILHMIOLLLJI__ONTICK_OFFSET))(this, a1);
		}

		::System::Void LFMLAOPMMNA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHMIOLLLJI_LFMLAOPMMNA_OFFSET))(this);
		}

		::System::Boolean NLNDGOIKOJO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHMIOLLLJI_NLNDGOIKOJO_OFFSET))(this);
		}

		::System::Void KGPANCMMECP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ILHMIOLLLJI_KGPANCMMECP_OFFSET))(this, a1);
		}

		::System::Boolean ILAFECOFNLE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHMIOLLLJI_ILAFECOFNLE_OFFSET))(this);
		}

		::System::Void GBOPFKBDMLI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHMIOLLLJI_GBOPFKBDMLI_OFFSET))(this);
		}

	};
