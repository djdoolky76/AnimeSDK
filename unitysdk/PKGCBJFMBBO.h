#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvEnableEntityLinkCable; }
namespace RPG::GameCore { class TaskContext; }

#define PKGCBJFMBBO_CTOR_OFFSET UNITYSDK_OFFSET(0xC2B2840)
#define PKGCBJFMBBO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC2B2870)

inline static constexpr unsigned int PKGCBJFMBBO_TypeDefinitionIndex = 52352;

	class PKGCBJFMBBO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvEnableEntityLinkCable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvEnableEntityLinkCable*))((::PBYTE)hIl2Cpp + PKGCBJFMBBO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKGCBJFMBBO_ONTASKBEGIN_OFFSET))(this);
		}

	};
