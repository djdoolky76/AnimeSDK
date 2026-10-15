#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }

#define MDAMCBDNMKL_BDMBAICFEJL_OFFSET UNITYSDK_OFFSET(0xB888540)
#define MDAMCBDNMKL_CTOR_OFFSET UNITYSDK_OFFSET(0xB888620)
#define MDAMCBDNMKL_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xB888480)
#define MDAMCBDNMKL_FIIIDGBIHNB_OFFSET UNITYSDK_OFFSET(0xB888600)
#define MDAMCBDNMKL_GCBKDHJAEDJ_OFFSET UNITYSDK_OFFSET(0xB888610)
#define MDAMCBDNMKL_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0xB8883D0)
#define MDAMCBDNMKL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB888300)
#define MDAMCBDNMKL_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xB888580)
#define MDAMCBDNMKL_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xB8885C0)
#define MDAMCBDNMKL_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0xB888500)
#define MDAMCBDNMKL_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xB8884C0)

inline static constexpr unsigned int MDAMCBDNMKL_TypeDefinitionIndex = 57204;

	class MDAMCBDNMKL : public ::System::Object
	{
	public:
		::RPG::GameCore::CharacterModelComponent* JOKBAPFCJFM; // 0x10
		::RPG::GameCore::GameEntity* JOIPPIKNILC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDAMCBDNMKL_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::CharacterModelComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterModelComponent*))((::PBYTE)hIl2Cpp + MDAMCBDNMKL_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void JKCPLEJCBML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDAMCBDNMKL_JKCPLEJCBML_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDAMCBDNMKL_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void OnUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDAMCBDNMKL_ONUNINIT_OFFSET))(this);
		}

		::System::Void OnModelRootLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDAMCBDNMKL_ONMODELROOTLOADED_OFFSET))(this);
		}

		::System::Void BDMBAICFEJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDAMCBDNMKL_BDMBAICFEJL_OFFSET))(this);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDAMCBDNMKL_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDAMCBDNMKL_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* FIIIDGBIHNB()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDAMCBDNMKL_FIIIDGBIHNB_OFFSET))(this);
		}

		::RPG::GameCore::CharacterModelComponent* GCBKDHJAEDJ()
		{
			return ((::RPG::GameCore::CharacterModelComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDAMCBDNMKL_GCBKDHJAEDJ_OFFSET))(this);
		}

	};
