#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class LIKCIDFFNMM_ONONOIAAHBE;
namespace MoleMole::Cameras { class ConfigCameraBangbooAdjustment; }

#define LIKCIDFFNMM_NCOHCPJOLBD_NEAIOOAAJCJ_OFFSET UNITYSDK_OFFSET(0x125676F0)
#define LIKCIDFFNMM_NCOHCPJOLBD__CTOR_OFFSET UNITYSDK_OFFSET(0x125676E0)

inline static constexpr unsigned int LIKCIDFFNMM_NCOHCPJOLBD_TypeDefinitionIndex = 43002;

class LIKCIDFFNMM_NCOHCPJOLBD : public ::System::Object
{
public:
	::Foundation::AssetPath CJBJONJDOLI; // 0x10
	::LIKCIDFFNMM_ONONOIAAHBE* FGBNBFHOKAA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_NCOHCPJOLBD__CTOR_OFFSET))(this);
	}

	::System::Void NEAIOOAAJCJ(::MoleMole::Cameras::ConfigCameraBangbooAdjustment* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::ConfigCameraBangbooAdjustment*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_NCOHCPJOLBD_NEAIOOAAJCJ_OFFSET))(this, DFMKILICPFB);
	}
};
