#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ModifyFateLevelParam; }
namespace RPG::GameCore { class TaskContext; }

#define PHLEFHDGLEB_CTOR_OFFSET UNITYSDK_OFFSET(0xC2551F0)
#define PHLEFHDGLEB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC255220)

inline static constexpr unsigned int PHLEFHDGLEB_TypeDefinitionIndex = 55202;

	class PHLEFHDGLEB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyFateLevelParam* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyFateLevelParam*))((::PBYTE)hIl2Cpp + PHLEFHDGLEB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHLEFHDGLEB_ONTASKBEGIN_OFFSET))(this);
		}

	};
