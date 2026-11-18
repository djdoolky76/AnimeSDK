#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class JJJHIBECFIP;
namespace MoleMole::Cameras { class ConfigCameraOverrideTrack; }

#define JJJHIBECFIP_FEBEBALFHIC_BHEKKKNPHAM_OFFSET UNITYSDK_OFFSET(0x14FBF030)
#define JJJHIBECFIP_FEBEBALFHIC__CTOR_OFFSET UNITYSDK_OFFSET(0x14FBF020)

inline static constexpr unsigned int JJJHIBECFIP_FEBEBALFHIC_TypeDefinitionIndex = 92175;

class JJJHIBECFIP_FEBEBALFHIC : public ::System::Object
{
public:
	::JJJHIBECFIP* KLHPEBKNIFB; // 0x10
	::Foundation::AssetPath CJBJONJDOLI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJJHIBECFIP_FEBEBALFHIC__CTOR_OFFSET))(this);
	}

	::System::Void BHEKKKNPHAM(::MoleMole::Cameras::ConfigCameraOverrideTrack* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::ConfigCameraOverrideTrack*))((::PBYTE)hIl2Cpp + JJJHIBECFIP_FEBEBALFHIC_BHEKKKNPHAM_OFFSET))(this, DFMKILICPFB);
	}
};
