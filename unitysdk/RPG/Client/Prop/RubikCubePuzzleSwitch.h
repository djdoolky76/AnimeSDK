#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/RubikCubeGroup.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class BKDAGBGKDKA;
namespace RPG::Client { class MonoTriggerRegion; }
namespace RPG::Client::Prop { class RubikCubePuzzleCube; }
namespace RPG::Client::Prop { class RubikCubePuzzleSwitchData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_AAKDGCAPKKB_OFFSET UNITYSDK_OFFSET(0xDDAB120)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_CTOR_OFFSET UNITYSDK_OFFSET(0xDDAB3C0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDDAA1D0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_DOROTATEFINISH_OFFSET UNITYSDK_OFFSET(0xDDA9130)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_FKINABCACNK_OFFSET UNITYSDK_OFFSET(0xDDAA730)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_GET_ISENABLED_OFFSET UNITYSDK_OFFSET(0xDDAB3B0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_IKPGIEFNMOP_OFFSET UNITYSDK_OFFSET(0xDDAA860)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_INITSWITCH_OFFSET UNITYSDK_OFFSET(0xDDAA210)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_MEJPCDCODCM_OFFSET UNITYSDK_OFFSET(0xDDAB020)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_NDPMAPIOPMA_OFFSET UNITYSDK_OFFSET(0xDDAABA0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_SETENABLE_OFFSET UNITYSDK_OFFSET(0xDDA8340)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_SETSELECT_OFFSET UNITYSDK_OFFSET(0xDDAAFD0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_UPDATE_OFFSET UNITYSDK_OFFSET(0xDDAAE40)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RubikCubePuzzleSwitch_TypeDefinitionIndex = 78840;

	class RubikCubePuzzleSwitch : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Material* SwitchNormal; // 0x18
		::UnityEngine::Material* SwitchSelect; // 0x20
		::RPG::GameCore::OptionTriggerInfo* RotateOption; // 0x28
		::RPG::Client::Prop::RubikCubeGroup LEOHPLBNPOB; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::Client::Prop::RubikCubePuzzleCube* AMNCFPIKELK; // 0x38
		::BKDAGBGKDKA* GALAHGAJODG; // 0x40
		::RPG::Client::MonoTriggerRegion* BKNPJHNHIOG; // 0x48
		::System::Boolean ACAPCHBDIBF; // 0x50
		::System::Byte _padding1[0x7];
		::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x58
		::System::String* IFDOLFKAOLA; // 0x60
		static ::System::Int32* StaticGet_BNCPBBHOOKB()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "RubikCubePuzzleSwitch")->GetStaticField(0x12400);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_DISPOSE_OFFSET))(this);
		}

		::System::Void InitSwitch(::RPG::GameCore::GameEntity* a1, ::RPG::Client::Prop::RubikCubePuzzleSwitchData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::Prop::RubikCubePuzzleSwitchData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_INITSWITCH_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MonoTriggerRegion* FKINABCACNK(::UnityEngine::Collider* a1)
		{
			return ((::RPG::Client::MonoTriggerRegion*(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_FKINABCACNK_OFFSET))(this, a1);
		}

		::System::Void IKPGIEFNMOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_IKPGIEFNMOP_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_UPDATE_OFFSET))(this);
		}

		::System::Void SetEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_SETENABLE_OFFSET))(this, a1);
		}

		::System::Void SetSelect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_SETSELECT_OFFSET))(this, a1);
		}

		::System::Void DoRotateFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_DOROTATEFINISH_OFFSET))(this);
		}

		::System::Void AAKDGCAPKKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_AAKDGCAPKKB_OFFSET))(this);
		}

		::System::Void NDPMAPIOPMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_NDPMAPIOPMA_OFFSET))(this);
		}

		::System::Void MEJPCDCODCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_MEJPCDCODCM_OFFSET))(this);
		}

		::System::Boolean get_IsEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLESWITCH_GET_ISENABLED_OFFSET))(this);
		}

	};
}
