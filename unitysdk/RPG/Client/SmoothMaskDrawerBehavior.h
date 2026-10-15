#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
namespace RPG::Client { class SmoothMaskDrawer; }
namespace UnityEngine { class MaterialAnimationBinding; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::UI { class SmoothMask; }

#define RPG_CLIENT_SMOOTHMASKDRAWERBEHAVIOR_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xE0EB5B0)
#define RPG_CLIENT_SMOOTHMASKDRAWERBEHAVIOR_BJHBKFHPFLN_OFFSET UNITYSDK_OFFSET(0xE0EB7A0)
#define RPG_CLIENT_SMOOTHMASKDRAWERBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xE0EB610)
#define RPG_CLIENT_SMOOTHMASKDRAWERBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE0EBC10)
#define RPG_CLIENT_SMOOTHMASKDRAWERBEHAVIOR_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xE0EB660)
#define RPG_CLIENT_SMOOTHMASKDRAWERBEHAVIOR_FJNJKDPOFGO_OFFSET UNITYSDK_OFFSET(0xE0EB900)
#define RPG_CLIENT_SMOOTHMASKDRAWERBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0xE0EB110)
#define RPG_CLIENT_SMOOTHMASKDRAWERBEHAVIOR_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xE0EB1E0)
#define RPG_CLIENT_SMOOTHMASKDRAWERBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE0EB010)
#define RPG_CLIENT_SMOOTHMASKDRAWERBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xE0EB530)
#define RPG_CLIENT_SMOOTHMASKDRAWERBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xE0EB190)

namespace RPG::Client
{
	class SmoothMaskDrawerBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::UnityEngine::Vector2Int _Resolution; // 0x38
		::UnityEngine::MaterialAnimationBinding* _MaterialAnimationBinding; // 0x40
		::UnityEngine::UI::SmoothMask* _SmoothMask; // 0x48
		::UnityEngine::RenderTexture* _SmoothMaskTexture; // 0x50
		::System::Int32 _SrcBlendShaderProperty; // 0x58
		::System::Int32 _DstBlendShaderProperty; // 0x5C
		static ::RPG::Client::SmoothMaskDrawer** StaticGet_OnlySmoothMaskDrawer()
		{
			return (::RPG::Client::SmoothMaskDrawer**)UnitySDK::FromName("RPG.Client", "SmoothMaskDrawerBehavior")->GetStaticField(0x6F180);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMOOTHMASKDRAWERBEHAVIOR_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMOOTHMASKDRAWERBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMOOTHMASKDRAWERBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMOOTHMASKDRAWERBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMOOTHMASKDRAWERBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMOOTHMASKDRAWERBEHAVIOR_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMOOTHMASKDRAWERBEHAVIOR_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMOOTHMASKDRAWERBEHAVIOR_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Boolean BJHBKFHPFLN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMOOTHMASKDRAWERBEHAVIOR_BJHBKFHPFLN_OFFSET))(this);
		}

		::System::Void FJNJKDPOFGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMOOTHMASKDRAWERBEHAVIOR_FJNJKDPOFGO_OFFSET))(this);
		}

		::RPG::Client::SmoothMaskDrawer* get__Owner()
		{
			return ((::RPG::Client::SmoothMaskDrawer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SMOOTHMASKDRAWERBEHAVIOR_GET__OWNER_OFFSET))(this);
		}

	};
}
