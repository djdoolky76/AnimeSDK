#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GravityBallPuzzleSwitchBoard; }
namespace RPG::GameCore { class TaskContext; }

#define GDNNHFIMDGK_CTOR_OFFSET UNITYSDK_OFFSET(0x168F0B80)
#define GDNNHFIMDGK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x168F0BB0)

inline static constexpr unsigned int GDNNHFIMDGK_TypeDefinitionIndex = 54071;

	class GDNNHFIMDGK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GravityBallPuzzleSwitchBoard* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GravityBallPuzzleSwitchBoard*))((::PBYTE)hIl2Cpp + GDNNHFIMDGK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDNNHFIMDGK_ONTASKBEGIN_OFFSET))(this);
		}

	};
