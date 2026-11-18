#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigCameraPitchPolars; }
namespace System { class Action; }

#define LIKCIDFFNMM_JDPNCEJABCC_LKNFOAIOBMH_OFFSET UNITYSDK_OFFSET(0x158E1700)
#define LIKCIDFFNMM_JDPNCEJABCC__CTOR_OFFSET UNITYSDK_OFFSET(0x158E16F0)

inline static constexpr unsigned int LIKCIDFFNMM_JDPNCEJABCC_TypeDefinitionIndex = 43008;

class LIKCIDFFNMM_JDPNCEJABCC : public ::System::Object
{
public:
	::Foundation::AssetPath NDICHAJAHKK; // 0x10
	::System::Action* IBNICCGMILF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_JDPNCEJABCC__CTOR_OFFSET))(this);
	}

	::System::Void LKNFOAIOBMH(::MoleMole::Config::ConfigCameraPitchPolars* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraPitchPolars*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_JDPNCEJABCC_LKNFOAIOBMH_OFFSET))(this, DFMKILICPFB);
	}
};
