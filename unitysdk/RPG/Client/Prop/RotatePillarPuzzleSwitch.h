#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class NPJIHLMFFGG;
namespace RPG::Client { class MonoTriggerRegion; }
namespace RPG::Client::Prop { class RotatePillarPuzzlePillar; }
namespace RPG::Client::Prop { class RotatePillarPuzzleSwitchData; }
namespace RPG::Client::Prop { class RotateSelectParamData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace RPG::GameCore { class PropOptionTrigger_ButtonParam; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_AAKDGCAPKKB_OFFSET UNITYSDK_OFFSET(0xDD9B040)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_CNAOGMHIALF_OFFSET UNITYSDK_OFFSET(0xDD9B680)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_CTOR_OFFSET UNITYSDK_OFFSET(0xDD9BDD0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_DISABLESWITCH_OFFSET UNITYSDK_OFFSET(0xDD951B0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDD9AA90)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_DNIALAJAJGN_OFFSET UNITYSDK_OFFSET(0xDD9B770)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_DOROTATEFINISH_OFFSET UNITYSDK_OFFSET(0xDD9A090)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_FEHBELCJBBF_OFFSET UNITYSDK_OFFSET(0xDD9B7D0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_FKINABCACNK_OFFSET UNITYSDK_OFFSET(0xDD9AAD0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_FMMJFCOIHEJ_OFFSET UNITYSDK_OFFSET(0xDD9B8D0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_GOKGMHCBOOC_OFFSET UNITYSDK_OFFSET(0xDD9B490)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_HDILBIAJLEO_OFFSET UNITYSDK_OFFSET(0xDD9ACD0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_INITSWITCH_OFFSET UNITYSDK_OFFSET(0xDD927C0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_MEJPCDCODCM_OFFSET UNITYSDK_OFFSET(0xDD9AF30)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_NDPMAPIOPMA_OFFSET UNITYSDK_OFFSET(0xDD9B2B0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_UPDATE_OFFSET UNITYSDK_OFFSET(0xDD9ADA0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH__INITSWITCH_B__1_0_OFFSET UNITYSDK_OFFSET(0xDD9BE10)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH__ONROTATESELECTCLICK_B__12_0_OFFSET UNITYSDK_OFFSET(0xDD9BE30)

namespace RPG::Client::Prop
{
	class RotatePillarPuzzleSwitch : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::GameCore::OptionTriggerInfo* RotateOptionInfo; // 0x18
		::RPG::GameCore::OptionTriggerInfo* StartGame; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::Prop::RotateSelectParamData*>* RotateParam; // 0x28
		::RPG::GameCore::OptionTriggerInfo* LeaveGame; // 0x30
		::RPG::GameCore::PropOptionTrigger_ButtonParam* EDNNMHBJOBK; // 0x38
		::System::String* EnterTriggerCustomString; // 0x40
		::System::String* LeaveTriggerCustomString; // 0x48
		::System::Boolean SetFragmentSelectOnEnterTrigger; // 0x50
		::System::Byte _padding0[0x7];
		::RPG::Client::Prop::RotatePillarPuzzlePillar* MHJDDCJLBKB; // 0x58
		::RPG::Client::MonoTriggerRegion* BKNPJHNHIOG; // 0x60
		::NPJIHLMFFGG* GALAHGAJODG; // 0x68
		::RPG::Client::Prop::RotatePillarPuzzleSwitchData* APPIHABBCGK; // 0x70
		::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x78
		::UnityEngine::Animator* APPGGMLEPLN; // 0x80
		::System::Action* JCGFOCCPHEH; // 0x88
		::System::Int32 JMNBEELOLGF; // 0x90
		static ::System::Int32* StaticGet_BNCPBBHOOKB()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "RotatePillarPuzzleSwitch")->GetStaticField(0x14180);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_DISPOSE_OFFSET))(this);
		}

		::System::Void InitSwitch(::RPG::GameCore::GameEntity* a1, ::RPG::Client::Prop::RotatePillarPuzzleSwitchData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::Prop::RotatePillarPuzzleSwitchData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_INITSWITCH_OFFSET))(this, a1, a2);
		}

		::System::Void DisableSwitch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_DISABLESWITCH_OFFSET))(this);
		}

		::System::Boolean HDILBIAJLEO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_HDILBIAJLEO_OFFSET))(this);
		}

		::RPG::Client::MonoTriggerRegion* FKINABCACNK(::UnityEngine::Collider* a1)
		{
			return ((::RPG::Client::MonoTriggerRegion*(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_FKINABCACNK_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_UPDATE_OFFSET))(this);
		}

		::System::Void DoRotateFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_DOROTATEFINISH_OFFSET))(this);
		}

		::System::Void AAKDGCAPKKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_AAKDGCAPKKB_OFFSET))(this);
		}

		::System::Void NDPMAPIOPMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_NDPMAPIOPMA_OFFSET))(this);
		}

		::System::Void MEJPCDCODCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_MEJPCDCODCM_OFFSET))(this);
		}

		::System::Void DNIALAJAJGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_DNIALAJAJGN_OFFSET))(this);
		}

		::System::Void FEHBELCJBBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_FEHBELCJBBF_OFFSET))(this);
		}

		::System::Void FMMJFCOIHEJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_FMMJFCOIHEJ_OFFSET))(this, a1);
		}

		::System::Void GOKGMHCBOOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_GOKGMHCBOOC_OFFSET))(this);
		}

		::System::Void CNAOGMHIALF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH_CNAOGMHIALF_OFFSET))(this);
		}

		::System::Void _InitSwitch_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH__INITSWITCH_B__1_0_OFFSET))(this);
		}

		::System::Void _OnRotateSelectClick_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLESWITCH__ONROTATESELECTCLICK_B__12_0_OFFSET))(this);
		}

	};
}
