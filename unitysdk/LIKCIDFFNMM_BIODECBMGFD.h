#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class LIKCIDFFNMM_HJMFEJPNEEM;
namespace MoleMole::Config { class ConfigCameraScreenOffsetDatas; }

#define LIKCIDFFNMM_BIODECBMGFD_ACKELJGBHGE_OFFSET UNITYSDK_OFFSET(0x11F194C0)
#define LIKCIDFFNMM_BIODECBMGFD__CTOR_OFFSET UNITYSDK_OFFSET(0x11F194B0)

inline static constexpr unsigned int LIKCIDFFNMM_BIODECBMGFD_TypeDefinitionIndex = 43016;

class LIKCIDFFNMM_BIODECBMGFD : public ::System::Object
{
public:
	::LIKCIDFFNMM_HJMFEJPNEEM* FGBNBFHOKAA; // 0x10
	::Foundation::AssetPath OIIHCACKLHD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_BIODECBMGFD__CTOR_OFFSET))(this);
	}

	::System::Void ACKELJGBHGE(::MoleMole::Config::ConfigCameraScreenOffsetDatas* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraScreenOffsetDatas*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_BIODECBMGFD_ACKELJGBHGE_OFFSET))(this, DFMKILICPFB);
	}
};
