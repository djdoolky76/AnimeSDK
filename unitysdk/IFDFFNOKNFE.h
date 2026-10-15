#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/System/Object.h"
class HPDIGIKALDD;
class IFDFFNOKNFE;
class PHKFMKDHNBO;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define IFDFFNOKNFE_AEHOMMMPOEH_OFFSET UNITYSDK_OFFSET(0x15EFED90)
#define IFDFFNOKNFE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15EFE2D0)
#define IFDFFNOKNFE_CDBANAFFIKE_OFFSET UNITYSDK_OFFSET(0x15EFE9F0)
#define IFDFFNOKNFE_CTOR_OFFSET UNITYSDK_OFFSET(0x15EFE4B0)
#define IFDFFNOKNFE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15EFE860)
#define IFDFFNOKNFE_GET_CASTER_OFFSET UNITYSDK_OFFSET(0x15EFEF10)
#define IFDFFNOKNFE_GET_SKILLDATALIST_OFFSET UNITYSDK_OFFSET(0x15EFEF30)
#define IFDFFNOKNFE_GLAEAOENGEC_OFFSET UNITYSDK_OFFSET(0x15EFEC20)
#define IFDFFNOKNFE_HCOFEJGPBEG_OFFSET UNITYSDK_OFFSET(0x15EFEB40)
#define IFDFFNOKNFE_HGBFBCLOHMO_OFFSET UNITYSDK_OFFSET(0x15EFE700)
#define IFDFFNOKNFE_IBFEJFGHHOJ_OFFSET UNITYSDK_OFFSET(0x15EFEDF0)
#define IFDFFNOKNFE_IIIHGEKOEMD_OFFSET UNITYSDK_OFFSET(0x15EFEAB0)
#define IFDFFNOKNFE_INEPIJHGDIA_OFFSET UNITYSDK_OFFSET(0x15EFEF50)
#define IFDFFNOKNFE_KBKPCOEABNJ_OFFSET UNITYSDK_OFFSET(0x15EFED30)
#define IFDFFNOKNFE_LGCHCHEFCIA_OFFSET UNITYSDK_OFFSET(0x15EFE950)
#define IFDFFNOKNFE_NDLIKDIKLBP_OFFSET UNITYSDK_OFFSET(0x15EFE560)
#define IFDFFNOKNFE_SET_CASTER_OFFSET UNITYSDK_OFFSET(0x15EFEF20)
#define IFDFFNOKNFE_SET_SKILLDATALIST_OFFSET UNITYSDK_OFFSET(0x15EFEF40)

inline static constexpr unsigned int IFDFFNOKNFE_TypeDefinitionIndex = 72151;

	class IFDFFNOKNFE : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::TurnBasedModifierInstance*>* NCLMLBLBOGK; // 0x10
		::HPDIGIKALDD* _SkillDataList_k__BackingField; // 0x18
		::RPG::GameCore::GameEntity* _Caster_k__BackingField; // 0x20
		::System::Boolean EGKLIBFLKHG; // 0x28
		// static const ::System::Object DEJEMKJDNKL; // 0x0
		// static const ::System::Object NBKIAJMEHLO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFDFFNOKNFE_CTOR_OFFSET))(this);
		}

		static ::IFDFFNOKNFE* BPLPBPMEODA(::RPG::GameCore::GameEntity* a1, ::HPDIGIKALDD* a2)
		{
			return ((::IFDFFNOKNFE*(*)(::RPG::GameCore::GameEntity*, ::HPDIGIKALDD*))((::PBYTE)hIl2Cpp + IFDFFNOKNFE_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFDFFNOKNFE_DISPOSE_OFFSET))(this);
		}

		::System::Void LGCHCHEFCIA(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + IFDFFNOKNFE_LGCHCHEFCIA_OFFSET))(this, a1);
		}

		::System::Void IIIHGEKOEMD(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + IFDFFNOKNFE_IIIHGEKOEMD_OFFSET))(this, a1);
		}

		::System::Boolean HCOFEJGPBEG(::PHKFMKDHNBO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PHKFMKDHNBO*))((::PBYTE)hIl2Cpp + IFDFFNOKNFE_HCOFEJGPBEG_OFFSET))(this, a1);
		}

		::System::Boolean GLAEAOENGEC(::RPG::GameCore::SkillData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + IFDFFNOKNFE_GLAEAOENGEC_OFFSET))(this, a1);
		}

		::System::Void HGBFBCLOHMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFDFFNOKNFE_HGBFBCLOHMO_OFFSET))(this);
		}

		static ::System::Boolean NDLIKDIKLBP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IFDFFNOKNFE_NDLIKDIKLBP_OFFSET))(a1);
		}

		::System::Boolean CDBANAFFIKE(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + IFDFFNOKNFE_CDBANAFFIKE_OFFSET))(this, a1);
		}

		::System::Boolean KBKPCOEABNJ(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + IFDFFNOKNFE_KBKPCOEABNJ_OFFSET))(this, a1);
		}

		::System::Boolean AEHOMMMPOEH(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + IFDFFNOKNFE_AEHOMMMPOEH_OFFSET))(this, a1);
		}

		::System::Boolean IBFEJFGHHOJ(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::ModifierBehaviorFlag a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::ModifierBehaviorFlag))((::PBYTE)hIl2Cpp + IFDFFNOKNFE_IBFEJFGHHOJ_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* get_Caster()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFDFFNOKNFE_GET_CASTER_OFFSET))(this);
		}

		::System::Void set_Caster(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IFDFFNOKNFE_SET_CASTER_OFFSET))(this, a1);
		}

		::HPDIGIKALDD* get_SkillDataList()
		{
			return ((::HPDIGIKALDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFDFFNOKNFE_GET_SKILLDATALIST_OFFSET))(this);
		}

		::System::Void set_SkillDataList(::HPDIGIKALDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPDIGIKALDD*))((::PBYTE)hIl2Cpp + IFDFFNOKNFE_SET_SKILLDATALIST_OFFSET))(this, a1);
		}

		::System::Boolean INEPIJHGDIA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFDFFNOKNFE_INEPIJHGDIA_OFFSET))(this);
		}

	};
