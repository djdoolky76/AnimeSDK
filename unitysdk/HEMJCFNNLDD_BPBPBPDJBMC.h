#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HEMJCFNNLDD;
class IFOHGNLIAKH;

#define HEMJCFNNLDD_BPBPBPDJBMC_NEFFKJMFLEC_OFFSET UNITYSDK_OFFSET(0x100FBA30)
#define HEMJCFNNLDD_BPBPBPDJBMC__CTOR_OFFSET UNITYSDK_OFFSET(0x100FBA20)

inline static constexpr unsigned int HEMJCFNNLDD_BPBPBPDJBMC_TypeDefinitionIndex = 42459;

class HEMJCFNNLDD_BPBPBPDJBMC : public ::System::Object
{
public:
	::HEMJCFNNLDD* KLHPEBKNIFB; // 0x10
	::System::Int32 KCNOHOOPNAH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEMJCFNNLDD_BPBPBPDJBMC__CTOR_OFFSET))(this);
	}

	::System::Void NEFFKJMFLEC(::IFOHGNLIAKH* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::IFOHGNLIAKH*))((::PBYTE)hIl2Cpp + HEMJCFNNLDD_BPBPBPDJBMC_NEFFKJMFLEC_OFFSET))(this, JOLDOMEIKEF);
	}
};
