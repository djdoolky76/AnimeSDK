#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/B8AC70DD96553B07.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class AkAudioListener;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKOBSTRUCTIONOCCLUSION_A218EAA6B15B0407_OFFSET UNITYSDK_OFFSET(0x291B2C0)
#define AKOBSTRUCTIONOCCLUSION_AB5E7E27402434A8_OFFSET UNITYSDK_OFFSET(0x291B270)
#define AKOBSTRUCTIONOCCLUSION_ADB2E03E4248D538_OFFSET UNITYSDK_OFFSET(0x291AE50)
#define AKOBSTRUCTIONOCCLUSION_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x291B630)
#define AKOBSTRUCTIONOCCLUSION__CTOR_OFFSET UNITYSDK_OFFSET(0x291B970)

inline static constexpr unsigned int AkObstructionOcclusion_TypeDefinitionIndex = 20479;

class AkObstructionOcclusion : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Collections::Generic::List_1<::AkAudioListener*>* BE80E65D56337496; // 0x20
	::System::Collections::Generic::List_1<::AkAudioListener*>* F46BAB9640995CC8; // 0x28
	::System::Collections::Generic::Dictionary_2<::AkAudioListener*, ::System::Object*>* F832F5C234EBE712; // 0x30
	::System::Single B9ABC11B1B0B33A3; // 0x38
	::System::Single fadeTime; // 0x3C
	::UnityEngine::B8AC70DD96553B07 LayerMask; // 0x40
	::System::Single maxDistance; // 0x44
	::System::Single refreshInterval; // 0x48
	::System::Single B34ED01DA9BA10E7; // 0x4C

	::System::Void ADB2E03E4248D538()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSION_ADB2E03E4248D538_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSION__CTOR_OFFSET))(this);
	}

	::System::Void AB5E7E27402434A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSION_AB5E7E27402434A8_OFFSET))(this);
	}

	::System::Void A218EAA6B15B0407()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSION_A218EAA6B15B0407_OFFSET))(this);
	}

	::System::Void E02954280801633F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBSTRUCTIONOCCLUSION_E02954280801633F_OFFSET))(this);
	}
};
