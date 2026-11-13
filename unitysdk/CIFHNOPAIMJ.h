#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class EnvironmentSystem; }
namespace RPG::GameCore { class SetCharacterShadowFactor; }
namespace RPG::GameCore { class TaskContext; }

#define CIFHNOPAIMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16E401E0)
#define CIFHNOPAIMJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16E40210)
#define CIFHNOPAIMJ_DMHKJJFHJDE_OFFSET UNITYSDK_OFFSET(0x16E40410)
#define CIFHNOPAIMJ_MMOCAFDLOBH_OFFSET UNITYSDK_OFFSET(0x16E40610)
#define CIFHNOPAIMJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16E40260)

inline static constexpr unsigned int CIFHNOPAIMJ_TypeDefinitionIndex = 54386;

	class CIFHNOPAIMJ
	{
	public:
		::RPG::Client::EnvironmentSystem* IKJOHLMINKN; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCharacterShadowFactor* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCharacterShadowFactor*))((::PBYTE)hIl2Cpp + CIFHNOPAIMJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFHNOPAIMJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFHNOPAIMJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void DMHKJJFHJDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFHNOPAIMJ_DMHKJJFHJDE_OFFSET))(this);
		}

		::System::Boolean MMOCAFDLOBH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFHNOPAIMJ_MMOCAFDLOBH_OFFSET))(this);
		}

	};
