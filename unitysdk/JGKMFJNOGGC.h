#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHJPMDPJPEC.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleByCompareValue; }

#define JGKMFJNOGGC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB94750)
#define JGKMFJNOGGC_KHNFOOKHOJF_OFFSET UNITYSDK_OFFSET(0x1CB94770)

	class JGKMFJNOGGC : public ::LHJPMDPJPEC
	{
	public:
		::RPG::GameCore::MarbleByCompareValue* IGHAHBNLIJA; // 0x30
		::System::Void _ctor(::RPG::GameCore::MarbleByCompareValue* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByCompareValue*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + JGKMFJNOGGC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KHNFOOKHOJF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKMFJNOGGC_KHNFOOKHOJF_OFFSET))(this);
		}

	};
