#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NGLPPILMPGH;

#define OHIGFAMPGNJ_EIAILHGELLL_OFFSET UNITYSDK_OFFSET(0xE14FCF0)
#define OHIGFAMPGNJ__CTOR_OFFSET UNITYSDK_OFFSET(0xE14FCE0)

inline static constexpr unsigned int OHIGFAMPGNJ_TypeDefinitionIndex = 67702;

class OHIGFAMPGNJ : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHIGFAMPGNJ__CTOR_OFFSET))(this);
	}

	static ::System::Void EIAILHGELLL(::NGLPPILMPGH* HHIJHDFHPOI)
	{
		return ((::System::Void(*)(::NGLPPILMPGH*))((::PBYTE)hIl2Cpp + OHIGFAMPGNJ_EIAILHGELLL_OFFSET))(HHIJHDFHPOI);
	}
};
