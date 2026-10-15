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

#define EKAOMMDILDD_BCAMNAGBDDC_OFFSET UNITYSDK_OFFSET(0x154FAA90)
#define EKAOMMDILDD_CTOR_OFFSET UNITYSDK_OFFSET(0x154FB610)
#define EKAOMMDILDD_DBPBLBHLICO_OFFSET UNITYSDK_OFFSET(0x154FAAF0)
#define EKAOMMDILDD_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x154FAF10)
#define EKAOMMDILDD_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0x154FAB40)
#define EKAOMMDILDD_EAMEBOCOFDA_OFFSET UNITYSDK_OFFSET(0x154FB2C0)
#define EKAOMMDILDD_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x154FAF80)
#define EKAOMMDILDD_GBOPFKBDMLI_OFFSET UNITYSDK_OFFSET(0x154FB5B0)
#define EKAOMMDILDD_GET_MESSAGETYPE_OFFSET UNITYSDK_OFFSET(0x154FAE90)
#define EKAOMMDILDD_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0x154FAEB0)
#define EKAOMMDILDD_ILAFECOFNLE_OFFSET UNITYSDK_OFFSET(0x154FB0F0)
#define EKAOMMDILDD_JFNGFBKKBNF_OFFSET UNITYSDK_OFFSET(0x154FAC60)
#define EKAOMMDILDD_KBPMCFICODM_OFFSET UNITYSDK_OFFSET(0x154FAE20)
#define EKAOMMDILDD_KGJAMKFPOAB_OFFSET UNITYSDK_OFFSET(0x154FAC10)
#define EKAOMMDILDD_KGPANCMMECP_OFFSET UNITYSDK_OFFSET(0x154FB240)
#define EKAOMMDILDD_LCGCBEJPEAJ_OFFSET UNITYSDK_OFFSET(0x154FA830)
#define EKAOMMDILDD_LGBGKLNEHFE_OFFSET UNITYSDK_OFFSET(0x154FA950)
#define EKAOMMDILDD_NAPOABGFMJE_OFFSET UNITYSDK_OFFSET(0x154FB540)
#define EKAOMMDILDD_NLNDGOIKOJO_OFFSET UNITYSDK_OFFSET(0x154FB140)
#define EKAOMMDILDD_PABFOMOCMNA_OFFSET UNITYSDK_OFFSET(0x154FAD00)
#define EKAOMMDILDD_SET_MESSAGETYPE_OFFSET UNITYSDK_OFFSET(0x154FAEA0)
#define EKAOMMDILDD__ONBIND_OFFSET UNITYSDK_OFFSET(0x154FA7C0)
#define EKAOMMDILDD__ONTICK_OFFSET UNITYSDK_OFFSET(0x154FAFD0)

inline static constexpr unsigned int EKAOMMDILDD_TypeDefinitionIndex = 71539;

	class EKAOMMDILDD : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::RectTransform* HACIPINNIOG; // 0x60
		::RPG::Client::UIFollow3DTarget* LLBJOCEMNPK; // 0x68
		::RPG::GameCore::CharacterVisibleComponent* PLDFJEONENF; // 0x70
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x78
		::RPG::GameCore::FloatMessageType _MessageType_k__BackingField; // 0x80
		::System::Boolean HCGJMGFNFBL; // 0x84
		::System::Boolean MCAPIAKDMAA; // 0x85
		::System::Boolean POGICBHCJIB; // 0x86
		::System::Byte _padding0[0x1];
		::System::Single HBDJCFFDGDD; // 0x88
		::System::Single MFIFOONNJPE; // 0x8C
		::System::Single IONFONLCDPF; // 0x90
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
