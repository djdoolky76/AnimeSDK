#pragma once
#include "unitysdk/unitysdk.h"
class BNBOAMEBAOE;
class KDEEOPMJCHO;
namespace RPG::GameCore { class TaskContext; }

#define CGHFJNCIEJM_AICMAPEKNIO_OFFSET UNITYSDK_OFFSET(0xCC83BC0)
#define CGHFJNCIEJM_BKPGNCBNMGP_OFFSET UNITYSDK_OFFSET(0xCC837E0)
#define CGHFJNCIEJM_CTOR_OFFSET UNITYSDK_OFFSET(0xCC837B0)
#define CGHFJNCIEJM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCC83830)

inline static constexpr unsigned int CGHFJNCIEJM_TypeDefinitionIndex = 52810;

	class CGHFJNCIEJM
	{
	public:
		::BNBOAMEBAOE* JLMAKNFAEBH; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::KDEEOPMJCHO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::KDEEOPMJCHO*))((::PBYTE)hIl2Cpp + CGHFJNCIEJM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void BKPGNCBNMGP(::BNBOAMEBAOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNBOAMEBAOE*))((::PBYTE)hIl2Cpp + CGHFJNCIEJM_BKPGNCBNMGP_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGHFJNCIEJM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void AICMAPEKNIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGHFJNCIEJM_AICMAPEKNIO_OFFSET))(this);
		}

	};
