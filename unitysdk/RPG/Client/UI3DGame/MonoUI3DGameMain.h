#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class DJJKNHPLHDI;
class FDPALAEIHPB;
class HJNJHAECJHP;
namespace RPG::Client::UI3DGame { class MonopolyGameController; }
namespace System { class String; }

#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEMAIN_CTOR_OFFSET UNITYSDK_OFFSET(0xE34FBE0)
#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEMAIN_INITMONOPOLYGAME_OFFSET UNITYSDK_OFFSET(0xE34F410)
#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEMAIN_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE34F890)
#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEMAIN_UPDATE_OFFSET UNITYSDK_OFFSET(0xE34F830)
#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEMAIN__DESTORYGAMECONTEXT_OFFSET UNITYSDK_OFFSET(0xE34F8E0)
#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEMAIN__INITGAMECONTEXT_OFFSET UNITYSDK_OFFSET(0xE34F6E0)
#define RPG_CLIENT_UI3DGAME_MONOUI3DGAMEMAIN__STARTUPDATESYSTEM_OFFSET UNITYSDK_OFFSET(0xE34F750)

namespace RPG::Client::UI3DGame
{
	inline static constexpr unsigned int MonoUI3DGameMain_TypeDefinitionIndex = 75776;

	class MonoUI3DGameMain : public ::UnityEngine::MonoBehaviour
	{
	public:
		::FDPALAEIHPB* _Contexts; // 0x18
		::DJJKNHPLHDI* _UpdateSystems; // 0x20
		::HJNJHAECJHP* _GameController; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEMAIN_CTOR_OFFSET))(this);
		}

		::RPG::Client::UI3DGame::MonopolyGameController* InitMonopolyGame(::System::String* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::UI3DGame::MonopolyGameController*(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEMAIN_INITMONOPOLYGAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEMAIN_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEMAIN_ONDESTROY_OFFSET))(this);
		}

		::System::Void _InitGameContext(::HJNJHAECJHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJNJHAECJHP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEMAIN__INITGAMECONTEXT_OFFSET))(this, a1);
		}

		::System::Void _StartUpdateSystem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEMAIN__STARTUPDATESYSTEM_OFFSET))(this);
		}

		::System::Void _DestoryGameContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOUI3DGAMEMAIN__DESTORYGAMECONTEXT_OFFSET))(this);
		}

	};
}
