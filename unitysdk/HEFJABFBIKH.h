#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HMDKMIJLJFH.h"
class JBDOALOEMAB;
namespace RPG::GameCore { class ChimeraDuelTalkNode; }

#define HEFJABFBIKH_CTOR_OFFSET UNITYSDK_OFFSET(0x15C4E830)
#define HEFJABFBIKH_FOJGLOJGJBA_OFFSET UNITYSDK_OFFSET(0x15C4E840)

	class HEFJABFBIKH : public ::HMDKMIJLJFH
	{
	public:
		::JBDOALOEMAB* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::JBDOALOEMAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBDOALOEMAB*))((::PBYTE)hIl2Cpp + HEFJABFBIKH_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean FOJGLOJGJBA(::RPG::GameCore::ChimeraDuelTalkNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelTalkNode*))((::PBYTE)hIl2Cpp + HEFJABFBIKH_FOJGLOJGJBA_OFFSET))(this, a1);
		}

	};
