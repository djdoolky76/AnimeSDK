#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DEDDPKGLKHI_LODLFMBCLAH.h"

#define LOHNKGBDDDE_DCLAGBAOAGO_EDMJJNFFBIB_OFFSET UNITYSDK_OFFSET(0x15902650)
#define LOHNKGBDDDE_DCLAGBAOAGO__CTOR_OFFSET UNITYSDK_OFFSET(0x15902640)

inline static constexpr unsigned int LOHNKGBDDDE_DCLAGBAOAGO_TypeDefinitionIndex = 43215;

class LOHNKGBDDDE_DCLAGBAOAGO : public ::System::Object
{
public:
	::System::Int32 BKEDOGMDOOJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHNKGBDDDE_DCLAGBAOAGO__CTOR_OFFSET))(this);
	}

	::System::Boolean EDMJJNFFBIB(::DEDDPKGLKHI_LODLFMBCLAH OFNDMBEELON)
	{
		return ((::System::Boolean(*)(::PVOID, ::DEDDPKGLKHI_LODLFMBCLAH))((::PBYTE)hIl2Cpp + LOHNKGBDDDE_DCLAGBAOAGO_EDMJJNFFBIB_OFFSET))(this, OFNDMBEELON);
	}
};
