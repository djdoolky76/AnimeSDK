#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
namespace RPG::GameCore { class AvatarDataComponent; }
namespace RPG::GameCore { class AvatarRowData; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace System { class Object; }
namespace System { class String; }

#define GIHHAHEAIHD_CFPPPIMJMFH_OFFSET UNITYSDK_OFFSET(0x1A3DCE80)
#define GIHHAHEAIHD_CTOR_OFFSET UNITYSDK_OFFSET(0x1A3DD800)
#define GIHHAHEAIHD_DFGLPGCNBKC_OFFSET UNITYSDK_OFFSET(0x1A3DC340)
#define GIHHAHEAIHD_EAAJKKOGGEE_OFFSET UNITYSDK_OFFSET(0x1A3DD520)
#define GIHHAHEAIHD_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x1A3DC170)
#define GIHHAHEAIHD_EJPHKAJJCOG_OFFSET UNITYSDK_OFFSET(0x1A3DD2B0)
#define GIHHAHEAIHD_HAGJAPDDPBC_OFFSET UNITYSDK_OFFSET(0x1A3DD350)
#define GIHHAHEAIHD_MBFBIBPKMFO_1_OFFSET UNITYSDK_OFFSET(0x1A3DC9C0)
#define GIHHAHEAIHD_MBFBIBPKMFO_OFFSET UNITYSDK_OFFSET(0x1A3DD570)
#define GIHHAHEAIHD_PLPGKAKPEED_OFFSET UNITYSDK_OFFSET(0x1A3DC870)
#define GIHHAHEAIHD__ONBIND_OFFSET UNITYSDK_OFFSET(0x1A3DC0A0)
#define GIHHAHEAIHD__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1A3DC0E0)

inline static constexpr unsigned int GIHHAHEAIHD_TypeDefinitionIndex = 74278;

	class GIHHAHEAIHD : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x60
		// static const ::System::String* EHELEAICPAD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIHHAHEAIHD_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIHHAHEAIHD__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + GIHHAHEAIHD__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIHHAHEAIHD_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void DFGLPGCNBKC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GIHHAHEAIHD_DFGLPGCNBKC_OFFSET))(this, a1);
		}

		::System::Void CFPPPIMJMFH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GIHHAHEAIHD_CFPPPIMJMFH_OFFSET))(this, a1);
		}

		::System::Void EJPHKAJJCOG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GIHHAHEAIHD_EJPHKAJJCOG_OFFSET))(this, a1);
		}

		::System::Void HAGJAPDDPBC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GIHHAHEAIHD_HAGJAPDDPBC_OFFSET))(this, a1);
		}

		::System::String* EAAJKKOGGEE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIHHAHEAIHD_EAAJKKOGGEE_OFFSET))(this);
		}

		::System::Void MBFBIBPKMFO(::System::UInt32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + GIHHAHEAIHD_MBFBIBPKMFO_OFFSET))(this, a1, a2);
		}

		::System::Void MBFBIBPKMFO_1(::RPG::GameCore::AvatarRowData* a1, ::RPG::GameCore::ICharacterSkillRowData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarRowData*, ::RPG::GameCore::ICharacterSkillRowData*))((::PBYTE)hIl2Cpp + GIHHAHEAIHD_MBFBIBPKMFO_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean PLPGKAKPEED(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AvatarDataComponent* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AvatarDataComponent*))((::PBYTE)hIl2Cpp + GIHHAHEAIHD_PLPGKAKPEED_OFFSET))(this, a1, a2);
		}

	};
