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

#define ILHMIOLLLJI_BCAMNAGBDDC_OFFSET UNITYSDK_OFFSET(0x1748A860)
#define ILHMIOLLLJI_CTOR_OFFSET UNITYSDK_OFFSET(0x1748B020)
#define ILHMIOLLLJI_DBPBLBHLICO_OFFSET UNITYSDK_OFFSET(0x1748A8C0)
#define ILHMIOLLLJI_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0x1748A910)
#define ILHMIOLLLJI_GBOPFKBDMLI_OFFSET UNITYSDK_OFFSET(0x1748AFD0)
#define ILHMIOLLLJI_GET_MESSAGETYPE_OFFSET UNITYSDK_OFFSET(0x1748ABD0)
#define ILHMIOLLLJI_ILAFECOFNLE_OFFSET UNITYSDK_OFFSET(0x1748AE10)
#define ILHMIOLLLJI_JFNGFBKKBNF_OFFSET UNITYSDK_OFFSET(0x1748AA50)
#define ILHMIOLLLJI_KBPMCFICODM_OFFSET UNITYSDK_OFFSET(0x1748AB70)
#define ILHMIOLLLJI_KGPANCMMECP_OFFSET UNITYSDK_OFFSET(0x1748AF60)
#define ILHMIOLLLJI_LCGCBEJPEAJ_OFFSET UNITYSDK_OFFSET(0x1748A710)
#define ILHMIOLLLJI_LFMLAOPMMNA_OFFSET UNITYSDK_OFFSET(0x1748AE50)
#define ILHMIOLLLJI_NHPDCPKMNAM_OFFSET UNITYSDK_OFFSET(0x1748ABF0)
#define ILHMIOLLLJI_NLNDGOIKOJO_OFFSET UNITYSDK_OFFSET(0x1748AF20)
#define ILHMIOLLLJI_OCCIFHOEJMI_OFFSET UNITYSDK_OFFSET(0x1748AA00)
#define ILHMIOLLLJI_PABFOMOCMNA_OFFSET UNITYSDK_OFFSET(0x1748AAE0)
#define ILHMIOLLLJI_SET_MESSAGETYPE_OFFSET UNITYSDK_OFFSET(0x1748ABE0)
#define ILHMIOLLLJI__ONBIND_OFFSET UNITYSDK_OFFSET(0x1748A610)
#define ILHMIOLLLJI__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1748AC40)
#define ILHMIOLLLJI__ONTICK_OFFSET UNITYSDK_OFFSET(0x1748ACF0)
#define ILHMIOLLLJI__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1748ACA0)

inline static constexpr unsigned int ILHMIOLLLJI_TypeDefinitionIndex = 73380;

	class ILHMIOLLLJI : public ::FMPCODLIOLG
	{
	public:
		::BNFKHGEEBGM* JGBNJENLKLH; // 0x60
		::RPG::Client::UIFollow3DTarget* LLBJOCEMNPK; // 0x68
		::RPG::GameCore::FloatMessageType _MessageType_k__BackingField; // 0x70
		::System::Single MFIFOONNJPE; // 0x74
		::System::Single IONFONLCDPF; // 0x78
		::System::Boolean MCAPIAKDMAA; // 0x7C
		::System::Boolean HCGJMGFNFBL; // 0x7D
		::System::Byte _padding0[0x2];
		::System::Single HBDJCFFDGDD; // 0x80
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
