#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BDKEBEPAEMF;
class IFOHGNLIAKH;

#define BDKEBEPAEMF_HHFOFEOPAKJ_EFMCEPCBHPN_OFFSET UNITYSDK_OFFSET(0x12D1C180)
#define BDKEBEPAEMF_HHFOFEOPAKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x12D1C170)

inline static constexpr unsigned int BDKEBEPAEMF_HHFOFEOPAKJ_TypeDefinitionIndex = 54718;

class BDKEBEPAEMF_HHFOFEOPAKJ : public ::System::Object
{
public:
	::BDKEBEPAEMF* KLHPEBKNIFB; // 0x10
	::System::Int32 KCNOHOOPNAH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDKEBEPAEMF_HHFOFEOPAKJ__CTOR_OFFSET))(this);
	}

	::System::Void EFMCEPCBHPN(::IFOHGNLIAKH* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::IFOHGNLIAKH*))((::PBYTE)hIl2Cpp + BDKEBEPAEMF_HHFOFEOPAKJ_EFMCEPCBHPN_OFFSET))(this, JOLDOMEIKEF);
	}
};
