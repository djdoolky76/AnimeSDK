#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABEBEPPJK.h"
class JMOHKKCNCMA;
class MCPOJOODEGO;

#define PJALIHKMNBI_CTOR_OFFSET UNITYSDK_OFFSET(0x176C8B50)
#define PJALIHKMNBI_KDNAAOHECPD_OFFSET UNITYSDK_OFFSET(0x206FD870)

inline static constexpr unsigned int PJALIHKMNBI_TypeDefinitionIndex = 44098;

	class PJALIHKMNBI : public ::BKABEBEPPJK
	{
	public:
		::MCPOJOODEGO* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::MCPOJOODEGO* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MCPOJOODEGO*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + PJALIHKMNBI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDNAAOHECPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PJALIHKMNBI_KDNAAOHECPD_OFFSET))(this);
		}

	};
