#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/FloatMessageType.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/UnityEngine/Vector2.h"
class FOPJIACKHCC;
class GOJNGCCBOGI;
namespace RPG::Client { class UIFollow3DTarget; }
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define EKAOMMDILDD_BCAMNAGBDDC_OFFSET UNITYSDK_OFFSET(0x154EEDC0)
#define EKAOMMDILDD_CTOR_OFFSET UNITYSDK_OFFSET(0x154EF940)
#define EKAOMMDILDD_DBPBLBHLICO_OFFSET UNITYSDK_OFFSET(0x154EEE20)
#define EKAOMMDILDD_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x154EF240)
#define EKAOMMDILDD_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0x154EEE70)
#define EKAOMMDILDD_EAMEBOCOFDA_OFFSET UNITYSDK_OFFSET(0x154EF5F0)
#define EKAOMMDILDD_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x154EF2B0)
#define EKAOMMDILDD_GBOPFKBDMLI_OFFSET UNITYSDK_OFFSET(0x154EF8E0)
#define EKAOMMDILDD_GET_MESSAGETYPE_OFFSET UNITYSDK_OFFSET(0x154EF1C0)
#define EKAOMMDILDD_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0x154EF1E0)
#define EKAOMMDILDD_ILAFECOFNLE_OFFSET UNITYSDK_OFFSET(0x154EF420)
#define EKAOMMDILDD_JFNGFBKKBNF_OFFSET UNITYSDK_OFFSET(0x154EEF90)
#define EKAOMMDILDD_KBPMCFICODM_OFFSET UNITYSDK_OFFSET(0x154EF150)
#define EKAOMMDILDD_KGJAMKFPOAB_OFFSET UNITYSDK_OFFSET(0x154EEF40)
#define EKAOMMDILDD_KGPANCMMECP_OFFSET UNITYSDK_OFFSET(0x154EF570)
#define EKAOMMDILDD_LCGCBEJPEAJ_OFFSET UNITYSDK_OFFSET(0x154EEB60)
#define EKAOMMDILDD_LGBGKLNEHFE_OFFSET UNITYSDK_OFFSET(0x154EEC80)
#define EKAOMMDILDD_NAPOABGFMJE_OFFSET UNITYSDK_OFFSET(0x154EF870)
#define EKAOMMDILDD_NLNDGOIKOJO_OFFSET UNITYSDK_OFFSET(0x154EF470)
#define EKAOMMDILDD_PABFOMOCMNA_OFFSET UNITYSDK_OFFSET(0x154EF030)
#define EKAOMMDILDD_SET_MESSAGETYPE_OFFSET UNITYSDK_OFFSET(0x154EF1D0)
#define EKAOMMDILDD__ONBIND_OFFSET UNITYSDK_OFFSET(0x154EEAF0)
#define EKAOMMDILDD__ONTICK_OFFSET UNITYSDK_OFFSET(0x154EF300)

inline static constexpr unsigned int EKAOMMDILDD_TypeDefinitionIndex = 71538;

	class EKAOMMDILDD : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x60
		::UnityEngine::RectTransform* HACIPINNIOG; // 0x68
		::RPG::Client::UIFollow3DTarget* LLBJOCEMNPK; // 0x70
		::RPG::GameCore::CharacterVisibleComponent* PLDFJEONENF; // 0x78
		::System::Boolean POGICBHCJIB; // 0x80
		::System::Boolean HCGJMGFNFBL; // 0x81
		::System::Boolean MCAPIAKDMAA; // 0x82
		::System::Byte _padding0[0x1];
		::System::Single IONFONLCDPF; // 0x84
		::System::Single MFIFOONNJPE; // 0x88
		::RPG::GameCore::FloatMessageType _MessageType_k__BackingField; // 0x8C
		::System::Single HBDJCFFDGDD; // 0x90
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

		::System::Void LGBGKLNEHFE(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + EKAOMMDILDD_LGBGKLNEHFE_OFFSET))(this, a1);
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

		::System::Void KGJAMKFPOAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKAOMMDILDD_KGJAMKFPOAB_OFFSET))(this);
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

		static ::System::String* IAMCNOAAALI(::RPG::GameCore::FloatMessageType a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::FloatMessageType))((::PBYTE)hIl2Cpp + EKAOMMDILDD_IAMCNOAAALI_OFFSET))(a1);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + EKAOMMDILDD_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKAOMMDILDD_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EKAOMMDILDD__ONTICK_OFFSET))(this, a1);
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

		::System::Void EAMEBOCOFDA(::RPG::GameCore::GameEntity* a1, ::FOPJIACKHCC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::FOPJIACKHCC*))((::PBYTE)hIl2Cpp + EKAOMMDILDD_EAMEBOCOFDA_OFFSET))(this, a1, a2);
		}

		::System::Void NAPOABGFMJE(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + EKAOMMDILDD_NAPOABGFMJE_OFFSET))(this, a1);
		}

		::System::Void GBOPFKBDMLI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKAOMMDILDD_GBOPFKBDMLI_OFFSET))(this);
		}

	};
