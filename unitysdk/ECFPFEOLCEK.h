#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PinballPuzzleLaunch; }
namespace RPG::GameCore { class TaskContext; }

#define ECFPFEOLCEK_CTOR_OFFSET UNITYSDK_OFFSET(0x12D06800)
#define ECFPFEOLCEK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12D06830)

inline static constexpr unsigned int ECFPFEOLCEK_TypeDefinitionIndex = 58256;

	class ECFPFEOLCEK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PinballPuzzleLaunch* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PinballPuzzleLaunch*))((::PBYTE)hIl2Cpp + ECFPFEOLCEK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECFPFEOLCEK_ONTASKBEGIN_OFFSET))(this);
		}

	};
