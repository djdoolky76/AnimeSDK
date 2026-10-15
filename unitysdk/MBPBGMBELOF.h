#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABEBEPPJK.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleLeadHand; }

#define MBPBGMBELOF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C924B50)
#define MBPBGMBELOF_KDNAAOHECPD_OFFSET UNITYSDK_OFFSET(0x1C924B60)

inline static constexpr unsigned int MBPBGMBELOF_TypeDefinitionIndex = 43129;

	class MBPBGMBELOF : public ::BKABEBEPPJK
	{
	public:
		::RPG::GameCore::MarbleLeadHand* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::MarbleLeadHand* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleLeadHand*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + MBPBGMBELOF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDNAAOHECPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPBGMBELOF_KDNAAOHECPD_OFFSET))(this);
		}

	};
