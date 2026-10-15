#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class PossessionConfigRow; }
namespace System { class String; }

#define ADOJBOKNGMB_CTOR_OFFSET UNITYSDK_OFFSET(0xF890)

inline static constexpr unsigned int ADOJBOKNGMB_TypeDefinitionIndex = 69264;

	struct alignas(8) ADOJBOKNGMB
	{
		::System::String* BDACPPLKLGL; // 0x10
		::System::String* BAHLDFMIJFG; // 0x18
		::UnityEngine::Vector3 AIBGEDIGEOO; // 0x20
		::UnityEngine::Quaternion LOLLEGPLMOO; // 0x2C
		::UnityEngine::Vector3 ELHCMMCHDOB; // 0x3C
		::System::Void _ctor(::RPG::GameCore::PossessionConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PossessionConfigRow*))((::PBYTE)hIl2Cpp + ADOJBOKNGMB_CTOR_OFFSET))(this, a1);
		}

	};
