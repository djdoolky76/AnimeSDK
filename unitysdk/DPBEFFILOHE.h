#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetActionBarRightDownMiniIcon; }
namespace RPG::GameCore { class TaskContext; }

#define DPBEFFILOHE_CTOR_OFFSET UNITYSDK_OFFSET(0x11FF9080)
#define DPBEFFILOHE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11FF90B0)

inline static constexpr unsigned int DPBEFFILOHE_TypeDefinitionIndex = 55334;

	class DPBEFFILOHE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetActionBarRightDownMiniIcon* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetActionBarRightDownMiniIcon*))((::PBYTE)hIl2Cpp + DPBEFFILOHE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPBEFFILOHE_ONTASKBEGIN_OFFSET))(this);
		}

	};
