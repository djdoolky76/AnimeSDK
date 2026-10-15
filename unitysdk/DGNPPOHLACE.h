#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BEMKNPIFMBI.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class OONGDLIDJJJ;
namespace RPG::GameCore { class CheckRandomChanceAxis; }

#define DGNPPOHLACE_CTOR_OFFSET UNITYSDK_OFFSET(0xE8587C0)
#define DGNPPOHLACE_MNAKIEOGPDK_OFFSET UNITYSDK_OFFSET(0xE8587D0)

	class DGNPPOHLACE : public ::BEMKNPIFMBI
	{
	public:
		::RPG::GameCore::CheckRandomChanceAxis* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::CheckRandomChanceAxis* a1, ::OONGDLIDJJJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CheckRandomChanceAxis*, ::OONGDLIDJJJ*))((::PBYTE)hIl2Cpp + DGNPPOHLACE_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint MNAKIEOGPDK()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNPPOHLACE_MNAKIEOGPDK_OFFSET))(this);
		}

	};
