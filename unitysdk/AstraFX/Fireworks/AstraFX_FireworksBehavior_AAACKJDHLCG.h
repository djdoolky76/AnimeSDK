#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace AstraFX::Fireworks { class FireworkType; }

#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_AAACKJDHLCG_CTOR_OFFSET UNITYSDK_OFFSET(0x16A29A60)

namespace AstraFX::Fireworks
{
	inline static constexpr unsigned int AstraFX_FireworksBehavior_AAACKJDHLCG_TypeDefinitionIndex = 50091;

	class AstraFX_FireworksBehavior_AAACKJDHLCG : public ::System::Object
	{
	public:
		::AstraFX::Fireworks::FireworkType* HGNAACJNIPH; // 0x10
		::System::Int32 EAFOPCOOJDA; // 0x18
		::UnityEngine::Vector3 FILFKDALEPE; // 0x1C
		::System::Single FAHLBOLIGNH; // 0x28
		::System::Int32 AAEHGBPKDPK; // 0x2C
		::UnityEngine::Vector3 JHOGJELLFPF; // 0x30
		::System::Single ACHAOEPNEBC; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_AAACKJDHLCG_CTOR_OFFSET))(this);
		}

	};
}
