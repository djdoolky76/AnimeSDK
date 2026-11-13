#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/DMGDLANJGMI.h"
namespace RPG::GameCore { class GridFightOverrideBackEndHP; }
namespace RPG::GameCore { class TaskContext; }

#define NIHGBAIDCLB_CTOR_OFFSET UNITYSDK_OFFSET(0x148C4280)
#define NIHGBAIDCLB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x148C4630)
#define NIHGBAIDCLB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x148C4290)
#define NIHGBAIDCLB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x148C4670)
#define NIHGBAIDCLB_PBILKNNKGGB_OFFSET UNITYSDK_OFFSET(0x148C4350)
#define NIHGBAIDCLB_TICK_OFFSET UNITYSDK_OFFSET(0x148C45D0)

inline static constexpr unsigned int NIHGBAIDCLB_TypeDefinitionIndex = 54746;

	class NIHGBAIDCLB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::GridFightOverrideBackEndHP* IGHAHBNLIJA; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GridFightOverrideBackEndHP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GridFightOverrideBackEndHP*))((::PBYTE)hIl2Cpp + NIHGBAIDCLB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHGBAIDCLB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NIHGBAIDCLB_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHGBAIDCLB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHGBAIDCLB_ONTASKRESET_OFFSET))(this);
		}

		::System::Boolean PBILKNNKGGB(::DMGDLANJGMI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DMGDLANJGMI))((::PBYTE)hIl2Cpp + NIHGBAIDCLB_PBILKNNKGGB_OFFSET))(this, a1);
		}

	};
