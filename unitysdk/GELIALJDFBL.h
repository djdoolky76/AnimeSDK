#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskState.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TaskConfig; }

#define GELIALJDFBL_CTOR_OFFSET UNITYSDK_OFFSET(0x159B7470)
#define GELIALJDFBL_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x159E0980)
#define GELIALJDFBL_MDFBKGOJOJI_OFFSET UNITYSDK_OFFSET(0x159E0940)

inline static constexpr unsigned int GELIALJDFBL_TypeDefinitionIndex = 54777;

	class GELIALJDFBL : public ::System::Object
	{
	public:
		::RPG::GameCore::TaskState DELMCJFBNBL; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GELIALJDFBL_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::TaskState MDFBKGOJOJI()
		{
			return ((::RPG::GameCore::TaskState(*)(::PVOID))((::PBYTE)hIl2Cpp + GELIALJDFBL_MDFBKGOJOJI_OFFSET))(this);
		}

		::RPG::GameCore::TaskConfig* GetConfig()
		{
			return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + GELIALJDFBL_GETCONFIG_OFFSET))(this);
		}

	};
