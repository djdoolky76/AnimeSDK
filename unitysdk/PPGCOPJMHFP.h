#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class IBJPKKJKCKP;
namespace RPG::GameCore { class TaskContext; }

#define PPGCOPJMHFP_CTOR_OFFSET UNITYSDK_OFFSET(0xCCB7350)
#define PPGCOPJMHFP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCCB7360)
#define PPGCOPJMHFP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCCB73A0)
#define PPGCOPJMHFP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCCB7690)
#define PPGCOPJMHFP_TICK_OFFSET UNITYSDK_OFFSET(0xCCB76E0)

inline static constexpr unsigned int PPGCOPJMHFP_TypeDefinitionIndex = 56487;

	class PPGCOPJMHFP : public ::GELIALJDFBL
	{
	public:
		::IBJPKKJKCKP* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::IBJPKKJKCKP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::IBJPKKJKCKP*))((::PBYTE)hIl2Cpp + PPGCOPJMHFP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGCOPJMHFP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGCOPJMHFP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGCOPJMHFP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PPGCOPJMHFP_TICK_OFFSET))(this, a1);
		}

	};
