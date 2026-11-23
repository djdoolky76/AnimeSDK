#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FF76D3899EF0AE7B;
namespace HoudiniEngineUnity { class HEU_GeoSync; }
namespace HoudiniEngineUnity { class HEU_PDGAssetLink_E6DCE99A6FC74DF3; }

#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_BD77C38F0F640B67_AE1E1CD618701949_OFFSET UNITYSDK_OFFSET(0x3843930)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_BD77C38F0F640B67__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_PDGAssetLink_BD77C38F0F640B67_TypeDefinitionIndex = 17925;

	class HEU_PDGAssetLink_BD77C38F0F640B67 : public ::System::Object
	{
	public:
		::HoudiniEngineUnity::HEU_GeoSync* E4CF5932B0E822E8; // 0x10
		::HoudiniEngineUnity::HEU_PDGAssetLink_E6DCE99A6FC74DF3* A8791C2B0F6F977B; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_BD77C38F0F640B67__CTOR_OFFSET))(this);
		}

		::System::Void AE1E1CD618701949(::FF76D3899EF0AE7B* AD13C6A9CD32769F)
		{
			return ((::System::Void(*)(::PVOID, ::FF76D3899EF0AE7B*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_BD77C38F0F640B67_AE1E1CD618701949_OFFSET))(this, AD13C6A9CD32769F);
		}
	};
}
