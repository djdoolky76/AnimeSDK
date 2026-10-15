#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ODHMHHGKCJP.h"
#include "unitysdk/HJIOMFDJLLA.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class MOMODPMFIKE;

#define CJJMHCJPHLN_CTOR_OFFSET UNITYSDK_OFFSET(0xD210370)
#define CJJMHCJPHLN_FHAPPCADGCE_OFFSET UNITYSDK_OFFSET(0xD210290)
#define CJJMHCJPHLN_NCNIPPEOPGP_OFFSET UNITYSDK_OFFSET(0xD210220)

inline static constexpr unsigned int CJJMHCJPHLN_TypeDefinitionIndex = 53997;

	class CJJMHCJPHLN : public ::ODHMHHGKCJP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJMHCJPHLN_CTOR_OFFSET))(this);
		}

		::MOMODPMFIKE* NCNIPPEOPGP(::RPG::GameCore::FixPoint a1)
		{
			return ((::MOMODPMFIKE*(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CJJMHCJPHLN_NCNIPPEOPGP_OFFSET))(this, a1);
		}

		::System::Void FHAPPCADGCE(::RPG::GameCore::FixPoint a1, ::HJIOMFDJLLA a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::HJIOMFDJLLA))((::PBYTE)hIl2Cpp + CJJMHCJPHLN_FHAPPCADGCE_OFFSET))(this, a1, a2);
		}

	};
