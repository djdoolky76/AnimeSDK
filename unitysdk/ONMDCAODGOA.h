#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHJPMDPJPEC.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleByTriggerFeature; }

#define ONMDCAODGOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9A0A50)
#define ONMDCAODGOA_KHNFOOKHOJF_OFFSET UNITYSDK_OFFSET(0x1C9A0A70)

	class ONMDCAODGOA : public ::LHJPMDPJPEC
	{
	public:
		::RPG::GameCore::MarbleByTriggerFeature* IGHAHBNLIJA; // 0x30
		::System::Void _ctor(::RPG::GameCore::MarbleByTriggerFeature* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByTriggerFeature*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + ONMDCAODGOA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KHNFOOKHOJF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ONMDCAODGOA_KHNFOOKHOJF_OFFSET))(this);
		}

	};
