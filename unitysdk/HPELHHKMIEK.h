#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class GameObject; }

#define HPELHHKMIEK_CTOR_OFFSET UNITYSDK_OFFSET(0x16D66720)

inline static constexpr unsigned int HPELHHKMIEK_TypeDefinitionIndex = 58405;

	class HPELHHKMIEK : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* MPMOJCINGNK; // 0x10
		::System::Single LCJDBIIOKOP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPELHHKMIEK_CTOR_OFFSET))(this);
		}

	};
