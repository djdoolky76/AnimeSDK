#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABEBEPPJK.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleDisableGhostFire; }

#define DAFJOEJKKEO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA13E10)
#define DAFJOEJKKEO_KDNAAOHECPD_OFFSET UNITYSDK_OFFSET(0x1CA13E20)

inline static constexpr unsigned int DAFJOEJKKEO_TypeDefinitionIndex = 43119;

	class DAFJOEJKKEO : public ::BKABEBEPPJK
	{
	public:
		::RPG::GameCore::MarbleDisableGhostFire* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::MarbleDisableGhostFire* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleDisableGhostFire*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + DAFJOEJKKEO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDNAAOHECPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DAFJOEJKKEO_KDNAAOHECPD_OFFSET))(this);
		}

	};
