#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingTableScene.h"
#include "unitysdk/RPG/Client/ChenLingTableSceneType.h"

#define RPG_CLIENT_CHENLINGTABLEPREPARESCENE_CAEPHOODKKN_OFFSET UNITYSDK_OFFSET(0xCADEEB0)
#define RPG_CLIENT_CHENLINGTABLEPREPARESCENE_CTOR_OFFSET UNITYSDK_OFFSET(0xCADF250)
#define RPG_CLIENT_CHENLINGTABLEPREPARESCENE_GET_SCENETYPE_OFFSET UNITYSDK_OFFSET(0xCADF200)
#define RPG_CLIENT_CHENLINGTABLEPREPARESCENE_ONENTER_OFFSET UNITYSDK_OFFSET(0xCADECF0)
#define RPG_CLIENT_CHENLINGTABLEPREPARESCENE_ONEXIT_OFFSET UNITYSDK_OFFSET(0xCADF050)
#define RPG_CLIENT_CHENLINGTABLEPREPARESCENE_ONUISCREENSIZECHANGE_OFFSET UNITYSDK_OFFSET(0xCADF1B0)
#define RPG_CLIENT_CHENLINGTABLEPREPARESCENE_RESET_OFFSET UNITYSDK_OFFSET(0xCADF0A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingTablePrepareScene_TypeDefinitionIndex = 72469;

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
