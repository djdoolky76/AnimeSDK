#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PhotoGraphTag.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class GameObject; }

#define DJOOMFGNEGK_CTOR_OFFSET UNITYSDK_OFFSET(0xF249620)

inline static constexpr unsigned int DJOOMFGNEGK_TypeDefinitionIndex = 60930;

	class DJOOMFGNEGK : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* OLPPHJJNMEA; // 0x10
		::RPG::Client::PhotoGraphTag NHALJPDONCP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJOOMFGNEGK_CTOR_OFFSET))(this);
		}

	};
