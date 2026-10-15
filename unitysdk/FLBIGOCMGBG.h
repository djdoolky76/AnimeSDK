#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

inline static constexpr unsigned int FLBIGOCMGBG_TypeDefinitionIndex = 60148;

	struct alignas(8) FLBIGOCMGBG
	{
		::System::String* GFNAPNFFGPJ; // 0x10
		::System::String* BDACPPLKLGL; // 0x18
		::System::String* HFLDHJHJNCF; // 0x20
		::UnityEngine::Vector3 CGLNAJDDGJH; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::GameCore::GameEntity* PAGLLPFNJED; // 0x38
	};
