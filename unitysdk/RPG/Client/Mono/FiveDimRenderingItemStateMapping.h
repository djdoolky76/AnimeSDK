#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client::Mono { class FiveDimRenderingItemStateMappingValue; }

#define RPG_CLIENT_MONO_FIVEDIMRENDERINGITEMSTATEMAPPING_CTOR_OFFSET UNITYSDK_OFFSET(0xD72CEC0)

namespace RPG::Client::Mono
{
	class FiveDimRenderingItemStateMapping : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::RPG::Client::Mono::FiveDimRenderingItemStateMappingValue*>* StateMapping; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO_FIVEDIMRENDERINGITEMSTATEMAPPING_CTOR_OFFSET))(this);
		}

	};
}
