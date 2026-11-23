#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MiHoYo::SDK { class Dll_BAA5A695EA842167; }
namespace System { class Action; }

#define MIHOYO_SDK_DLL_A6F12016847EE55E_OFFSET UNITYSDK_OFFSET(0x391BCF0)
#define MIHOYO_SDK_DLL_A9D864DB29A78E4B_OFFSET UNITYSDK_OFFSET(0x391BD90)
#define MIHOYO_SDK_DLL_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x391B7C0)
#define MIHOYO_SDK_DLL_ACA7A8587B118C2E_OFFSET UNITYSDK_OFFSET(0x391BB10)
#define MIHOYO_SDK_DLL_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x391B7D0)
#define MIHOYO_SDK_DLL_F1909C22AE359755_OFFSET UNITYSDK_OFFSET(0x391B930)
#define MIHOYO_SDK_DLL_F459A1CAE950E680_OFFSET UNITYSDK_OFFSET(0x391B660)
#define MIHOYO_SDK_DLL_F97D5274E9A1E510_OFFSET UNITYSDK_OFFSET(0x391BBB0)
#define MIHOYO_SDK_DLL_FA1248599945D681_OFFSET UNITYSDK_OFFSET(0x391BC50)
#define MIHOYO_SDK_DLL_FD5BF25B0222ED12_OFFSET UNITYSDK_OFFSET(0x391BA70)
#define MIHOYO_SDK_DLL_FEFE4369A0AB8C82_OFFSET UNITYSDK_OFFSET(0x391B9D0)
#define MIHOYO_SDK_DLL__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Dll_TypeDefinitionIndex = 12331;

	class Dll : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MiHoYo::SDK::Dll** StaticGet_EAE0569B007CD057()
		{
			return (::MiHoYo::SDK::Dll**)Il2CppClass::FromTypeDefinitionIndex(Dll_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Action* F6E6B6D0E53E2705; // 0x20
		::System::Action* B10302F100182094; // 0x28
		::System::Action* B092860C1BD511F8; // 0x30
		::System::Boolean escFromWin32; // 0x38
		::System::Byte _padding0[0x7];
		::MiHoYo::SDK::Dll_BAA5A695EA842167* EC57B134AA4935D7; // 0x40

		::System::Void ACA7A8587B118C2E(::System::Action* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DLL_ACA7A8587B118C2E_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void E02954280801633F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DLL_E02954280801633F_OFFSET))(this);
		}

		::System::Void A9D864DB29A78E4B(::System::Action* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DLL_A9D864DB29A78E4B_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DLL__CTOR_OFFSET))(this);
		}

		::System::Void FEFE4369A0AB8C82(::System::Action* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DLL_FEFE4369A0AB8C82_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void FD5BF25B0222ED12(::System::Action* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DLL_FD5BF25B0222ED12_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void A6F12016847EE55E(::System::Action* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DLL_A6F12016847EE55E_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void F1909C22AE359755(::MiHoYo::SDK::Dll_BAA5A695EA842167* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Dll_BAA5A695EA842167*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DLL_F1909C22AE359755_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DLL_AB36E0EE549986E5_OFFSET))(this);
		}

		static ::MiHoYo::SDK::Dll* F459A1CAE950E680()
		{
			return ((::MiHoYo::SDK::Dll*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_DLL_F459A1CAE950E680_OFFSET))();
		}

		::System::Void FA1248599945D681(::System::Action* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DLL_FA1248599945D681_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void F97D5274E9A1E510(::MiHoYo::SDK::Dll_BAA5A695EA842167* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Dll_BAA5A695EA842167*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DLL_F97D5274E9A1E510_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
