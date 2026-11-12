#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class OverrideCustomDroneFuncBtn; }
namespace RPG::GameCore { class TaskContext; }

#define NONPGLNMFJL_CTOR_OFFSET UNITYSDK_OFFSET(0xC5E62B0)
#define NONPGLNMFJL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC5E62E0)

inline static constexpr unsigned int NONPGLNMFJL_TypeDefinitionIndex = 54207;

	class NONPGLNMFJL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OverrideCustomDroneFuncBtn* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OverrideCustomDroneFuncBtn*))((::PBYTE)hIl2Cpp + NONPGLNMFJL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NONPGLNMFJL_ONTASKBEGIN_OFFSET))(this);
		}

	};
