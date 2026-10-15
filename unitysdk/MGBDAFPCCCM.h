#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class LockMainStreamSourceToSwitchAnchorPos; }
namespace RPG::GameCore { class TaskContext; }

#define MGBDAFPCCCM_CTOR_OFFSET UNITYSDK_OFFSET(0xB90E730)
#define MGBDAFPCCCM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB90E760)

inline static constexpr unsigned int MGBDAFPCCCM_TypeDefinitionIndex = 58205;

	class MGBDAFPCCCM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockMainStreamSourceToSwitchAnchorPos* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockMainStreamSourceToSwitchAnchorPos*))((::PBYTE)hIl2Cpp + MGBDAFPCCCM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBDAFPCCCM_ONTASKBEGIN_OFFSET))(this);
		}

	};
