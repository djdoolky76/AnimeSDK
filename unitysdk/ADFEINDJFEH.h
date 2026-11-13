#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RefreshChangePhaseUI; }
namespace RPG::GameCore { class TaskContext; }

#define ADFEINDJFEH_CTOR_OFFSET UNITYSDK_OFFSET(0x182A6BD0)
#define ADFEINDJFEH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x182A6C00)

inline static constexpr unsigned int ADFEINDJFEH_TypeDefinitionIndex = 56471;

	class ADFEINDJFEH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RefreshChangePhaseUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RefreshChangePhaseUI*))((::PBYTE)hIl2Cpp + ADFEINDJFEH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADFEINDJFEH_ONTASKBEGIN_OFFSET))(this);
		}

	};
