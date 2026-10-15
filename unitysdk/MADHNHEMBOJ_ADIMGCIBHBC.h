#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActionBarItemUIStyle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MADHNHEMBOJ_ADIMGCIBHBC_CTOR_OFFSET UNITYSDK_OFFSET(0xB840510)

inline static constexpr unsigned int MADHNHEMBOJ_ADIMGCIBHBC_TypeDefinitionIndex = 71203;

	class MADHNHEMBOJ_ADIMGCIBHBC : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 PECPBEOHOJC; // 0x10
		::RPG::Client::ActionBarItemUIStyle PPDLJLBALGE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MADHNHEMBOJ_ADIMGCIBHBC_CTOR_OFFSET))(this);
		}

	};
