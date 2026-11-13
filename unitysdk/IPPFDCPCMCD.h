#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class DefineHPSharedGroup; }
namespace RPG::GameCore { class TaskContext; }

#define IPPFDCPCMCD_CTOR_OFFSET UNITYSDK_OFFSET(0x19306110)
#define IPPFDCPCMCD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19306140)

inline static constexpr unsigned int IPPFDCPCMCD_TypeDefinitionIndex = 56264;

	class IPPFDCPCMCD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DefineHPSharedGroup* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DefineHPSharedGroup*))((::PBYTE)hIl2Cpp + IPPFDCPCMCD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPPFDCPCMCD_ONTASKBEGIN_OFFSET))(this);
		}

	};
