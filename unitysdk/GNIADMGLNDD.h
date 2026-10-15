#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FHKIKPOPLPJ.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define GNIADMGLNDD_CTOR_OFFSET UNITYSDK_OFFSET(0x15B055D0)
#define GNIADMGLNDD_MGPLPPLEMPK_OFFSET UNITYSDK_OFFSET(0x15B05350)

inline static constexpr unsigned int GNIADMGLNDD_TypeDefinitionIndex = 57318;

	class GNIADMGLNDD : public ::FHKIKPOPLPJ
	{
	public:
		::System::String* BAHLDFMIJFG; // 0x20
		::RPG::GameCore::GameEntity* BBMMBAKDJBC; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIADMGLNDD_CTOR_OFFSET))(this);
		}

		::System::Boolean MGPLPPLEMPK(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GNIADMGLNDD_MGPLPPLEMPK_OFFSET))(this, a1);
		}

	};
