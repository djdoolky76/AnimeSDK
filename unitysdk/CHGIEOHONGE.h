#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvForceSetNpcAlertValue; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CHGIEOHONGE_CTOR_OFFSET UNITYSDK_OFFSET(0xCF420B0)
#define CHGIEOHONGE_MGGPHJADAAG_OFFSET UNITYSDK_OFFSET(0xCF42800)
#define CHGIEOHONGE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF420E0)

inline static constexpr unsigned int CHGIEOHONGE_TypeDefinitionIndex = 52376;

	class CHGIEOHONGE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvForceSetNpcAlertValue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvForceSetNpcAlertValue*))((::PBYTE)hIl2Cpp + CHGIEOHONGE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGIEOHONGE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean MGGPHJADAAG(::RPG::GameCore::GameEntity* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + CHGIEOHONGE_MGGPHJADAAG_OFFSET))(this, a1, a2);
		}

	};
