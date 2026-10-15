#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ST_Side_RemoveEffect; }
namespace RPG::GameCore { class TaskContext; }

#define FCDEAMJIACN_CEPJHGNMKJD_OFFSET UNITYSDK_OFFSET(0x156A8320)
#define FCDEAMJIACN_CTOR_OFFSET UNITYSDK_OFFSET(0x156A8280)
#define FCDEAMJIACN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x156A82B0)
#define FCDEAMJIACN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x156A8510)

inline static constexpr unsigned int FCDEAMJIACN_TypeDefinitionIndex = 52248;

	class FCDEAMJIACN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_RemoveEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_RemoveEffect*))((::PBYTE)hIl2Cpp + FCDEAMJIACN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCDEAMJIACN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCDEAMJIACN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void CEPJHGNMKJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCDEAMJIACN_CEPJHGNMKJD_OFFSET))(this);
		}

	};
