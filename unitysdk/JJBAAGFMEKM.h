#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class Airline; }

#define JJBAAGFMEKM_CTOR_OFFSET UNITYSDK_OFFSET(0x10D20)

inline static constexpr unsigned int JJBAAGFMEKM_TypeDefinitionIndex = 59778;

	struct alignas(8) JJBAAGFMEKM
	{
		::RPG::Client::Airline* BBLOHCHKFKD; // 0x10
		::UnityEngine::Vector3 JFAGECNFHJL; // 0x18
		::System::Void _ctor(::RPG::Client::Airline* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Airline*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JJBAAGFMEKM_CTOR_OFFSET))(this, a1, a2);
		}

	};
