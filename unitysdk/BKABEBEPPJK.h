#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JMOHKKCNCMA;

#define BKABEBEPPJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8B7B70)
#define BKABEBEPPJK_LNONMGGKPAN_OFFSET UNITYSDK_OFFSET(0x1C8BC200)

inline static constexpr unsigned int BKABEBEPPJK_TypeDefinitionIndex = 43161;

	class BKABEBEPPJK : public ::System::Object
	{
	public:
		::JMOHKKCNCMA* EEFMDEHLLFI; // 0x10
		::System::Void _ctor(::JMOHKKCNCMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + BKABEBEPPJK_CTOR_OFFSET))(this, a1);
		}

		::System::Void LNONMGGKPAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKABEBEPPJK_LNONMGGKPAN_OFFSET))(this);
		}

	};
