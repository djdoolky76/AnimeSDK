#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { class LoadOp; }
namespace MoleMole::Config { class ConfigCameraStretchs; }

#define AKPIKMIGJEI_CREATEINDEXOP_OFFSET UNITYSDK_OFFSET(0x135F4F10)
#define AKPIKMIGJEI_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x135F5070)
#define AKPIKMIGJEI_JGOGKJFMBHB_OFFSET UNITYSDK_OFFSET(0x135F5160)
#define AKPIKMIGJEI__CTOR_OFFSET UNITYSDK_OFFSET(0x135F4ED0)

inline static constexpr unsigned int AKPIKMIGJEI_TypeDefinitionIndex = 54020;

class AKPIKMIGJEI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPIKMIGJEI__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateIndexOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPIKMIGJEI_CREATEINDEXOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + AKPIKMIGJEI_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}

	::System::Void JGOGKJFMBHB(::Foundation::AssetPath OIIHCACKLHD, ::MoleMole::Config::ConfigCameraStretchs* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::MoleMole::Config::ConfigCameraStretchs*))((::PBYTE)hIl2Cpp + AKPIKMIGJEI_JGOGKJFMBHB_OFFSET))(this, OIIHCACKLHD, DFMKILICPFB);
	}
};
