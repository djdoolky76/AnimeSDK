#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/SceneConfigRuntimeDataArea.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_CATEGORYCHECKSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x164F9BE0)

namespace MoleMole
{
	inline static constexpr unsigned int AreaCategoryInOutSubsystem_CategoryCheckState_TypeDefinitionIndex = 60548;

	class AreaCategoryInOutSubsystem_CategoryCheckState : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::SceneConfigRuntimeDataArea>* CachedAreas; // 0x10
		::System::String* NextHitSceneNameId; // 0x18
		::MoleMole::Config::SceneConfigRuntimeDataArea NextHitArea; // 0x20
		::System::String* CurrentHitSceneNameId; // 0x68
		::MoleMole::Config::SceneConfigRuntimeDataArea CurrentHitArea; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM_CATEGORYCHECKSTATE__CTOR_OFFSET))(this);
		}
	};
}
