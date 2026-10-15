#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABEBEPPJK.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleActionAgainTowardBuffSource; }

#define JOBNGJDKNNJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA66E0)
#define JOBNGJDKNNJ_KDNAAOHECPD_OFFSET UNITYSDK_OFFSET(0x1CBA66F0)

inline static constexpr unsigned int JOBNGJDKNNJ_TypeDefinitionIndex = 43100;

	class JOBNGJDKNNJ : public ::BKABEBEPPJK
	{
	public:
		::RPG::GameCore::MarbleActionAgainTowardBuffSource* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::MarbleActionAgainTowardBuffSource* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleActionAgainTowardBuffSource*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + JOBNGJDKNNJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDNAAOHECPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JOBNGJDKNNJ_KDNAAOHECPD_OFFSET))(this);
		}

	};
