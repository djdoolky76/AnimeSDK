#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define GDLANOHKANB_MENFMLGGFGK_CTOR_OFFSET UNITYSDK_OFFSET(0x159A43F0)

inline static constexpr unsigned int GDLANOHKANB_MENFMLGGFGK_TypeDefinitionIndex = 47923;

	class GDLANOHKANB_MENFMLGGFGK : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* OLPPHJJNMEA; // 0x10
		::System::String* EALNBEBALJM; // 0x18
		::System::String* IEMJLAKHBJJ; // 0x20
		::UnityEngine::Vector3 AANHLKFFGFE; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDLANOHKANB_MENFMLGGFGK_CTOR_OFFSET))(this);
		}

	};
