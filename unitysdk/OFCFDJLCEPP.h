#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvClientChangePropState; }
namespace RPG::GameCore { class TaskContext; }

#define OFCFDJLCEPP_CTOR_OFFSET UNITYSDK_OFFSET(0xBE35C00)
#define OFCFDJLCEPP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE35C30)

inline static constexpr unsigned int OFCFDJLCEPP_TypeDefinitionIndex = 52343;

	class OFCFDJLCEPP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvClientChangePropState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvClientChangePropState*))((::PBYTE)hIl2Cpp + OFCFDJLCEPP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFCFDJLCEPP_ONTASKBEGIN_OFFSET))(this);
		}

	};
