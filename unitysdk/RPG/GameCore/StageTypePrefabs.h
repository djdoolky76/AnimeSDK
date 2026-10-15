#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageTypePrefabs; }
namespace System { class String; }

#define RPG_GAMECORE_STAGETYPEPREFABS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE7900)
#define RPG_GAMECORE_STAGETYPEPREFABS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE7810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageTypePrefabs_TypeDefinitionIndex = 16358;

	class StageTypePrefabs : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* StagePrefabList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGETYPEPREFABS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageTypePrefabs* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageTypePrefabs*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGETYPEPREFABS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
