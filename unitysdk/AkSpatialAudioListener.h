#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class AkAudioListener;
class AkSpatialAudioListener_A78D7BBCC8A6A5D4;

#define AKSPATIALAUDIOLISTENER_A28D6A0C3E793E7D_OFFSET UNITYSDK_OFFSET(0x29240F0)
#define AKSPATIALAUDIOLISTENER_A310ACAAD571A42B_OFFSET UNITYSDK_OFFSET(0x2924410)
#define AKSPATIALAUDIOLISTENER_ADFB5AD3C731C56C_OFFSET UNITYSDK_OFFSET(0x29243C0)
#define AKSPATIALAUDIOLISTENER_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x29241D0)
#define AKSPATIALAUDIOLISTENER_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x29240A0)
#define AKSPATIALAUDIOLISTENER__CCTOR_OFFSET UNITYSDK_OFFSET(0x29242E0)
#define AKSPATIALAUDIOLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

inline static constexpr unsigned int AkSpatialAudioListener_TypeDefinitionIndex = 20491;

class AkSpatialAudioListener : public ::UnityEngine::MonoBehaviour
{
public:
	static ::AkSpatialAudioListener** StaticGet_F68D23BE68AF5FE7()
	{
		return (::AkSpatialAudioListener**)Il2CppClass::FromTypeDefinitionIndex(AkSpatialAudioListener_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::AkSpatialAudioListener_A78D7BBCC8A6A5D4** StaticGet_A25A2CA17B56DC60()
	{
		return (::AkSpatialAudioListener_A78D7BBCC8A6A5D4**)Il2CppClass::FromTypeDefinitionIndex(AkSpatialAudioListener_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	::AkAudioListener* A57FEABF7303699E; // 0x20

	static ::AkSpatialAudioListener_A78D7BBCC8A6A5D4* ADFB5AD3C731C56C()
	{
		return ((::AkSpatialAudioListener_A78D7BBCC8A6A5D4*(*)())((::PBYTE)hIl2Cpp + AKSPATIALAUDIOLISTENER_ADFB5AD3C731C56C_OFFSET))();
	}

	::System::Void BF13C91AD80643D2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSPATIALAUDIOLISTENER_BF13C91AD80643D2_OFFSET))(this);
	}

	::System::Void A28D6A0C3E793E7D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSPATIALAUDIOLISTENER_A28D6A0C3E793E7D_OFFSET))(this);
	}

	::System::Void FDBCDBBFE02CD51A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSPATIALAUDIOLISTENER_FDBCDBBFE02CD51A_OFFSET))(this);
	}

	static ::AkAudioListener* A310ACAAD571A42B()
	{
		return ((::AkAudioListener*(*)())((::PBYTE)hIl2Cpp + AKSPATIALAUDIOLISTENER_A310ACAAD571A42B_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSPATIALAUDIOLISTENER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKSPATIALAUDIOLISTENER__CCTOR_OFFSET))();
	}
};
