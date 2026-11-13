#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/AnchorBinding.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/AnchorIdentifier.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ComicDessertView.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/DishAnchorGroup.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDEVICEVIEW_APPENDGLOWRENDERERS_OFFSET UNITYSDK_OFFSET(0x1E148610)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDEVICEVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E13EC90)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDEVICEVIEW_GETANCHORATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x1E1477E0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDEVICEVIEW_ILKKPACDEFI_OFFSET UNITYSDK_OFFSET(0x1E148700)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDEVICEVIEW_KEFADPFGJIE_OFFSET UNITYSDK_OFFSET(0x1E1478C0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDEVICEVIEW_MCGIABCNPLO_OFFSET UNITYSDK_OFFSET(0x1E148750)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDEVICEVIEW_MIFMKHEJGAL_OFFSET UNITYSDK_OFFSET(0x1E1482A0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDEVICEVIEW_PLAYUPGRADEEFFECT_OFFSET UNITYSDK_OFFSET(0x1E1480A0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDEVICEVIEW_SETBODYVISIBLE_OFFSET UNITYSDK_OFFSET(0x1E147E00)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDEVICEVIEW_SETEFFECTVISIBLE_OFFSET UNITYSDK_OFFSET(0x1E147C60)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDEVICEVIEW_STOPUPGRADEEFFECT_OFFSET UNITYSDK_OFFSET(0x1E148240)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertDeviceView_TypeDefinitionIndex = 80082;

	class ComicDessertDeviceView : public ::RPG::Client::LittleGame::ComicDessert::ComicDessertView
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* PPOLCBJBBBC; // 0x58
		::System::Boolean BANAOJKNANF; // 0x60
		::System::Byte _padding0[0x3];
		::System::UInt32 DeviceID; // 0x64
		::UnityEngine::GameObject* _UpgradeEffect; // 0x68
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* _GlowRenderers; // 0x70
		::System::Boolean _OrganizeByDishID; // 0x78
		::System::Byte _padding1[0x7];
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ComicDessert::DishAnchorGroup>* _DishGroups; // 0x80
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ComicDessert::AnchorBinding>* _Anchors; // 0x88
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::ComicDessert::AnchorIdentifier, ::UnityEngine::Transform*>* CGGGPPBMFID; // 0x90
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ComicDessert::AnchorIdentifier>* HOBFKNLEOOM; // 0x98
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ComicDessert::AnchorIdentifier>* INCLGFBADLA; // 0xA0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDEVICEVIEW_CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* GetAnchorAttachPoint(::RPG::Client::LittleGame::ComicDessert::AnchorIdentifier a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::AnchorIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDEVICEVIEW_GETANCHORATTACHPOINT_OFFSET))(this, a1);
		}

		::System::Void SetEffectVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDEVICEVIEW_SETEFFECTVISIBLE_OFFSET))(this, a1);
		}

		::System::Void SetBodyVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDEVICEVIEW_SETBODYVISIBLE_OFFSET))(this, a1);
		}

		::System::Void PlayUpgradeEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDEVICEVIEW_PLAYUPGRADEEFFECT_OFFSET))(this);
		}

		::System::Void StopUpgradeEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDEVICEVIEW_STOPUPGRADEEFFECT_OFFSET))(this);
		}

		::System::Void KEFADPFGJIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDEVICEVIEW_KEFADPFGJIE_OFFSET))(this);
		}

		::System::Void MIFMKHEJGAL(::RPG::Client::LittleGame::ComicDessert::AnchorIdentifier a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::AnchorIdentifier, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDEVICEVIEW_MIFMKHEJGAL_OFFSET))(this, a1, a2);
		}

		::System::Void AppendGlowRenderers(::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDEVICEVIEW_APPENDGLOWRENDERERS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LittleGame::ComicDessert::AnchorIdentifier>* ILKKPACDEFI()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LittleGame::ComicDessert::AnchorIdentifier>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDEVICEVIEW_ILKKPACDEFI_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LittleGame::ComicDessert::AnchorIdentifier>* MCGIABCNPLO()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LittleGame::ComicDessert::AnchorIdentifier>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDEVICEVIEW_MCGIABCNPLO_OFFSET))(this);
		}

	};
}
