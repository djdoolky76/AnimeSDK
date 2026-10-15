#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RequestMissionCustomValue; }
namespace RPG::GameCore { class TaskContext; }

#define MGBBBLJMCGO_CTOR_OFFSET UNITYSDK_OFFSET(0xB90E5A0)
#define MGBBBLJMCGO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB90E5D0)

inline static constexpr unsigned int MGBBBLJMCGO_TypeDefinitionIndex = 53202;

	class MGBBBLJMCGO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RequestMissionCustomValue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RequestMissionCustomValue*))((::PBYTE)hIl2Cpp + MGBBBLJMCGO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBBBLJMCGO_ONTASKBEGIN_OFFSET))(this);
		}

	};
