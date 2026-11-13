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

#define EKAOMMDILDD_BCAMNAGBDDC_OFFSET UNITYSDK_OFFSET(0x19983CC0)
#define EKAOMMDILDD_CTOR_OFFSET UNITYSDK_OFFSET(0x199844E0)
#define EKAOMMDILDD_DBPBLBHLICO_OFFSET UNITYSDK_OFFSET(0x19983D20)
#define EKAOMMDILDD_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0x19983D70)
#define EKAOMMDILDD_GBOPFKBDMLI_OFFSET UNITYSDK_OFFSET(0x19984490)
#define EKAOMMDILDD_GET_MESSAGETYPE_OFFSET UNITYSDK_OFFSET(0x19984020)
#define EKAOMMDILDD_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0x19984090)
#define EKAOMMDILDD_ILAFECOFNLE_OFFSET UNITYSDK_OFFSET(0x199842D0)
#define EKAOMMDILDD_JFNGFBKKBNF_OFFSET UNITYSDK_OFFSET(0x19983E90)
#define EKAOMMDILDD_KBPMCFICODM_OFFSET UNITYSDK_OFFSET(0x19983FC0)
#define EKAOMMDILDD_KGPANCMMECP_OFFSET UNITYSDK_OFFSET(0x19984420)
#define EKAOMMDILDD_LCGCBEJPEAJ_OFFSET UNITYSDK_OFFSET(0x19983BA0)
#define EKAOMMDILDD_LFMLAOPMMNA_OFFSET UNITYSDK_OFFSET(0x19984310)
#define EKAOMMDILDD_NHPDCPKMNAM_OFFSET UNITYSDK_OFFSET(0x19984040)
#define EKAOMMDILDD_NLNDGOIKOJO_OFFSET UNITYSDK_OFFSET(0x199843E0)
#define EKAOMMDILDD_OCCIFHOEJMI_OFFSET UNITYSDK_OFFSET(0x19983E40)
#define EKAOMMDILDD_PABFOMOCMNA_OFFSET UNITYSDK_OFFSET(0x19983F30)
#define EKAOMMDILDD_SET_MESSAGETYPE_OFFSET UNITYSDK_OFFSET(0x19984030)
#define EKAOMMDILDD__ONBIND_OFFSET UNITYSDK_OFFSET(0x19983AA0)
#define EKAOMMDILDD__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x199840F0)
#define EKAOMMDILDD__ONTICK_OFFSET UNITYSDK_OFFSET(0x199841B0)
#define EKAOMMDILDD__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x19984160)

inline static constexpr unsigned int EKAOMMDILDD_TypeDefinitionIndex = 73523;

	class EKAOMMDILDD : public ::FMPCODLIOLG
	{
	public:
		::BNFKHGEEBGM* JGBNJENLKLH; // 0x60
		::RPG::Client::UIFollow3DTarget* LLBJOCEMNPK; // 0x68
		::System::Single HBDJCFFDGDD; // 0x70
		::System::Single IONFONLCDPF; // 0x74
		::System::Single MFIFOONNJPE; // 0x78
		::System::Boolean HCGJMGFNFBL; // 0x7C
		::System::Boolean MCAPIAKDMAA; // 0x7D
		::System::Byte _padding0[0x2];
		::RPG::GameCore::FloatMessageType _MessageType_k__BackingField; // 0x80
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
