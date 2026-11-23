#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace TA::CameraPostEffectSystem { class VolumeDataBase; }

#define BCAEA2FFFE4383DF_A765A1D14770A303_OFFSET UNITYSDK_OFFSET(0x286D290)
#define BCAEA2FFFE4383DF__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BCAEA2FFFE4383DF_TypeDefinitionIndex = 16130;

class BCAEA2FFFE4383DF : public ::System::Object
{
public:
	::Il2CppArray<::TA::CameraPostEffectSystem::VolumeDataBase*>* F87E6709690B077D; // 0x10
	::System::Int32 E9161AE6B7C1B8D7; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCAEA2FFFE4383DF__CTOR_OFFSET))(this);
	}

	::System::Void A765A1D14770A303()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCAEA2FFFE4383DF_A765A1D14770A303_OFFSET))(this);
	}
};
