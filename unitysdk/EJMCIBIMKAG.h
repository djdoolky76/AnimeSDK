#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FHKIKPOPLPJ.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class AnchorInfo; }

#define EJMCIBIMKAG_CTOR_OFFSET UNITYSDK_OFFSET(0x154ED660)
#define EJMCIBIMKAG_MGPLPPLEMPK_OFFSET UNITYSDK_OFFSET(0x154ED510)

	class EJMCIBIMKAG : public ::FHKIKPOPLPJ
	{
	public:
		::RPG::GameCore::AnchorInfo* MOGKHAKCONH; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMCIBIMKAG_CTOR_OFFSET))(this);
		}

		::System::Boolean MGPLPPLEMPK(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EJMCIBIMKAG_MGPLPPLEMPK_OFFSET))(this, a1);
		}

	};
