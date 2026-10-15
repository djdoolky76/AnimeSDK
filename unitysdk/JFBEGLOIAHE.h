#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHJPMDPJPEC.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleByCheckSealId; }

#define JFBEGLOIAHE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB90390)
#define JFBEGLOIAHE_KHNFOOKHOJF_OFFSET UNITYSDK_OFFSET(0x1CB903B0)

	class JFBEGLOIAHE : public ::LHJPMDPJPEC
	{
	public:
		::RPG::GameCore::MarbleByCheckSealId* IGHAHBNLIJA; // 0x30
		::System::Void _ctor(::RPG::GameCore::MarbleByCheckSealId* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByCheckSealId*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + JFBEGLOIAHE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KHNFOOKHOJF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JFBEGLOIAHE_KHNFOOKHOJF_OFFSET))(this);
		}

	};
