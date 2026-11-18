#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole::Arcade::SnakeDemo { class DebugForSnake_JMOODOAFHFB; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ARCADE_SNAKEDEMO_DEBUGFORSNAKE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1F3679A0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_DEBUGFORSNAKE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1F367990)
#define MOLEMOLE_ARCADE_SNAKEDEMO_DEBUGFORSNAKE_GPAGOABIFFP_OFFSET UNITYSDK_OFFSET(0x1F367AF0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_DEBUGFORSNAKE_HBNLFNHMBHB_OFFSET UNITYSDK_OFFSET(0x1F367F30)
#define MOLEMOLE_ARCADE_SNAKEDEMO_DEBUGFORSNAKE_REFRESHDELAY_OFFSET UNITYSDK_OFFSET(0x1F367C40)
#define MOLEMOLE_ARCADE_SNAKEDEMO_DEBUGFORSNAKE_REFRESHENTITYMSG_OFFSET UNITYSDK_OFFSET(0x1F367CB0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_DEBUGFORSNAKE_REFRESHWORLDPASSTIME_OFFSET UNITYSDK_OFFSET(0x1F3679F0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_DEBUGFORSNAKE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F367DA0)

namespace MoleMole::Arcade::SnakeDemo
{
	inline static constexpr unsigned int DebugForSnake_TypeDefinitionIndex = 96597;

	class DebugForSnake : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MoleMole::Arcade::SnakeDemo::DebugForSnake** StaticGet__PHJGLHAAHOG_k__BackingField()
		{
			return (::MoleMole::Arcade::SnakeDemo::DebugForSnake**)Il2CppClass::FromTypeDefinitionIndex(DebugForSnake_TypeDefinitionIndex)->GetStaticField(0x52FB0);
		}
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* TeamValue; // 0x18
		::System::Single TeamRatio; // 0x20
		::System::Int32 HostTeamId; // 0x24
		::System::Collections::Generic::List_1<::System::Object*>* DJLOKMMLFJC; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_DEBUGFORSNAKE__CTOR_OFFSET))(this);
		}

		static ::MoleMole::Arcade::SnakeDemo::DebugForSnake* get_Instance()
		{
			return ((::MoleMole::Arcade::SnakeDemo::DebugForSnake*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_DEBUGFORSNAKE_GET_INSTANCE_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_DEBUGFORSNAKE_AWAKE_OFFSET))(this);
		}

		::System::Void RefreshWorldPassTime(::System::UInt32 BKLGNCBNEGM, ::System::Single JFJGJCCFPDA, ::System::Int32 LHLKBOKDKPB, ::System::Boolean OAMCPEJPHLP)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_DEBUGFORSNAKE_REFRESHWORLDPASSTIME_OFFSET))(this, BKLGNCBNEGM, JFJGJCCFPDA, LHLKBOKDKPB, OAMCPEJPHLP);
		}

		::System::Void RefreshDelay(::System::UInt32 BKLGNCBNEGM, ::System::Single AHPGLBKPJGD)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_DEBUGFORSNAKE_REFRESHDELAY_OFFSET))(this, BKLGNCBNEGM, AHPGLBKPJGD);
		}

		::System::Void RefreshEntityMsg(::System::UInt32 BKLGNCBNEGM, ::System::Int32 KMKBJKOEBMF, ::System::Single IAKPGBCAAKM)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_DEBUGFORSNAKE_REFRESHENTITYMSG_OFFSET))(this, BKLGNCBNEGM, KMKBJKOEBMF, IAKPGBCAAKM);
		}

		static ::System::Void HBNLFNHMBHB(::MoleMole::Arcade::SnakeDemo::DebugForSnake* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::MoleMole::Arcade::SnakeDemo::DebugForSnake*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_DEBUGFORSNAKE_HBNLFNHMBHB_OFFSET))(EGEGIMGMJHN);
		}

		::MoleMole::Arcade::SnakeDemo::DebugForSnake_JMOODOAFHFB* GPAGOABIFFP(::System::UInt32 BKLGNCBNEGM)
		{
			return ((::MoleMole::Arcade::SnakeDemo::DebugForSnake_JMOODOAFHFB*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_DEBUGFORSNAKE_GPAGOABIFFP_OFFSET))(this, BKLGNCBNEGM);
		}
	};
}
