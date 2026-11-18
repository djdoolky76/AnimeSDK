#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PKPCAPOLHGN_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1CDE5CC0)
#define PKPCAPOLHGN__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDE5D00)

inline static constexpr unsigned int PKPCAPOLHGN_TypeDefinitionIndex = 28907;

class PKPCAPOLHGN : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPCAPOLHGN__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPCAPOLHGN_NPOLNFDBOOD_OFFSET))(this);
	}
};
