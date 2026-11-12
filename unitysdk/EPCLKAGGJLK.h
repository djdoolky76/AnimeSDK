#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RtStopLookAt; }
namespace RPG::GameCore { class TaskContext; }

#define EPCLKAGGJLK_CTOR_OFFSET UNITYSDK_OFFSET(0x164E1C20)
#define EPCLKAGGJLK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164E1C50)
#define EPCLKAGGJLK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164E1C90)

inline static constexpr unsigned int EPCLKAGGJLK_TypeDefinitionIndex = 55043;

	class EPCLKAGGJLK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtStopLookAt* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtStopLookAt*))((::PBYTE)hIl2Cpp + EPCLKAGGJLK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCLKAGGJLK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCLKAGGJLK_ONTASKBEGIN_OFFSET))(this);
		}

	};
