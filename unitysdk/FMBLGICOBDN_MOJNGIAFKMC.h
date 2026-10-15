#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/LightTypeID.h"

#define FMBLGICOBDN_MOJNGIAFKMC_CTOR_OFFSET UNITYSDK_OFFSET(0x2E77AA0)

	struct alignas(4) FMBLGICOBDN_MOJNGIAFKMC
	{
		::System::Int32 FAPENEGBFGK; // 0x10
		::System::Int32 OEOOKEJAGDD; // 0x14
		::ScenenLightManager::LightTypeID GMIEDOBIPGF; // 0x18
		::System::Int32 PMJPKNKCKLF; // 0x1C
		::System::Int32 DEBIMPEAMIN; // 0x20
		::System::Int32 BEPBIGNPOGI; // 0x24
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::ScenenLightManager::LightTypeID a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::ScenenLightManager::LightTypeID, ::System::Int32))((::PBYTE)hIl2Cpp + FMBLGICOBDN_MOJNGIAFKMC_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

	};
