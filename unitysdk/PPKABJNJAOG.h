#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHJPMDPJPEC.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleByCasterAction; }

#define PPKABJNJAOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9F95C0)
#define PPKABJNJAOG_KHNFOOKHOJF_OFFSET UNITYSDK_OFFSET(0x1C9F95D0)

	class PPKABJNJAOG : public ::LHJPMDPJPEC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::MarbleByCasterAction* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByCasterAction*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + PPKABJNJAOG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KHNFOOKHOJF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PPKABJNJAOG_KHNFOOKHOJF_OFFSET))(this);
		}

	};
