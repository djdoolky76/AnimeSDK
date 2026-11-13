#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNADKCFAIEB_LFLEPFGFFOO;
class DCGIDEKLGAJ;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CNADKCFAIEB_BOHEPMOAMIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1B1AFF50)

inline static constexpr unsigned int CNADKCFAIEB_BOHEPMOAMIN_TypeDefinitionIndex = 73548;

	class CNADKCFAIEB_BOHEPMOAMIN : public ::System::Object
	{
	public:
		::System::String* JNNKONJGGMF; // 0x10
		::CNADKCFAIEB_LFLEPFGFFOO* ALDGODODEGC; // 0x18
		::DCGIDEKLGAJ* JADKDJNDOJA; // 0x20
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x28
		::UnityEngine::Animation* KPKIECANFMN; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNADKCFAIEB_BOHEPMOAMIN_CTOR_OFFSET))(this);
		}

	};
