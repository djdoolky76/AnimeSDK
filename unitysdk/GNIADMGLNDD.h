#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FHKIKPOPLPJ.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define GNIADMGLNDD_CTOR_OFFSET UNITYSDK_OFFSET(0x15B111D0)
#define GNIADMGLNDD_MGPLPPLEMPK_OFFSET UNITYSDK_OFFSET(0x15B10F60)

	class GNIADMGLNDD : public ::FHKIKPOPLPJ
	{
	public:
		::RPG::GameCore::GameEntity* BBMMBAKDJBC; // 0x20
		::System::String* BAHLDFMIJFG; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIADMGLNDD_CTOR_OFFSET))(this);
		}

		::System::Boolean MGPLPPLEMPK(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GNIADMGLNDD_MGPLPPLEMPK_OFFSET))(this, a1);
		}

	};
