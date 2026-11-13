#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLGICBNPGOO.h"
#include "unitysdk/RPG/Client/BillboardShowType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Billboard { class BillboardDataProvider; }
namespace RPG::Client::Billboard { class BillboardIdentifier; }
namespace RPG::Client::Billboard { class BillboardNotifyParam; }
namespace RPG::GameCore { class FiveDimSetBillboardInfo; }
namespace RPG::GameCore { class LittleGameBillboardConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDABA10)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDAA350)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_GETATTACHTRANS_OFFSET UNITYSDK_OFFSET(0x1CDAB3E0)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_GETCURRENTDISTANCE_OFFSET UNITYSDK_OFFSET(0x1CDAB270)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1CDAB9F0)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_GET__DATAPROVIDER_OFFSET UNITYSDK_OFFSET(0x1CDAA890)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_HIDE_OFFSET UNITYSDK_OFFSET(0x1CDAA8E0)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1CDAB670)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_RESETFIVEDIMBILLBOARD_OFFSET UNITYSDK_OFFSET(0x1CDAAED0)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_SETFIVEDIMBILLBOARD_OFFSET UNITYSDK_OFFSET(0x1CDAAA20)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_SET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1CDABA00)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_SET__DATAPROVIDER_OFFSET UNITYSDK_OFFSET(0x1CDAB080)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_SHOW_OFFSET UNITYSDK_OFFSET(0x1CDAA7C0)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__GETBILLBOARDICONPATH_OFFSET UNITYSDK_OFFSET(0x1CDAB6D0)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__GETPLAYERTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1CDAB420)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__INITPARAM_OFFSET UNITYSDK_OFFSET(0x1CDAA4D0)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__ISICONPARAMVALID_OFFSET UNITYSDK_OFFSET(0x1CDAB860)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__ISMISSIONREPEATADD_OFFSET UNITYSDK_OFFSET(0x1CDAB930)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__TRYADDICON_OFFSET UNITYSDK_OFFSET(0x1CDAAC70)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__TRYREMOVEICON_OFFSET UNITYSDK_OFFSET(0x1CDAB0E0)
#define RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__TRYSETCURRENTFIRSTOVERRIDEICONPATH_OFFSET UNITYSDK_OFFSET(0x1CDAAE40)

namespace RPG::Client::Billboard
{
	inline static constexpr unsigned int LittleGameBillboardHost_TypeDefinitionIndex = 77314;

	class LittleGameBillboardHost : public ::System::Object
	{
	public:
		::RPG::Client::Billboard::BillboardDataProvider* _DataProviderOrigin; // 0x10
		::RPG::Client::Billboard::BillboardIdentifier* _Identifier_k__BackingField; // 0x18
		::UnityEngine::Transform* _AttachPoint; // 0x20
		::System::Collections::Generic::SortedList_2<::HLGICBNPGOO, ::System::UInt32>* _OverrideIconList; // 0x28
		::RPG::Client::Billboard::BillboardNotifyParam* _NotifyParam; // 0x30
		::RPG::GameCore::LittleGameBillboardConfig* _BillBoardConfig; // 0x38
		::System::Single _LevelUnitLength; // 0x40
		static ::RPG::Client::BillboardShowType* StaticGet__DefaultShowType()
		{
			return (::RPG::Client::BillboardShowType*)UnitySDK::FromName("RPG.Client.Billboard", "LittleGameBillboardHost")->GetStaticField(0x14A80);
		}

		::System::Void _ctor(::RPG::Client::Billboard::BillboardIdentifier* a1, ::RPG::GameCore::LittleGameBillboardConfig* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Billboard::BillboardIdentifier*, ::RPG::GameCore::LittleGameBillboardConfig*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_CCTOR_OFFSET))();
		}

		::System::Void Show(::UnityEngine::Transform* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_SHOW_OFFSET))(this, a1, a2);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_HIDE_OFFSET))(this);
		}

		::System::Void SetFiveDimBillboard(::RPG::GameCore::FiveDimSetBillboardInfo* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimSetBillboardInfo*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_SETFIVEDIMBILLBOARD_OFFSET))(this, a1, a2);
		}

		::System::Void ResetFiveDimBillboard(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_RESETFIVEDIMBILLBOARD_OFFSET))(this, a1, a2);
		}

		::System::Single GetCurrentDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_GETCURRENTDISTANCE_OFFSET))(this);
		}

		::UnityEngine::Transform* _GetPlayerTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__GETPLAYERTRANSFORM_OFFSET))(this);
		}

		::UnityEngine::Transform* GetAttachTrans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_GETATTACHTRANS_OFFSET))(this);
		}

		::System::Boolean IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_ISVISIBLE_OFFSET))(this);
		}

		::System::Void _InitParam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__INITPARAM_OFFSET))(this);
		}

		::System::Void _TrySetCurrentFirstOverrideIconPath(::RPG::Client::Billboard::BillboardDataProvider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Billboard::BillboardDataProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__TRYSETCURRENTFIRSTOVERRIDEICONPATH_OFFSET))(this, a1);
		}

		::System::String* _GetBillboardIconPath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__GETBILLBOARDICONPATH_OFFSET))(this, a1);
		}

		::System::Void _TryAddIcon(::HLGICBNPGOO a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLGICBNPGOO))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__TRYADDICON_OFFSET))(this, a1);
		}

		::System::Void _TryRemoveIcon(::HLGICBNPGOO a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLGICBNPGOO))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__TRYREMOVEICON_OFFSET))(this, a1);
		}

		::System::Boolean _IsIconParamValid(::HLGICBNPGOO a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HLGICBNPGOO))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__ISICONPARAMVALID_OFFSET))(this, a1);
		}

		::System::Boolean _IsMissionRepeatAdd(::HLGICBNPGOO a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HLGICBNPGOO))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST__ISMISSIONREPEATADD_OFFSET))(this, a1);
		}

		::RPG::Client::Billboard::BillboardIdentifier* get_Identifier()
		{
			return ((::RPG::Client::Billboard::BillboardIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::Void set_Identifier(::RPG::Client::Billboard::BillboardIdentifier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Billboard::BillboardIdentifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_SET_IDENTIFIER_OFFSET))(this, a1);
		}

		::RPG::Client::Billboard::BillboardDataProvider* get__DataProvider()
		{
			return ((::RPG::Client::Billboard::BillboardDataProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_GET__DATAPROVIDER_OFFSET))(this);
		}

		::System::Void set__DataProvider(::RPG::Client::Billboard::BillboardDataProvider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Billboard::BillboardDataProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_LITTLEGAMEBILLBOARDHOST_SET__DATAPROVIDER_OFFSET))(this, a1);
		}

	};
}
