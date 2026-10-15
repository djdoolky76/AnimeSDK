#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define KLKMCNOECAL_CTOR_OFFSET UNITYSDK_OFFSET(0xB52CBD0)

inline static constexpr unsigned int KLKMCNOECAL_TypeDefinitionIndex = 59297;

	class KLKMCNOECAL : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* IPJPFOHOCEC; // 0x10
		::UnityEngine::Object* LFEBAMMNAGH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLKMCNOECAL_CTOR_OFFSET))(this);
		}

	};
