#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JBFAFOGGBCA.h"
class EKICIHELMPH;
class IALNKLGLOMC;

#define EGMCEAJKPCN_ANGOMBFFLHD_OFFSET UNITYSDK_OFFSET(0x152F8DD0)
#define EGMCEAJKPCN_CTOR_OFFSET UNITYSDK_OFFSET(0x152F8C90)
#define EGMCEAJKPCN_DGADOHHPKPO_OFFSET UNITYSDK_OFFSET(0x152F8F60)
#define EGMCEAJKPCN_EJILCHDOCDB_OFFSET UNITYSDK_OFFSET(0x152F9030)
#define EGMCEAJKPCN_NCNPDHJMLNG_OFFSET UNITYSDK_OFFSET(0x152F8D20)

inline static constexpr unsigned int EGMCEAJKPCN_TypeDefinitionIndex = 64065;

	class EGMCEAJKPCN : public ::System::Object
	{
	public:
		::IALNKLGLOMC* EDLDCGGEPFG; // 0x10
		::EKICIHELMPH* JDANNEMAPJK; // 0x18
		::System::Void _ctor(::IALNKLGLOMC* a1, ::EKICIHELMPH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IALNKLGLOMC*, ::EKICIHELMPH*))((::PBYTE)hIl2Cpp + EGMCEAJKPCN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean NCNPDHJMLNG(::JBFAFOGGBCA a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JBFAFOGGBCA))((::PBYTE)hIl2Cpp + EGMCEAJKPCN_NCNPDHJMLNG_OFFSET))(this, a1);
		}

		::System::Boolean ANGOMBFFLHD(::JBFAFOGGBCA a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JBFAFOGGBCA))((::PBYTE)hIl2Cpp + EGMCEAJKPCN_ANGOMBFFLHD_OFFSET))(this, a1);
		}

		::System::Boolean DGADOHHPKPO(::JBFAFOGGBCA a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JBFAFOGGBCA))((::PBYTE)hIl2Cpp + EGMCEAJKPCN_DGADOHHPKPO_OFFSET))(this, a1);
		}

		::System::Boolean EJILCHDOCDB(::JBFAFOGGBCA a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JBFAFOGGBCA))((::PBYTE)hIl2Cpp + EGMCEAJKPCN_EJILCHDOCDB_OFFSET))(this, a1);
		}

	};
