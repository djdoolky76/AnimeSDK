#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class HPHANBGPCFH;
namespace RPG::Client { class MonoTriggerRegion; }
namespace RPG::Client::Prop { class LaserTurnablePuzzleBoard; }
namespace RPG::Client::Prop { class LaserTurnableSelectParamData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace RPG::GameCore { class PropOptionTrigger_ButtonParam; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_AAKDGCAPKKB_OFFSET UNITYSDK_OFFSET(0xDD1E5A0)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_CNAOGMHIALF_OFFSET UNITYSDK_OFFSET(0xDD1EAA0)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_CTOR_OFFSET UNITYSDK_OFFSET(0xDD1F1A0)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDD1E120)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_DNIALAJAJGN_OFFSET UNITYSDK_OFFSET(0xDD1EB90)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_DOROTATEFINISH_OFFSET UNITYSDK_OFFSET(0xDD1D4C0)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_FEHBELCJBBF_OFFSET UNITYSDK_OFFSET(0xDD1EBF0)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_FKINABCACNK_OFFSET UNITYSDK_OFFSET(0xDD1E160)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_FMMJFCOIHEJ_OFFSET UNITYSDK_OFFSET(0xDD1ECE0)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_GOKGMHCBOOC_OFFSET UNITYSDK_OFFSET(0xDD1E8B0)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_HDILBIAJLEO_OFFSET UNITYSDK_OFFSET(0xDD1E290)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_INITSWITCH_OFFSET UNITYSDK_OFFSET(0xDD1A540)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_MEJPCDCODCM_OFFSET UNITYSDK_OFFSET(0xDD1E4F0)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_NDPMAPIOPMA_OFFSET UNITYSDK_OFFSET(0xDD1E760)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_UPDATE_OFFSET UNITYSDK_OFFSET(0xDD1E360)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH__INITSWITCH_B__1_0_OFFSET UNITYSDK_OFFSET(0xDD1F1E0)
#define RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH__ONROTATESELECTCLICK_B__11_0_OFFSET UNITYSDK_OFFSET(0xDD1F200)

namespace RPG::Client::Prop
{
	class LaserTurnablePuzzleSwitch : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::GameCore::OptionTriggerInfo* StartGame; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::Prop::LaserTurnableSelectParamData*>* RotateParam; // 0x20
		::RPG::GameCore::OptionTriggerInfo* LeaveGame; // 0x28
		::RPG::GameCore::PropOptionTrigger_ButtonParam* EDNNMHBJOBK; // 0x30
		::System::String* EnterTriggerCustomString; // 0x38
		::System::String* LeaveTriggerCustomString; // 0x40
		::System::Boolean SetFragmentSelectOnEnterTrigger; // 0x48
		::System::Byte _padding0[0x7];
		::RPG::Client::Prop::LaserTurnablePuzzleBoard* AGAHPOHHGMP; // 0x50
		::RPG::Client::MonoTriggerRegion* BKNPJHNHIOG; // 0x58
		::HPHANBGPCFH* GALAHGAJODG; // 0x60
		::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x68
		::UnityEngine::Animator* APPGGMLEPLN; // 0x70
		::System::Action* JCGFOCCPHEH; // 0x78
		::System::Int32 JMNBEELOLGF; // 0x80
		static ::System::Int32* StaticGet_BNCPBBHOOKB()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "LaserTurnablePuzzleSwitch")->GetStaticField(0x13510);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_DISPOSE_OFFSET))(this);
		}

		::System::Void InitSwitch(::RPG::GameCore::GameEntity* a1, ::RPG::Client::Prop::LaserTurnablePuzzleBoard* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::Prop::LaserTurnablePuzzleBoard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_INITSWITCH_OFFSET))(this, a1, a2);
		}

		::System::Boolean HDILBIAJLEO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_HDILBIAJLEO_OFFSET))(this);
		}

		::RPG::Client::MonoTriggerRegion* FKINABCACNK(::UnityEngine::Collider* a1)
		{
			return ((::RPG::Client::MonoTriggerRegion*(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_FKINABCACNK_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_UPDATE_OFFSET))(this);
		}

		::System::Void DoRotateFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_DOROTATEFINISH_OFFSET))(this);
		}

		::System::Void AAKDGCAPKKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_AAKDGCAPKKB_OFFSET))(this);
		}

		::System::Void NDPMAPIOPMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_NDPMAPIOPMA_OFFSET))(this);
		}

		::System::Void MEJPCDCODCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_MEJPCDCODCM_OFFSET))(this);
		}

		::System::Void DNIALAJAJGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_DNIALAJAJGN_OFFSET))(this);
		}

		::System::Void FEHBELCJBBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_FEHBELCJBBF_OFFSET))(this);
		}

		::System::Void FMMJFCOIHEJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_FMMJFCOIHEJ_OFFSET))(this, a1);
		}

		::System::Void GOKGMHCBOOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_GOKGMHCBOOC_OFFSET))(this);
		}

		::System::Void CNAOGMHIALF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH_CNAOGMHIALF_OFFSET))(this);
		}

		::System::Void _InitSwitch_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH__INITSWITCH_B__1_0_OFFSET))(this);
		}

		::System::Void _OnRotateSelectClick_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLEPUZZLESWITCH__ONROTATESELECTCLICK_B__11_0_OFFSET))(this);
		}

	};
}
