#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LittleGameSandboxStreamingConfig; }
namespace System { class String; }

#define NPPNOGNDFMJ___C__DISPLAYCLASS82_0_CTOR_OFFSET UNITYSDK_OFFSET(0x19D189B0)
#define NPPNOGNDFMJ___C__DISPLAYCLASS82_0___APPLYRESOURCEPLATFORMOPERATIONS_B__0_OFFSET UNITYSDK_OFFSET(0x19D1D380)
#define NPPNOGNDFMJ___C__DISPLAYCLASS82_0___APPLYRESOURCEPLATFORMOPERATIONS_B__1_OFFSET UNITYSDK_OFFSET(0x19D1D5F0)

inline static constexpr unsigned int NPPNOGNDFMJ___c__DisplayClass82_0_TypeDefinitionIndex = 61885;

	class NPPNOGNDFMJ___c__DisplayClass82_0 : public ::System::Object
	{
	public:
		::System::String* sourceName; // 0x10
		::RPG::GameCore::GameEntity* ownerEntity; // 0x18
		::RPG::GameCore::LittleGameSandboxStreamingConfig* streaming; // 0x20
		::UnityEngine::Vector3 targetPosition; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS82_0_CTOR_OFFSET))(this);
		}

		::System::Void __ApplyResourcePlatformOperations_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS82_0___APPLYRESOURCEPLATFORMOPERATIONS_B__0_OFFSET))(this);
		}

		::System::Void __ApplyResourcePlatformOperations_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS82_0___APPLYRESOURCEPLATFORMOPERATIONS_B__1_OFFSET))(this);
		}

	};
