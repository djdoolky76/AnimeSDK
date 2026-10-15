#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BEMKNPIFMBI.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class OONGDLIDJJJ;
namespace RPG::GameCore { class CheckCurrentAIPhaseAxis; }

#define MGMHAGJFMDM_CTOR_OFFSET UNITYSDK_OFFSET(0xB922A80)
#define MGMHAGJFMDM_MNAKIEOGPDK_OFFSET UNITYSDK_OFFSET(0xB922A90)

inline static constexpr unsigned int MGMHAGJFMDM_TypeDefinitionIndex = 54366;

	class MGMHAGJFMDM : public ::BEMKNPIFMBI
	{
	public:
		::RPG::GameCore::CheckCurrentAIPhaseAxis* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::CheckCurrentAIPhaseAxis* a1, ::OONGDLIDJJJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CheckCurrentAIPhaseAxis*, ::OONGDLIDJJJ*))((::PBYTE)hIl2Cpp + MGMHAGJFMDM_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint MNAKIEOGPDK()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + MGMHAGJFMDM_MNAKIEOGPDK_OFFSET))(this);
		}

	};
