#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RtStopLookAt; }
namespace RPG::GameCore { class TaskContext; }

#define EPCLKAGGJLK_CTOR_OFFSET UNITYSDK_OFFSET(0x155C3C40)
#define EPCLKAGGJLK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x155C3C70)
#define EPCLKAGGJLK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155C3CB0)

inline static constexpr unsigned int EPCLKAGGJLK_TypeDefinitionIndex = 53879;

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
