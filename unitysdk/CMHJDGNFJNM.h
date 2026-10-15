#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABEBEPPJK.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleDebug; }

#define CMHJDGNFJNM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA13140)
#define CMHJDGNFJNM_KDNAAOHECPD_OFFSET UNITYSDK_OFFSET(0x1CA13150)

inline static constexpr unsigned int CMHJDGNFJNM_TypeDefinitionIndex = 43133;

	class CMHJDGNFJNM : public ::BKABEBEPPJK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::MarbleDebug* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleDebug*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + CMHJDGNFJNM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDNAAOHECPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMHJDGNFJNM_KDNAAOHECPD_OFFSET))(this);
		}

	};
