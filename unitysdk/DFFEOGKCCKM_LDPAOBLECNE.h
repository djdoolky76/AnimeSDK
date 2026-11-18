#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class DFFEOGKCCKM;
namespace MoleMole::Config { class ConfigCameraLockTargetDatas; }

#define DFFEOGKCCKM_LDPAOBLECNE_BHEKKKNPHAM_OFFSET UNITYSDK_OFFSET(0x12BAFFB0)
#define DFFEOGKCCKM_LDPAOBLECNE__CTOR_OFFSET UNITYSDK_OFFSET(0x12BAFFA0)

inline static constexpr unsigned int DFFEOGKCCKM_LDPAOBLECNE_TypeDefinitionIndex = 65448;

class DFFEOGKCCKM_LDPAOBLECNE : public ::System::Object
{
public:
	::Foundation::AssetPath CJBJONJDOLI; // 0x10
	::DFFEOGKCCKM* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFEOGKCCKM_LDPAOBLECNE__CTOR_OFFSET))(this);
	}

	::System::Void BHEKKKNPHAM(::MoleMole::Config::ConfigCameraLockTargetDatas* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraLockTargetDatas*))((::PBYTE)hIl2Cpp + DFFEOGKCCKM_LDPAOBLECNE_BHEKKKNPHAM_OFFSET))(this, DFMKILICPFB);
	}
};
