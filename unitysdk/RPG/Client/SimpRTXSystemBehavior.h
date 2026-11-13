#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SimpRTXSystemBehavior_BDGJBHKFJLD.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"
#include "unitysdk/UnityEngine/Rendering/SimpRTXSceneResources.h"
class HALFODCJNDE;
namespace RPG::Client { class SimpRTXSystemMonoPlugin; }
namespace RPG::CustomRP { class SWRTPass; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_BAIPLNNJFPB_OFFSET UNITYSDK_OFFSET(0x1B4013D0)
#define RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4028C0)
#define RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0x1B401240)
#define RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1B4028B0)
#define RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_EJHAHLFFHND_OFFSET UNITYSDK_OFFSET(0x1B402290)
#define RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x1B400D60)
#define RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_IIDCMBJEJKO_OFFSET UNITYSDK_OFFSET(0x1B4012A0)
#define RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_IJNIFNDCJNH_OFFSET UNITYSDK_OFFSET(0x1B401920)
#define RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1B400750)
#define RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_LFNAIFONPKA_OFFSET UNITYSDK_OFFSET(0x1B400800)
#define RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0x1B400DE0)
#define RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_MNBIOIAIIHB_OFFSET UNITYSDK_OFFSET(0x1B401E20)
#define RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_NNNBHNELFPG_OFFSET UNITYSDK_OFFSET(0x1B4027B0)
#define RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0x1B400B50)
#define RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_PEIJJKLMPHD_OFFSET UNITYSDK_OFFSET(0x1B401B90)
#define RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_PMIHOCOJJGO_OFFSET UNITYSDK_OFFSET(0x1B401510)

namespace RPG::Client
{
	inline static constexpr unsigned int SimpRTXSystemBehavior_TypeDefinitionIndex = 72928;

	class SimpRTXSystemBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::RPG::Client::SimpRTXSystemBehavior_BDGJBHKFJLD _lastKey; // 0x38
		::System::Boolean _forceResync; // 0x88
		static ::System::Int32* StaticGet_SimpRTXIntensityID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "SimpRTXSystemBehavior")->GetStaticField(0x16210);
		}

		static ::System::Int32* StaticGet_SimpRTXAtlasID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "SimpRTXSystemBehavior")->GetStaticField(0x16214);
		}

		static ::System::Int32* StaticGet_SimpRTXAtlasDimensionID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "SimpRTXSystemBehavior")->GetStaticField(0x16218);
		}

		static ::System::Int32* StaticGet_SimpRTXDatasID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "SimpRTXSystemBehavior")->GetStaticField(0x1621C);
		}

		static ::System::Int32* StaticGet_SimpRTXCylinderGroupCountID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "SimpRTXSystemBehavior")->GetStaticField(0x16220);
		}

		static ::System::Int32* StaticGet_SimpRTXQuadGroupCountID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "SimpRTXSystemBehavior")->GetStaticField(0x16224);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void IIDCMBJEJKO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_IIDCMBJEJKO_OFFSET))(this, a1);
		}

		::System::Void LFNAIFONPKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_LFNAIFONPKA_OFFSET))(this);
		}

		::System::Void PMIHOCOJJGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_PMIHOCOJJGO_OFFSET))(this);
		}

		::System::Void BAIPLNNJFPB(::HALFODCJNDE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HALFODCJNDE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_BAIPLNNJFPB_OFFSET))(this, a1);
		}

		::System::Void IJNIFNDCJNH(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::CRPMainCameraDesc a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CRPMainCameraDesc))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_IJNIFNDCJNH_OFFSET))(this, a1, a2);
		}

		::System::Void PEIJJKLMPHD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_PEIJJKLMPHD_OFFSET))(this);
		}

		::RPG::Client::SimpRTXSystemBehavior_BDGJBHKFJLD MNBIOIAIIHB()
		{
			return ((::RPG::Client::SimpRTXSystemBehavior_BDGJBHKFJLD(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_MNBIOIAIIHB_OFFSET))(this);
		}

		::System::Void EJHAHLFFHND(::RPG::Client::SimpRTXSystemBehavior_BDGJBHKFJLD a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SimpRTXSystemBehavior_BDGJBHKFJLD))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_EJHAHLFFHND_OFFSET))(this, a1);
		}

		static ::System::Void NNNBHNELFPG(::UnityEngine::Rendering::SimpRTXSceneResources a1, ::RPG::CustomRP::SWRTPass* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::SimpRTXSceneResources, ::RPG::CustomRP::SWRTPass*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_NNNBHNELFPG_OFFSET))(a1, a2);
		}

		::RPG::Client::SimpRTXSystemMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::SimpRTXSystemMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}
