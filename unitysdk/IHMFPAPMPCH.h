#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PGELNNONBHD.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define IHMFPAPMPCH_APMCKICIGDA_OFFSET UNITYSDK_OFFSET(0x13AA3A40)
#define IHMFPAPMPCH__CTOR_OFFSET UNITYSDK_OFFSET(0x13AA3B10)

inline static constexpr unsigned int IHMFPAPMPCH_TypeDefinitionIndex = 38966;

class IHMFPAPMPCH : public ::System::Object
{
public:
	::System::Func_2<::MoleMole::EntityHandle, ::System::Boolean>* DMHOJODKAHK; // 0x10
	::System::Int32 GOLLIDOALMD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHMFPAPMPCH__CTOR_OFFSET))(this);
	}

	::System::Boolean APMCKICIGDA(::PGELNNONBHD HGDMBHDKFPK)
	{
		return ((::System::Boolean(*)(::PVOID, ::PGELNNONBHD))((::PBYTE)hIl2Cpp + IHMFPAPMPCH_APMCKICIGDA_OFFSET))(this, HGDMBHDKFPK);
	}
};
