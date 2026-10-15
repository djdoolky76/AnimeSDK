#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABEBEPPJK.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleOnField; }

#define OGCBMGHDEFP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C98CDC0)
#define OGCBMGHDEFP_KDNAAOHECPD_OFFSET UNITYSDK_OFFSET(0x1C98CDD0)

inline static constexpr unsigned int OGCBMGHDEFP_TypeDefinitionIndex = 43114;

	class OGCBMGHDEFP : public ::BKABEBEPPJK
	{
	public:
		::RPG::GameCore::MarbleOnField* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::MarbleOnField* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleOnField*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + OGCBMGHDEFP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDNAAOHECPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OGCBMGHDEFP_KDNAAOHECPD_OFFSET))(this);
		}

	};
