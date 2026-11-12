#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class GameObject; }

#define RTS_NEWSYNTAXE_CTOR_OFFSET UNITYSDK_OFFSET(0x1759C290)
#define RTS_NEWSYNTAXE_RESTECOLOR_OFFSET UNITYSDK_OFFSET(0x1759C1A0)
#define RTS_NEWSYNTAXE_START_OFFSET UNITYSDK_OFFSET(0x1759BB90)
#define RTS_NEWSYNTAXE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1759BBA0)

inline static constexpr unsigned int RTS_NewSyntaxe_TypeDefinitionIndex = 41217;

	class RTS_NewSyntaxe : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* cube; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RTS_NEWSYNTAXE_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RTS_NEWSYNTAXE_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RTS_NEWSYNTAXE_UPDATE_OFFSET))(this);
		}

		::System::Void ResteColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RTS_NEWSYNTAXE_RESTECOLOR_OFFSET))(this);
		}

	};
