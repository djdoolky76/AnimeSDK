#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PANLBJHDGAA;
namespace System { template <typename T1, typename T2> class Func_2; }

#define LDGHPCBNKMP_GKKDFDGGIBG_FGIAALEDFHO_OFFSET UNITYSDK_OFFSET(0xD41FA30)
#define LDGHPCBNKMP_GKKDFDGGIBG__CTOR_OFFSET UNITYSDK_OFFSET(0xD41FA20)

inline static constexpr unsigned int LDGHPCBNKMP_GKKDFDGGIBG_TypeDefinitionIndex = 72780;

class LDGHPCBNKMP_GKKDFDGGIBG : public ::System::Object
{
public:
	::System::Func_2<::PANLBJHDGAA*, ::System::Boolean>* CNLBKBHNAKA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGHPCBNKMP_GKKDFDGGIBG__CTOR_OFFSET))(this);
	}

	::System::Boolean FGIAALEDFHO(::PANLBJHDGAA* FMDAPKKIHJJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::PANLBJHDGAA*))((::PBYTE)hIl2Cpp + LDGHPCBNKMP_GKKDFDGGIBG_FGIAALEDFHO_OFFSET))(this, FMDAPKKIHJJ);
	}
};
