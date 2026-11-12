#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingTableScene.h"
#include "unitysdk/RPG/Client/ChenLingTableSceneType.h"

#define RPG_CLIENT_CHENLINGTABLEPREPARESCENE_CAEPHOODKKN_OFFSET UNITYSDK_OFFSET(0xD4424C0)
#define RPG_CLIENT_CHENLINGTABLEPREPARESCENE_CTOR_OFFSET UNITYSDK_OFFSET(0xD442860)
#define RPG_CLIENT_CHENLINGTABLEPREPARESCENE_GET_SCENETYPE_OFFSET UNITYSDK_OFFSET(0xD442810)
#define RPG_CLIENT_CHENLINGTABLEPREPARESCENE_ONENTER_OFFSET UNITYSDK_OFFSET(0xD442300)
#define RPG_CLIENT_CHENLINGTABLEPREPARESCENE_ONEXIT_OFFSET UNITYSDK_OFFSET(0xD442660)
#define RPG_CLIENT_CHENLINGTABLEPREPARESCENE_ONUISCREENSIZECHANGE_OFFSET UNITYSDK_OFFSET(0xD4427C0)
#define RPG_CLIENT_CHENLINGTABLEPREPARESCENE_RESET_OFFSET UNITYSDK_OFFSET(0xD4426B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingTablePrepareScene_TypeDefinitionIndex = 74548;

	class ChenLingTablePrepareScene : public ::RPG::Client::ChenLingTableScene
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEPREPARESCENE_CTOR_OFFSET))(this);
		}

		::System::Void OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEPREPARESCENE_ONENTER_OFFSET))(this);
		}

		::System::Void OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEPREPARESCENE_ONEXIT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEPREPARESCENE_RESET_OFFSET))(this);
		}

		::System::Void OnUIScreenSizeChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEPREPARESCENE_ONUISCREENSIZECHANGE_OFFSET))(this);
		}

		::System::Void CAEPHOODKKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEPREPARESCENE_CAEPHOODKKN_OFFSET))(this);
		}

		::RPG::Client::ChenLingTableSceneType get_SceneType()
		{
			return ((::RPG::Client::ChenLingTableSceneType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLEPREPARESCENE_GET_SCENETYPE_OFFSET))(this);
		}

	};
}
