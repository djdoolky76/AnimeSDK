#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SwitchHandLiftToAnchor; }
namespace RPG::GameCore { class TaskContext; }

#define KBCNMDLFBIF_CTOR_OFFSET UNITYSDK_OFFSET(0xB2E8C90)
#define KBCNMDLFBIF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2E8CA0)
#define KBCNMDLFBIF_GPHJGFDKGEP_OFFSET UNITYSDK_OFFSET(0xB2E9360)
#define KBCNMDLFBIF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2E8D60)
#define KBCNMDLFBIF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB2E9310)
#define KBCNMDLFBIF_TICK_OFFSET UNITYSDK_OFFSET(0xB2E8CE0)

inline static constexpr unsigned int KBCNMDLFBIF_TypeDefinitionIndex = 53316;

	class KBCNMDLFBIF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SwitchHandLiftToAnchor* IGHAHBNLIJA; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::System::Boolean FIFNJAFKHDO; // 0x28
		::System::Byte _padding0[0x3];
		::System::Single HBDJCFFDGDD; // 0x2C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchHandLiftToAnchor* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchHandLiftToAnchor*))((::PBYTE)hIl2Cpp + KBCNMDLFBIF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCNMDLFBIF_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KBCNMDLFBIF_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCNMDLFBIF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCNMDLFBIF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void GPHJGFDKGEP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KBCNMDLFBIF_GPHJGFDKGEP_OFFSET))(this, a1);
		}

	};
