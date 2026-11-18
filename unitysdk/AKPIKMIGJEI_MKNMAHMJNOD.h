#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class AKPIKMIGJEI;
namespace MoleMole::Config { class ConfigCameraStretchs; }

#define AKPIKMIGJEI_MKNMAHMJNOD_BHEKKKNPHAM_OFFSET UNITYSDK_OFFSET(0x17DDCB00)
#define AKPIKMIGJEI_MKNMAHMJNOD__CTOR_OFFSET UNITYSDK_OFFSET(0x17DDCAF0)

inline static constexpr unsigned int AKPIKMIGJEI_MKNMAHMJNOD_TypeDefinitionIndex = 54021;

class AKPIKMIGJEI_MKNMAHMJNOD : public ::System::Object
{
public:
	::Foundation::AssetPath CJBJONJDOLI; // 0x10
	::AKPIKMIGJEI* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPIKMIGJEI_MKNMAHMJNOD__CTOR_OFFSET))(this);
	}

	::System::Void BHEKKKNPHAM(::MoleMole::Config::ConfigCameraStretchs* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraStretchs*))((::PBYTE)hIl2Cpp + AKPIKMIGJEI_MKNMAHMJNOD_BHEKKKNPHAM_OFFSET))(this, DFMKILICPFB);
	}
};
