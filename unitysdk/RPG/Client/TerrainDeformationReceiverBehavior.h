#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
namespace RPG::Client { class TerrainDeformationReceiverMonoPlugin; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_BKAJINFCHKO_OFFSET UNITYSDK_OFFSET(0xE1FF710)
#define RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xE1FFCB0)
#define RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xE1FF3F0)
#define RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_COFIHKIDOGE_OFFSET UNITYSDK_OFFSET(0xE1FF130)
#define RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE1FFCA0)
#define RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0xE1FF690)
#define RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xE1FF460)
#define RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE1FF030)
#define RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xE1FF380)
#define RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_MHFNJCLKNMG_OFFSET UNITYSDK_OFFSET(0xE1FF5C0)
#define RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xE1FF560)
#define RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xE1FF4C0)
#define RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xE1FF0C0)
#define RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xE1FF520)
#define RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xE1FF620)

namespace RPG::Client
{
	inline static constexpr unsigned int TerrainDeformationReceiverBehavior_TypeDefinitionIndex = 71031;

	class TerrainDeformationReceiverBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Int32 _InstanceId; // 0x38
		static ::System::Int32* StaticGet_NormalScaleId()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "TerrainDeformationReceiverBehavior")->GetStaticField(0x47B0);
		}

		static ::System::Int32* StaticGet_MaskScaleId()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "TerrainDeformationReceiverBehavior")->GetStaticField(0x47B4);
		}

		static ::System::Int32* StaticGet_RiseScaleId()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "TerrainDeformationReceiverBehavior")->GetStaticField(0x47B8);
		}

		static ::System::Int32* StaticGet_EdgeOffsetId()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "TerrainDeformationReceiverBehavior")->GetStaticField(0x47BC);
		}

		static ::System::Int32* StaticGet_HeightScaleId()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "TerrainDeformationReceiverBehavior")->GetStaticField(0x47C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Void MHFNJCLKNMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_MHFNJCLKNMG_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void COFIHKIDOGE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_COFIHKIDOGE_OFFSET))(this, a1);
		}

		::System::Void BKAJINFCHKO(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_BKAJINFCHKO_OFFSET))(this, a1);
		}

		::RPG::Client::TerrainDeformationReceiverMonoPlugin* get__Owner()
		{
			return ((::RPG::Client::TerrainDeformationReceiverMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_GET__OWNER_OFFSET))(this);
		}

	};
}
