#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABEBEPPJK.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleSetNextScore; }

#define PADFDPIPGJH_CTOR_OFFSET UNITYSDK_OFFSET(0x17677D40)
#define PADFDPIPGJH_KDNAAOHECPD_OFFSET UNITYSDK_OFFSET(0x17677D50)

inline static constexpr unsigned int PADFDPIPGJH_TypeDefinitionIndex = 44105;

	class PADFDPIPGJH : public ::BKABEBEPPJK
	{
	public:
		::RPG::GameCore::MarbleSetNextScore* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::MarbleSetNextScore* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleSetNextScore*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + PADFDPIPGJH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDNAAOHECPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PADFDPIPGJH_KDNAAOHECPD_OFFSET))(this);
		}

	};
