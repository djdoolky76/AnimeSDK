#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PMGPNDNCFNG.h"
#include "unitysdk/System/Object.h"

#define JHGAKHICHGM_JEHEHELEOEO_OFFSET UNITYSDK_OFFSET(0x13842520)

inline static constexpr unsigned int JHGAKHICHGM_TypeDefinitionIndex = 40621;

class JHGAKHICHGM : public ::System::Object
{
public:
	static ::System::UInt32 JEHEHELEOEO(::PMGPNDNCFNG MCOHLHMKLIP, ::System::UInt16 FOGHPCNPIIP)
	{
		return ((::System::UInt32(*)(::PMGPNDNCFNG, ::System::UInt16))((::PBYTE)hIl2Cpp + JHGAKHICHGM_JEHEHELEOEO_OFFSET))(MCOHLHMKLIP, FOGHPCNPIIP);
	}
};
