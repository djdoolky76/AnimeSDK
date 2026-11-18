#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class LIKCIDFFNMM_IDHBNOHGCMK;
namespace MoleMole::Config { class ConfigCameraStretchs; }

#define LIKCIDFFNMM_CKPGHBCILCF_AJKFBDFHOHI_OFFSET UNITYSDK_OFFSET(0xD430EC0)
#define LIKCIDFFNMM_CKPGHBCILCF__CTOR_OFFSET UNITYSDK_OFFSET(0xD430EB0)

inline static constexpr unsigned int LIKCIDFFNMM_CKPGHBCILCF_TypeDefinitionIndex = 43011;

class LIKCIDFFNMM_CKPGHBCILCF : public ::System::Object
{
public:
	::Foundation::AssetPath OIIHCACKLHD; // 0x10
	::LIKCIDFFNMM_IDHBNOHGCMK* FGBNBFHOKAA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_CKPGHBCILCF__CTOR_OFFSET))(this);
	}

	::System::Void AJKFBDFHOHI(::MoleMole::Config::ConfigCameraStretchs* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraStretchs*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_CKPGHBCILCF_AJKFBDFHOHI_OFFSET))(this, DFMKILICPFB);
	}
};
