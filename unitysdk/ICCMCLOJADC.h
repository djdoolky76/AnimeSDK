#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ModifyAdventureCharacterCollider; }
namespace RPG::GameCore { class TaskContext; }

#define ICCMCLOJADC_CTOR_OFFSET UNITYSDK_OFFSET(0x15E4CA00)
#define ICCMCLOJADC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E4CA30)

inline static constexpr unsigned int ICCMCLOJADC_TypeDefinitionIndex = 55879;

	class ICCMCLOJADC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyAdventureCharacterCollider* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyAdventureCharacterCollider*))((::PBYTE)hIl2Cpp + ICCMCLOJADC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCMCLOJADC_ONTASKBEGIN_OFFSET))(this);
		}

	};
