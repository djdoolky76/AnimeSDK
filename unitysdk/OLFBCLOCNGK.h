#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class LensDistortionCurveEffect; }
namespace RPG::GameCore { class TaskContext; }

#define OLFBCLOCNGK_CTOR_OFFSET UNITYSDK_OFFSET(0xC7FE890)
#define OLFBCLOCNGK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC7FE8A0)
#define OLFBCLOCNGK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC7FE8E0)
#define OLFBCLOCNGK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC7FEC80)
#define OLFBCLOCNGK_TICK_OFFSET UNITYSDK_OFFSET(0xC7FECD0)

inline static constexpr unsigned int OLFBCLOCNGK_TypeDefinitionIndex = 56316;

	class OLFBCLOCNGK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::LensDistortionCurveEffect* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LensDistortionCurveEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LensDistortionCurveEffect*))((::PBYTE)hIl2Cpp + OLFBCLOCNGK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLFBCLOCNGK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLFBCLOCNGK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLFBCLOCNGK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OLFBCLOCNGK_TICK_OFFSET))(this, a1);
		}

	};
