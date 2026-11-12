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

#define GIHHAHEAIHD_CFPPPIMJMFH_OFFSET UNITYSDK_OFFSET(0x16972F90)
#define GIHHAHEAIHD_CTOR_OFFSET UNITYSDK_OFFSET(0x16973910)
#define GIHHAHEAIHD_DFGLPGCNBKC_OFFSET UNITYSDK_OFFSET(0x16972450)
#define GIHHAHEAIHD_EAAJKKOGGEE_OFFSET UNITYSDK_OFFSET(0x16973630)
#define GIHHAHEAIHD_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x16972280)
#define GIHHAHEAIHD_EJPHKAJJCOG_OFFSET UNITYSDK_OFFSET(0x169733C0)
#define GIHHAHEAIHD_HAGJAPDDPBC_OFFSET UNITYSDK_OFFSET(0x16973460)
#define GIHHAHEAIHD_MBFBIBPKMFO_1_OFFSET UNITYSDK_OFFSET(0x16972AD0)
#define GIHHAHEAIHD_MBFBIBPKMFO_OFFSET UNITYSDK_OFFSET(0x16973680)
#define GIHHAHEAIHD_PLPGKAKPEED_OFFSET UNITYSDK_OFFSET(0x16972980)
#define GIHHAHEAIHD__ONBIND_OFFSET UNITYSDK_OFFSET(0x169721B0)
#define GIHHAHEAIHD__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x169721F0)

inline static constexpr unsigned int GIHHAHEAIHD_TypeDefinitionIndex = 74279;

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
