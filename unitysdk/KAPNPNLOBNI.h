#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GlobalVisibilityControl; }
namespace RPG::GameCore { class TaskContext; }

#define KAPNPNLOBNI_CTOR_OFFSET UNITYSDK_OFFSET(0xBB73780)
#define KAPNPNLOBNI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB737B0)

inline static constexpr unsigned int KAPNPNLOBNI_TypeDefinitionIndex = 56261;

	class KAPNPNLOBNI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GlobalVisibilityControl* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GlobalVisibilityControl*))((::PBYTE)hIl2Cpp + KAPNPNLOBNI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAPNPNLOBNI_ONTASKBEGIN_OFFSET))(this);
		}

	};
