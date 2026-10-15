#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class EscapeFromBattle; }
namespace RPG::GameCore { class TaskContext; }

#define HCHHLNEEMJA_CTOR_OFFSET UNITYSDK_OFFSET(0x15C1F410)
#define HCHHLNEEMJA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C1F440)

inline static constexpr unsigned int HCHHLNEEMJA_TypeDefinitionIndex = 55027;

	class HCHHLNEEMJA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EscapeFromBattle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EscapeFromBattle*))((::PBYTE)hIl2Cpp + HCHHLNEEMJA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHHLNEEMJA_ONTASKBEGIN_OFFSET))(this);
		}

	};
