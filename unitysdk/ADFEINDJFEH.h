#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RefreshChangePhaseUI; }
namespace RPG::GameCore { class TaskContext; }

#define ADFEINDJFEH_CTOR_OFFSET UNITYSDK_OFFSET(0xB1365E0)
#define ADFEINDJFEH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB136610)

inline static constexpr unsigned int ADFEINDJFEH_TypeDefinitionIndex = 55290;

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
