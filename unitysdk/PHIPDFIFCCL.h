#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABEBEPPJK.h"
class JMOHKKCNCMA;
class LOPGOAKFMGG;

#define PHIPDFIFCCL_CTOR_OFFSET UNITYSDK_OFFSET(0x176BE0D0)
#define PHIPDFIFCCL_KDNAAOHECPD_OFFSET UNITYSDK_OFFSET(0x176BE0E0)

inline static constexpr unsigned int PHIPDFIFCCL_TypeDefinitionIndex = 44088;

	class PHIPDFIFCCL : public ::BKABEBEPPJK
	{
	public:
		::LOPGOAKFMGG* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::LOPGOAKFMGG* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LOPGOAKFMGG*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + PHIPDFIFCCL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDNAAOHECPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PHIPDFIFCCL_KDNAAOHECPD_OFFSET))(this);
		}

	};
