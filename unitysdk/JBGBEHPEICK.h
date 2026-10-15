#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByWaitUltraCount; }
namespace RPG::GameCore { class TaskContext; }

#define JBGBEHPEICK_CTOR_OFFSET UNITYSDK_OFFSET(0x1655FD60)
#define JBGBEHPEICK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1655FE40)

inline static constexpr unsigned int JBGBEHPEICK_TypeDefinitionIndex = 54904;

	class JBGBEHPEICK
	{
	public:
		::RPG::GameCore::StringHash PEPAPNKMPFB; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByWaitUltraCount* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByWaitUltraCount*))((::PBYTE)hIl2Cpp + JBGBEHPEICK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGBEHPEICK_ONTASKBEGIN_OFFSET))(this);
		}

	};
