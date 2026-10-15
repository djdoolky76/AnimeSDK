#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ShowRogueFormaluaUI; }
namespace RPG::GameCore { class TaskContext; }

#define JCAIGPAFHKB_CTOR_OFFSET UNITYSDK_OFFSET(0x16577EA0)
#define JCAIGPAFHKB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16577ED0)

inline static constexpr unsigned int JCAIGPAFHKB_TypeDefinitionIndex = 58683;

	class JCAIGPAFHKB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowRogueFormaluaUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowRogueFormaluaUI*))((::PBYTE)hIl2Cpp + JCAIGPAFHKB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCAIGPAFHKB_ONTASKBEGIN_OFFSET))(this);
		}

	};
