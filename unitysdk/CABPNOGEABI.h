#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BEMKNPIFMBI.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class OONGDLIDJJJ;
namespace RPG::GameCore { class CheckTeamEntityNumberAxis; }

#define CABPNOGEABI_CTOR_OFFSET UNITYSDK_OFFSET(0xC1BD070)
#define CABPNOGEABI_KGFBNBLEDHJ_OFFSET UNITYSDK_OFFSET(0xC1BD0F0)
#define CABPNOGEABI_MNAKIEOGPDK_OFFSET UNITYSDK_OFFSET(0xC1BD080)

	class CABPNOGEABI : public ::BEMKNPIFMBI
	{
	public:
		::RPG::GameCore::CheckTeamEntityNumberAxis* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::CheckTeamEntityNumberAxis* a1, ::OONGDLIDJJJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CheckTeamEntityNumberAxis*, ::OONGDLIDJJJ*))((::PBYTE)hIl2Cpp + CABPNOGEABI_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint MNAKIEOGPDK()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CABPNOGEABI_MNAKIEOGPDK_OFFSET))(this);
		}

		::System::Boolean KGFBNBLEDHJ(::OONGDLIDJJJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OONGDLIDJJJ*))((::PBYTE)hIl2Cpp + CABPNOGEABI_KGFBNBLEDHJ_OFFSET))(this, a1);
		}

	};
