#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABEBEPPJK.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleAddScore; }

#define JPCNIMPNNPO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB799F0)
#define JPCNIMPNNPO_KDNAAOHECPD_OFFSET UNITYSDK_OFFSET(0x1CB79A00)

inline static constexpr unsigned int JPCNIMPNNPO_TypeDefinitionIndex = 43128;

	class JPCNIMPNNPO : public ::BKABEBEPPJK
	{
	public:
		::RPG::GameCore::MarbleAddScore* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::MarbleAddScore* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleAddScore*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + JPCNIMPNNPO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDNAAOHECPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JPCNIMPNNPO_KDNAAOHECPD_OFFSET))(this);
		}

	};
