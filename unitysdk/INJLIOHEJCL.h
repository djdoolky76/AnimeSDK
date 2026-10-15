#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABEBEPPJK.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleAIDegrade; }

#define INJLIOHEJCL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB789B0)
#define INJLIOHEJCL_KDNAAOHECPD_OFFSET UNITYSDK_OFFSET(0x1CB789C0)

inline static constexpr unsigned int INJLIOHEJCL_TypeDefinitionIndex = 43130;

	class INJLIOHEJCL : public ::BKABEBEPPJK
	{
	public:
		::RPG::GameCore::MarbleAIDegrade* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::MarbleAIDegrade* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleAIDegrade*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + INJLIOHEJCL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDNAAOHECPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INJLIOHEJCL_KDNAAOHECPD_OFFSET))(this);
		}

	};
