#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class LIKCIDFFNMM_BMKEGBIADHO;
namespace MoleMole::Config { class ConfigCameraZooms; }

#define LIKCIDFFNMM_MBDHFAFCKJL_EKEPJOCPFAO_OFFSET UNITYSDK_OFFSET(0x15E01360)
#define LIKCIDFFNMM_MBDHFAFCKJL__CTOR_OFFSET UNITYSDK_OFFSET(0x15E01350)

inline static constexpr unsigned int LIKCIDFFNMM_MBDHFAFCKJL_TypeDefinitionIndex = 43010;

class LIKCIDFFNMM_MBDHFAFCKJL : public ::System::Object
{
public:
	::Foundation::AssetPath OIIHCACKLHD; // 0x10
	::LIKCIDFFNMM_BMKEGBIADHO* FGBNBFHOKAA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_MBDHFAFCKJL__CTOR_OFFSET))(this);
	}

	::System::Void EKEPJOCPFAO(::MoleMole::Config::ConfigCameraZooms* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraZooms*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_MBDHFAFCKJL_EKEPJOCPFAO_OFFSET))(this, DFMKILICPFB);
	}
};
