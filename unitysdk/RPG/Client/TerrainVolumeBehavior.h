#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace GeometryEdit { class Prism; }
namespace RPG::Client { class TerrainVolumeMonoPlugin; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xE1FFF60)
#define RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE200440)
#define RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xE1FFE60)
#define RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xE1FFFC0)
#define RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE1FFD50)
#define RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xE1FFF00)
#define RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_MKFLBBLOHCC_OFFSET UNITYSDK_OFFSET(0xE200250)
#define RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xE2000C0)
#define RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xE200020)
#define RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_OOGNIHFJGNI_OFFSET UNITYSDK_OFFSET(0xE200370)
#define RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xE1FFEA0)
#define RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xE200080)
#define RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xE200120)

namespace RPG::Client
{
	inline static constexpr unsigned int TerrainVolumeBehavior_TypeDefinitionIndex = 71034;

	class TerrainVolumeBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::UnityEngine::Texture* HeightBlendTex; // 0x38
		::UnityEngine::Texture* HeightBlendDetailTex; // 0x40
		::UnityEngine::Vector2 BlendBaseRange; // 0x48
		::UnityEngine::Bounds HeightBlendBounds; // 0x50
		::GeometryEdit::Prism* mPrism; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void MKFLBBLOHCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_MKFLBBLOHCC_OFFSET))(this);
		}

		::System::Void OOGNIHFJGNI(::UnityEngine::Texture2D* a1, ::UnityEngine::Texture2D* a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Bounds a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::UnityEngine::Texture2D*, ::UnityEngine::Vector2, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_OOGNIHFJGNI_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::TerrainVolumeMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::TerrainVolumeMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}
