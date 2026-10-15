#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BEMKNPIFMBI.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class OONGDLIDJJJ;
namespace RPG::GameCore { class CheckVisionAxis; }

#define MKLBMFBJGAJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB99CE60)
#define MKLBMFBJGAJ_MNAKIEOGPDK_OFFSET UNITYSDK_OFFSET(0xB99CE70)

	class MKLBMFBJGAJ : public ::BEMKNPIFMBI
	{
	public:
		::RPG::GameCore::CheckVisionAxis* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::CheckVisionAxis* a1, ::OONGDLIDJJJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CheckVisionAxis*, ::OONGDLIDJJJ*))((::PBYTE)hIl2Cpp + MKLBMFBJGAJ_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint MNAKIEOGPDK()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + MKLBMFBJGAJ_MNAKIEOGPDK_OFFSET))(this);
		}

	};
