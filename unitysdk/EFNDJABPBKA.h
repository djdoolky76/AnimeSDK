#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BEMKNPIFMBI.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class OONGDLIDJJJ;
namespace RPG::GameCore { class CheckTargetDistanceAxis; }

#define EFNDJABPBKA_CTOR_OFFSET UNITYSDK_OFFSET(0x13A5D7F0)
#define EFNDJABPBKA_MNAKIEOGPDK_OFFSET UNITYSDK_OFFSET(0x13A5D800)

	class EFNDJABPBKA : public ::BEMKNPIFMBI
	{
	public:
		::RPG::GameCore::CheckTargetDistanceAxis* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::CheckTargetDistanceAxis* a1, ::OONGDLIDJJJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CheckTargetDistanceAxis*, ::OONGDLIDJJJ*))((::PBYTE)hIl2Cpp + EFNDJABPBKA_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint MNAKIEOGPDK()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + EFNDJABPBKA_MNAKIEOGPDK_OFFSET))(this);
		}

	};
