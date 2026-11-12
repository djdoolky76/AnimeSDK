#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABEBEPPJK.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleChooseTarget; }

#define CIJFBBIKMFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBCD040)
#define CIJFBBIKMFJ_KDNAAOHECPD_OFFSET UNITYSDK_OFFSET(0x1DBCD050)

inline static constexpr unsigned int CIJFBBIKMFJ_TypeDefinitionIndex = 44089;

	class CIJFBBIKMFJ : public ::BKABEBEPPJK
	{
	public:
		::RPG::GameCore::MarbleChooseTarget* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::MarbleChooseTarget* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleChooseTarget*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + CIJFBBIKMFJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDNAAOHECPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CIJFBBIKMFJ_KDNAAOHECPD_OFFSET))(this);
		}

	};
