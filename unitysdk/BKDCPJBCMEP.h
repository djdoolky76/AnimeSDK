#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class EnableAdvEntityIgnoreAirshipCarCollision; }
namespace RPG::GameCore { class TaskContext; }

#define BKDCPJBCMEP_CTOR_OFFSET UNITYSDK_OFFSET(0xC103D40)
#define BKDCPJBCMEP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC103D70)

inline static constexpr unsigned int BKDCPJBCMEP_TypeDefinitionIndex = 53886;

	class BKDCPJBCMEP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableAdvEntityIgnoreAirshipCarCollision* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableAdvEntityIgnoreAirshipCarCollision*))((::PBYTE)hIl2Cpp + BKDCPJBCMEP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKDCPJBCMEP_ONTASKBEGIN_OFFSET))(this);
		}

	};
