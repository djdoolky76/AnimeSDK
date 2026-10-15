#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::CustomRP { class CRPGraphicsSettingsData; }

#define RPG_CLIENT_CRPSSGIQUALITYSETTINGS_BGJJNEOJNCA_OFFSET UNITYSDK_OFFSET(0xC8CDBD0)
#define RPG_CLIENT_CRPSSGIQUALITYSETTINGS_CTOR_OFFSET UNITYSDK_OFFSET(0xC8CDC70)

namespace RPG::Client
{
	inline static constexpr unsigned int CRPSSGIQualitySettings_TypeDefinitionIndex = 67934;

	class CRPSSGIQualitySettings : public ::System::Object
	{
	public:
		::System::Boolean Enable; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single RenderScale; // 0x14
		::System::Int32 RenderHeightClamp; // 0x18
		::System::Int32 SpatialFilterIterCount; // 0x1C
		::System::Boolean Upscale; // 0x20
		::System::Byte _padding1[0x3];
		::System::Int32 UpscaleResolutionHeight; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CRPSSGIQUALITYSETTINGS_CTOR_OFFSET))(this);
		}

		::System::Void BGJJNEOJNCA(::RPG::CustomRP::CRPGraphicsSettingsData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPGraphicsSettingsData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CRPSSGIQUALITYSETTINGS_BGJJNEOJNCA_OFFSET))(this, a1);
		}

	};
}
