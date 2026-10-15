#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValue; }
namespace RPG::GameCore { class TaskContext; }

#define GAIJNANMMHK_CTOR_OFFSET UNITYSDK_OFFSET(0x1593C710)
#define GAIJNANMMHK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1593C740)

	class GAIJNANMMHK
	{
	public:
		::RPG::GameCore::StringHash IMCFADGAEIN; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValue*))((::PBYTE)hIl2Cpp + GAIJNANMMHK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAIJNANMMHK_ONTASKBEGIN_OFFSET))(this);
		}

	};
