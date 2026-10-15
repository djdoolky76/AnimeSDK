#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvSetMinimapAlertVisionState; }
namespace RPG::GameCore { class TaskContext; }

#define EPBJEHMFNPP_CTOR_OFFSET UNITYSDK_OFFSET(0x155C31C0)
#define EPBJEHMFNPP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155C31F0)

inline static constexpr unsigned int EPBJEHMFNPP_TypeDefinitionIndex = 52498;

	class EPBJEHMFNPP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetMinimapAlertVisionState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetMinimapAlertVisionState*))((::PBYTE)hIl2Cpp + EPBJEHMFNPP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBJEHMFNPP_ONTASKBEGIN_OFFSET))(this);
		}

	};
