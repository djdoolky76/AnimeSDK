#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class LIKCIDFFNMM_BEAOBMKNAKO;
namespace MoleMole::Cameras { class ConfigCameraOverrideTrack; }

#define LIKCIDFFNMM_BJPBNCNBNGJ_BDBADNOOKHM_OFFSET UNITYSDK_OFFSET(0x14DB42F0)
#define LIKCIDFFNMM_BJPBNCNBNGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14DB42E0)

inline static constexpr unsigned int LIKCIDFFNMM_BJPBNCNBNGJ_TypeDefinitionIndex = 43004;

class LIKCIDFFNMM_BJPBNCNBNGJ : public ::System::Object
{
public:
	::LIKCIDFFNMM_BEAOBMKNAKO* FGBNBFHOKAA; // 0x10
	::Foundation::AssetPath CJBJONJDOLI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_BJPBNCNBNGJ__CTOR_OFFSET))(this);
	}

	::System::Void BDBADNOOKHM(::MoleMole::Cameras::ConfigCameraOverrideTrack* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::ConfigCameraOverrideTrack*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_BJPBNCNBNGJ_BDBADNOOKHM_OFFSET))(this, DFMKILICPFB);
	}
};
