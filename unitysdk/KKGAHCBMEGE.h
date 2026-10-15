#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PinballPuzzleEnableControlMode; }
namespace RPG::GameCore { class TaskContext; }

#define KKGAHCBMEGE_CTOR_OFFSET UNITYSDK_OFFSET(0xB4B4E90)
#define KKGAHCBMEGE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB4B4EC0)

inline static constexpr unsigned int KKGAHCBMEGE_TypeDefinitionIndex = 58255;

	class KKGAHCBMEGE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PinballPuzzleEnableControlMode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PinballPuzzleEnableControlMode*))((::PBYTE)hIl2Cpp + KKGAHCBMEGE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKGAHCBMEGE_ONTASKBEGIN_OFFSET))(this);
		}

	};
