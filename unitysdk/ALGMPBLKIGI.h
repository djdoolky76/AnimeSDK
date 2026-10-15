#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/IGKFNIEJGLM.h"
class EANKAFJCEEH;
class FENBKKMELOI;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define ALGMPBLKIGI_AFOCNOKBNBH_OFFSET UNITYSDK_OFFSET(0x1555DC60)
#define ALGMPBLKIGI_CTOR_OFFSET UNITYSDK_OFFSET(0x1555E4A0)
#define ALGMPBLKIGI_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x1555DB60)
#define ALGMPBLKIGI_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x1555DBE0)
#define ALGMPBLKIGI_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x1555DC20)
#define ALGMPBLKIGI_JDGMPELLNFP_OFFSET UNITYSDK_OFFSET(0x1555DCF0)
#define ALGMPBLKIGI_LJKADDJPNNP_OFFSET UNITYSDK_OFFSET(0x1555E260)
#define ALGMPBLKIGI_MOPJLKIHIHP_OFFSET UNITYSDK_OFFSET(0x1555DA70)
#define ALGMPBLKIGI__ONBIND_OFFSET UNITYSDK_OFFSET(0x1555DAD0)

inline static constexpr unsigned int ALGMPBLKIGI_TypeDefinitionIndex = 71876;

	class ALGMPBLKIGI : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* GNCFPJIDCLO; // 0x60
		::System::Collections::Generic::List_1<::FENBKKMELOI*>* KMDAIPPCNOE; // 0x68
		::EANKAFJCEEH* ABOBEBEOHPA; // 0x70
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x78
		::System::Int32 NNGGGKMGJLL; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGMPBLKIGI_CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* MOPJLKIHIHP()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGMPBLKIGI_MOPJLKIHIHP_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGMPBLKIGI__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + ALGMPBLKIGI_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGMPBLKIGI_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGMPBLKIGI_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void AFOCNOKBNBH(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + ALGMPBLKIGI_AFOCNOKBNBH_OFFSET))(this, a1, a2);
		}

		::System::Void LJKADDJPNNP(::RPG::Client::UISkillIndex a1, ::RPG::Client::UISkillIndex a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UISkillIndex, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + ALGMPBLKIGI_LJKADDJPNNP_OFFSET))(this, a1, a2);
		}

		::System::Void JDGMPELLNFP(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::SkillData*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::SkillData*>*))((::PBYTE)hIl2Cpp + ALGMPBLKIGI_JDGMPELLNFP_OFFSET))(this, a1, a2);
		}

	};
