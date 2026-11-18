#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GAJBFHDCCPG;
class IFOHGNLIAKH;

#define GAJBFHDCCPG_ALGHMAGOPLI_MPOILOPOCBI_OFFSET UNITYSDK_OFFSET(0x142C34E0)
#define GAJBFHDCCPG_ALGHMAGOPLI__CTOR_OFFSET UNITYSDK_OFFSET(0x142C34D0)

inline static constexpr unsigned int GAJBFHDCCPG_ALGHMAGOPLI_TypeDefinitionIndex = 42054;

class GAJBFHDCCPG_ALGHMAGOPLI : public ::System::Object
{
public:
	::GAJBFHDCCPG* KLHPEBKNIFB; // 0x10
	::System::Int32 MOGCGNJCNBM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJBFHDCCPG_ALGHMAGOPLI__CTOR_OFFSET))(this);
	}

	::System::Void MPOILOPOCBI(::IFOHGNLIAKH* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::IFOHGNLIAKH*))((::PBYTE)hIl2Cpp + GAJBFHDCCPG_ALGHMAGOPLI_MPOILOPOCBI_OFFSET))(this, JOLDOMEIKEF);
	}
};
