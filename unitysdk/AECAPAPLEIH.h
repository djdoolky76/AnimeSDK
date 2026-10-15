#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABEBEPPJK.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleModifyValue; }

#define AECAPAPLEIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C84ABB0)
#define AECAPAPLEIH_KDNAAOHECPD_OFFSET UNITYSDK_OFFSET(0x1C84ABC0)

inline static constexpr unsigned int AECAPAPLEIH_TypeDefinitionIndex = 43093;

	class AECAPAPLEIH : public ::BKABEBEPPJK
	{
	public:
		::RPG::GameCore::MarbleModifyValue* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::MarbleModifyValue* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleModifyValue*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + AECAPAPLEIH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDNAAOHECPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AECAPAPLEIH_KDNAAOHECPD_OFFSET))(this);
		}

	};
