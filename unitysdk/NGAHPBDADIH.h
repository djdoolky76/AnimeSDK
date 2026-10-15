#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ForceMakeCharacterActionable; }
namespace RPG::GameCore { class TaskContext; }

#define NGAHPBDADIH_CTOR_OFFSET UNITYSDK_OFFSET(0xBB9AAF0)
#define NGAHPBDADIH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB9AB20)

inline static constexpr unsigned int NGAHPBDADIH_TypeDefinitionIndex = 55074;

	class NGAHPBDADIH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ForceMakeCharacterActionable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ForceMakeCharacterActionable*))((::PBYTE)hIl2Cpp + NGAHPBDADIH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGAHPBDADIH_ONTASKBEGIN_OFFSET))(this);
		}

	};
