#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
namespace RPG { class OutlinePostFXBehavior_GICJGOPKKEK; }
namespace RPG { class OutlinePostFXBehavior_KNEPAJDLOAF; }
namespace RPG { class OutlinePostFXMonoPlugin; }
namespace UnityEngine { class RenderTexture; }

#define RPG_OUTLINEPOSTFXBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xE86FB80)
#define RPG_OUTLINEPOSTFXBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xE86F9A0)
#define RPG_OUTLINEPOSTFXBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE86FB60)
#define RPG_OUTLINEPOSTFXBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xE86F040)
#define RPG_OUTLINEPOSTFXBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xE86FA30)
#define RPG_OUTLINEPOSTFXBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE86ED50)
#define RPG_OUTLINEPOSTFXBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xE86F570)
#define RPG_OUTLINEPOSTFXBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xE86FA90)
#define RPG_OUTLINEPOSTFXBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xE86F080)
#define RPG_OUTLINEPOSTFXBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xE86FAF0)

namespace RPG
{
	inline static constexpr unsigned int OutlinePostFXBehavior_TypeDefinitionIndex = 51716;

	class OutlinePostFXBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Int32 _RTWidth; // 0x38
		::System::Int32 _RTHeight; // 0x3C
		::UnityEngine::RenderTexture* _blurredRT; // 0x40
		static ::RPG::OutlinePostFXBehavior_KNEPAJDLOAF** StaticGet__outlineCmdCb()
		{
			return (::RPG::OutlinePostFXBehavior_KNEPAJDLOAF**)UnitySDK::FromName("RPG", "OutlinePostFXBehavior")->GetStaticField(0x6F260);
		}

		static ::RPG::OutlinePostFXBehavior_GICJGOPKKEK** StaticGet__outlineFinalCmdCb()
		{
			return (::RPG::OutlinePostFXBehavior_GICJGOPKKEK**)UnitySDK::FromName("RPG", "OutlinePostFXBehavior")->GetStaticField(0x6F268);
		}

		static ::System::Int32* StaticGet__ObjectIdID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG", "OutlinePostFXBehavior")->GetStaticField(0x158A0);
		}

		static ::System::Int32* StaticGet__OutlineColorID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG", "OutlinePostFXBehavior")->GetStaticField(0x158A4);
		}

		static ::System::Int32* StaticGet__HideNPCPartsID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG", "OutlinePostFXBehavior")->GetStaticField(0x158A8);
		}

		static ::System::Int32* StaticGet__BlurDirectionID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG", "OutlinePostFXBehavior")->GetStaticField(0x158AC);
		}

		static ::System::Int32* StaticGet__ShowPartID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG", "OutlinePostFXBehavior")->GetStaticField(0x158B0);
		}

		static ::System::Int32* StaticGet__DepthRTID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG", "OutlinePostFXBehavior")->GetStaticField(0x158B4);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::RPG::OutlinePostFXMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::OutlinePostFXMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}
