#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABEBEPPJK.h"
class AOOPAHPBLHI;
class JMOHKKCNCMA;

#define JPCPLFJGFDM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB79A90)
#define JPCPLFJGFDM_KDNAAOHECPD_OFFSET UNITYSDK_OFFSET(0x1CB79AA0)

inline static constexpr unsigned int JPCPLFJGFDM_TypeDefinitionIndex = 43094;

	class JPCPLFJGFDM : public ::BKABEBEPPJK
	{
	public:
		::AOOPAHPBLHI* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::AOOPAHPBLHI* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AOOPAHPBLHI*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + JPCPLFJGFDM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDNAAOHECPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JPCPLFJGFDM_KDNAAOHECPD_OFFSET))(this);
		}

	};
