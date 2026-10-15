#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/CommandRobotPuzzleBlockType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/DAFINEMBGOK.h"
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBLOCK_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0xDC88230)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBLOCK_CCTOR_OFFSET UNITYSDK_OFFSET(0xDC884C0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBLOCK_CTOR_OFFSET UNITYSDK_OFFSET(0xDC884B0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBLOCK_EEPEIGJBCJH_OFFSET UNITYSDK_OFFSET(0xDC87E60)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBLOCK_FMPJPKANFNJ_OFFSET UNITYSDK_OFFSET(0xDC88440)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBLOCK_JEJPODLAHDC_OFFSET UNITYSDK_OFFSET(0xDC87F20)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBLOCK_ONBLOCKENTER_OFFSET UNITYSDK_OFFSET(0xDC87A50)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBLOCK_ONBLOCKEXIT_OFFSET UNITYSDK_OFFSET(0xDC87FF0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBLOCK_ONBLOCKINIT_OFFSET UNITYSDK_OFFSET(0xDC88300)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBLOCK_ONBLOCKRESET_OFFSET UNITYSDK_OFFSET(0xDC880F0)

namespace RPG::Client::Prop
{
	class CommandRobotPuzzleBlock : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector2Int Position; // 0x18
		::RPG::Client::Prop::CommandRobotPuzzleBlockType BlockType; // 0x20
		::System::Byte _padding0[0x4];
		::UnityEngine::Animator* KELPNPDJHEF; // 0x28
		::UnityEngine::Animator* HCAGKLHBNOL; // 0x30
		static ::System::Int32* StaticGet_NIJILEALPKE()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "CommandRobotPuzzleBlock")->GetStaticField(0x122D0);
		}

		static ::System::Int32* StaticGet_BMBMCGOHFNC()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "CommandRobotPuzzleBlock")->GetStaticField(0x122D4);
		}

		static ::System::Int32* StaticGet_DCJAHAPDJOH()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "CommandRobotPuzzleBlock")->GetStaticField(0x122D8);
		}

		static ::System::Int32* StaticGet_GALMJPMAIAD()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "CommandRobotPuzzleBlock")->GetStaticField(0x122DC);
		}

		static ::System::Int32* StaticGet_NOGGBMBJEJB()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "CommandRobotPuzzleBlock")->GetStaticField(0x122E0);
		}

		static ::System::Int32* StaticGet_KOIADNBGOEE()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "CommandRobotPuzzleBlock")->GetStaticField(0x122E4);
		}

		// static const ::System::String* IIABNDIFJOI; // 0x0
		// static const ::System::String* MINEFEJMIOP; // 0x0
		// static const ::System::String* KFBCFOPJENN; // 0x0
		// static const ::System::String* HBAMHJGOMBB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBLOCK_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBLOCK_CCTOR_OFFSET))();
		}

		::System::Void OnBlockEnter(::DAFINEMBGOK a1)
		{
			return ((::System::Void(*)(::PVOID, ::DAFINEMBGOK))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBLOCK_ONBLOCKENTER_OFFSET))(this, a1);
		}

		::System::Void OnBlockExit(::DAFINEMBGOK a1)
		{
			return ((::System::Void(*)(::PVOID, ::DAFINEMBGOK))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBLOCK_ONBLOCKEXIT_OFFSET))(this, a1);
		}

		::System::Void OnBlockReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBLOCK_ONBLOCKRESET_OFFSET))(this);
		}

		::System::Void OnBlockInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBLOCK_ONBLOCKINIT_OFFSET))(this);
		}

		::System::Void BIOBBNGDGDF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBLOCK_BIOBBNGDGDF_OFFSET))(this, a1);
		}

		::System::Void EEPEIGJBCJH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBLOCK_EEPEIGJBCJH_OFFSET))(this, a1);
		}

		::System::Void JEJPODLAHDC(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBLOCK_JEJPODLAHDC_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Animator* FMPJPKANFNJ()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBLOCK_FMPJPKANFNJ_OFFSET))(this);
		}

	};
}
