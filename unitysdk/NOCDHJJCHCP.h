#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PropRestartFarmElement; }
namespace RPG::GameCore { class TaskContext; }

#define NOCDHJJCHCP_CTOR_OFFSET UNITYSDK_OFFSET(0xBCDEFA0)
#define NOCDHJJCHCP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBCDEFD0)

inline static constexpr unsigned int NOCDHJJCHCP_TypeDefinitionIndex = 58344;

	class NOCDHJJCHCP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropRestartFarmElement* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropRestartFarmElement*))((::PBYTE)hIl2Cpp + NOCDHJJCHCP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCDHJJCHCP_ONTASKBEGIN_OFFSET))(this);
		}

	};
