#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class NotifyGameModeParamChange; }
namespace RPG::GameCore { class TaskContext; }

#define JLEOAOIHHGD_CTOR_OFFSET UNITYSDK_OFFSET(0xB237340)
#define JLEOAOIHHGD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB237370)

inline static constexpr unsigned int JLEOAOIHHGD_TypeDefinitionIndex = 55237;

	class JLEOAOIHHGD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::NotifyGameModeParamChange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::NotifyGameModeParamChange*))((::PBYTE)hIl2Cpp + JLEOAOIHHGD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLEOAOIHHGD_ONTASKBEGIN_OFFSET))(this);
		}

	};
