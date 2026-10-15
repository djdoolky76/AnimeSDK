#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABEBEPPJK.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleAddBullet; }

#define CKGJLFPKCFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA12830)
#define CKGJLFPKCFD_KDNAAOHECPD_OFFSET UNITYSDK_OFFSET(0x1CA12840)

inline static constexpr unsigned int CKGJLFPKCFD_TypeDefinitionIndex = 43111;

	class CKGJLFPKCFD : public ::BKABEBEPPJK
	{
	public:
		::RPG::GameCore::MarbleAddBullet* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::MarbleAddBullet* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleAddBullet*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + CKGJLFPKCFD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDNAAOHECPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKGJLFPKCFD_KDNAAOHECPD_OFFSET))(this);
		}

	};
