#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PCPJDDKFJHJ.h"
#include "unitysdk/RPG/GameCore/EnumStatusTypeMask.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SaveCharacterStateMask.h"
#include "unitysdk/System/Object.h"
class FABMDCOFHCG;
class KCMGAIFFBPL;
namespace RPG::GameCore { class AvatarEnergyBarState; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EJAMNGBKMPM_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x154D6400)
#define EJAMNGBKMPM_AGMJFFJOIAJ_OFFSET UNITYSDK_OFFSET(0x154D77F0)
#define EJAMNGBKMPM_AJHCKJPACGB_OFFSET UNITYSDK_OFFSET(0x154D76C0)
#define EJAMNGBKMPM_CTOR_OFFSET UNITYSDK_OFFSET(0x154D7850)
#define EJAMNGBKMPM_HKEPJLDBGIG_OFFSET UNITYSDK_OFFSET(0x154D6550)
#define EJAMNGBKMPM_OHCJOIANPFG_OFFSET UNITYSDK_OFFSET(0x154D5A40)

inline static constexpr unsigned int EJAMNGBKMPM_TypeDefinitionIndex = 56971;

	class EJAMNGBKMPM : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::PCPJDDKFJHJ>* HFGCJNINKJH; // 0x10
		::System::String* MKGLDELKOJF; // 0x18
		::KCMGAIFFBPL* DFGDPDPNPPL; // 0x20
		::RPG::GameCore::AvatarEnergyBarState* OKBLGLLJGPO; // 0x28
		::RPG::GameCore::FixPoint DLBPEEGBIBA; // 0x30
		::RPG::GameCore::FixPoint EMFGEFNHOIB; // 0x38
		::System::Int32 PKICDFAEPKE; // 0x40
		::RPG::GameCore::EnumStatusTypeMask JAPDAFFPAOE; // 0x44
		::System::Int32 EDGGKIMJPOM; // 0x48
		::RPG::GameCore::SaveCharacterStateMask BHLJCGNGLMI; // 0x4C
		::RPG::GameCore::FixPoint LCPFMGPBMMG; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJAMNGBKMPM_CTOR_OFFSET))(this);
		}

		::System::Void OHCJOIANPFG(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SaveCharacterStateMask a2, ::RPG::GameCore::EnumStatusTypeMask a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SaveCharacterStateMask, ::RPG::GameCore::EnumStatusTypeMask))((::PBYTE)hIl2Cpp + EJAMNGBKMPM_OHCJOIANPFG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJAMNGBKMPM_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void HKEPJLDBGIG(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + EJAMNGBKMPM_HKEPJLDBGIG_OFFSET))(this, a1, a2);
		}

		::System::Boolean AGMJFFJOIAJ(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EJAMNGBKMPM_AGMJFFJOIAJ_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::TurnBasedModifierConfig* AJHCKJPACGB(::FABMDCOFHCG* a1, ::System::String* a2)
		{
			return ((::RPG::GameCore::TurnBasedModifierConfig*(*)(::PVOID, ::FABMDCOFHCG*, ::System::String*))((::PBYTE)hIl2Cpp + EJAMNGBKMPM_AJHCKJPACGB_OFFSET))(this, a1, a2);
		}

	};
