#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class CakeRaceLookAtCatByRank; }
namespace RPG::GameCore { class TaskContext; }

#define MNPKLAJLBED_CTOR_OFFSET UNITYSDK_OFFSET(0xBA14820)
#define MNPKLAJLBED_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA14850)

inline static constexpr unsigned int MNPKLAJLBED_TypeDefinitionIndex = 52622;

	class MNPKLAJLBED
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CakeRaceLookAtCatByRank* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CakeRaceLookAtCatByRank*))((::PBYTE)hIl2Cpp + MNPKLAJLBED_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNPKLAJLBED_ONTASKBEGIN_OFFSET))(this);
		}

	};
