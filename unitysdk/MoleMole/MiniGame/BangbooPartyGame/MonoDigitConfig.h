#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class FGCOIBFFCHB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONODIGITCONFIG_SETDIGITWITHLEADINGZERO_OFFSET UNITYSDK_OFFSET(0x135A5650)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONODIGITCONFIG_SETDIGIT_OFFSET UNITYSDK_OFFSET(0x135A54A0)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONODIGITCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x135A5770)

namespace MoleMole::MiniGame::BangbooPartyGame
{
	inline static constexpr unsigned int MonoDigitConfig_TypeDefinitionIndex = 46210;

	class MonoDigitConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::Foundation::AssetPath>* gold; // 0x18
		::System::Collections::Generic::List_1<::Foundation::AssetPath>* silver; // 0x20
		::System::Collections::Generic::List_1<::Foundation::AssetPath>* time; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONODIGITCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void SetDigit(::FGCOIBFFCHB* FFCICNJEGJK, ::FGCOIBFFCHB* EECMMAPIFFB, ::System::Int32 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::FGCOIBFFCHB*, ::FGCOIBFFCHB*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONODIGITCONFIG_SETDIGIT_OFFSET))(this, FFCICNJEGJK, EECMMAPIFFB, EGEGIMGMJHN);
		}

		::System::Void SetDigitWithLeadingZero(::FGCOIBFFCHB* FFCICNJEGJK, ::FGCOIBFFCHB* EECMMAPIFFB, ::System::Int32 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::FGCOIBFFCHB*, ::FGCOIBFFCHB*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONODIGITCONFIG_SETDIGITWITHLEADINGZERO_OFFSET))(this, FFCICNJEGJK, EECMMAPIFFB, EGEGIMGMJHN);
		}
	};
}
