#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI3DGame/MonoUI3DGameView.h"
#include "unitysdk/UnityEngine/Color.h"
class EMJIDLCDFMI;
class KHPOKIKCOFO;
class PLAGENLANML;
namespace System { class String; }

#define RPG_CLIENT_UI3DGAME_MONOPOLYGROUND_CLICK_OFFSET UNITYSDK_OFFSET(0xE357110)
#define RPG_CLIENT_UI3DGAME_MONOPOLYGROUND_CTOR_OFFSET UNITYSDK_OFFSET(0xE357370)
#define RPG_CLIENT_UI3DGAME_MONOPOLYGROUND_EODBFIJPFPK_OFFSET UNITYSDK_OFFSET(0xE356D00)
#define RPG_CLIENT_UI3DGAME_MONOPOLYGROUND_IAEKGMHHAAI_OFFSET UNITYSDK_OFFSET(0xE356BC0)
#define RPG_CLIENT_UI3DGAME_MONOPOLYGROUND_INITIALIZEVIEW_OFFSET UNITYSDK_OFFSET(0xE356820)
#define RPG_CLIENT_UI3DGAME_MONOPOLYGROUND_KCOLBAAPJFO_OFFSET UNITYSDK_OFFSET(0xE356F90)
#define RPG_CLIENT_UI3DGAME_MONOPOLYGROUND_SETICON_OFFSET UNITYSDK_OFFSET(0xE357040)
#define RPG_CLIENT_UI3DGAME_MONOPOLYGROUND_SETMATERIALCOLOR_OFFSET UNITYSDK_OFFSET(0xE356B00)

namespace RPG::Client::UI3DGame
{
	inline static constexpr unsigned int MonopolyGround_TypeDefinitionIndex = 75811;

	class MonopolyGround : public ::RPG::Client::UI3DGame::MonoUI3DGameView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYGROUND_CTOR_OFFSET))(this);
		}

		::System::Void InitializeView(::PLAGENLANML* a1, ::EMJIDLCDFMI* a2, ::KHPOKIKCOFO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::PLAGENLANML*, ::EMJIDLCDFMI*, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYGROUND_INITIALIZEVIEW_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IAEKGMHHAAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYGROUND_IAEKGMHHAAI_OFFSET))(this);
		}

		::System::Void SetIcon(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYGROUND_SETICON_OFFSET))(this, a1);
		}

		::System::Void EODBFIJPFPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYGROUND_EODBFIJPFPK_OFFSET))(this);
		}

		::System::Void KCOLBAAPJFO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYGROUND_KCOLBAAPJFO_OFFSET))(this);
		}

		::System::Void SetMaterialColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYGROUND_SETMATERIALCOLOR_OFFSET))(this, a1);
		}

		::System::Void Click()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYGROUND_CLICK_OFFSET))(this);
		}

	};
}
