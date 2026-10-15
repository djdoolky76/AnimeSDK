#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BEMKNPIFMBI.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class OONGDLIDJJJ;
namespace RPG::GameCore { class CheckSkillBPAxis; }

#define EGKBGPDEAFD_BACIKPMPEBG_OFFSET UNITYSDK_OFFSET(0x1451C930)
#define EGKBGPDEAFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1451C8B0)
#define EGKBGPDEAFD_MNAKIEOGPDK_OFFSET UNITYSDK_OFFSET(0x1451C8C0)

	class EGKBGPDEAFD : public ::BEMKNPIFMBI
	{
	public:
		::RPG::GameCore::CheckSkillBPAxis* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::CheckSkillBPAxis* a1, ::OONGDLIDJJJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CheckSkillBPAxis*, ::OONGDLIDJJJ*))((::PBYTE)hIl2Cpp + EGKBGPDEAFD_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint MNAKIEOGPDK()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + EGKBGPDEAFD_MNAKIEOGPDK_OFFSET))(this);
		}

		::System::Boolean BACIKPMPEBG(::OONGDLIDJJJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OONGDLIDJJJ*))((::PBYTE)hIl2Cpp + EGKBGPDEAFD_BACIKPMPEBG_OFFSET))(this, a1);
		}

	};
