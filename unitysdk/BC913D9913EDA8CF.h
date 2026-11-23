#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/GamepadState.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class B61481FE254BA0AA;
namespace ABC::UI { class MonoUIAutoView; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::InputSystem { class Gamepad; }

#define BC913D9913EDA8CF_A12C5F3B91715373_OFFSET UNITYSDK_OFFSET(0x1822B20)
#define BC913D9913EDA8CF_A14A07A8290F1757_OFFSET UNITYSDK_OFFSET(0x1822A50)
#define BC913D9913EDA8CF_A3C5476AFE78F9AB_OFFSET UNITYSDK_OFFSET(0x1823270)
#define BC913D9913EDA8CF_A765A1D14770A303_OFFSET UNITYSDK_OFFSET(0x18229F0)
#define BC913D9913EDA8CF_B61B8C5130137967_OFFSET UNITYSDK_OFFSET(0x1823140)
#define BC913D9913EDA8CF_F77C376165DED7C0_OFFSET UNITYSDK_OFFSET(0x1822EE0)
#define BC913D9913EDA8CF_FF5FC32B668FC840_OFFSET UNITYSDK_OFFSET(0x18231F0)
#define BC913D9913EDA8CF__CTOR_OFFSET UNITYSDK_OFFSET(0x1823390)

inline static constexpr unsigned int BC913D9913EDA8CF_TypeDefinitionIndex = 1157;

class BC913D9913EDA8CF : public ::System::Object
{
public:
	::System::Int32 EE6B7700D398BA48; // 0x10
	::UnityEngine::Vector2 A630E3E9813A1065; // 0x14
	::System::Byte _padding0[0x4];
	::UnityEngine::Transform* B897F47E394908CC; // 0x20
	::System::Nullable_1<::System::Int32> F085BBE959D9ED38; // 0x28
	::System::Single A5AF7D5F921F3065; // 0x30
	::System::Byte _padding1[0x4];
	::Il2CppArray<::UnityEngine::Vector3>* E1B97095F58F8448; // 0x38
	::UnityEngine::Animator* A6E0C410734A354A; // 0x40
	::UnityEngine::InputSystem::Gamepad* FC1F0F04874AC696; // 0x48
	::UnityEngine::InputSystem::LowLevel::GamepadState F120338A03ECEED2; // 0x50

	::System::Void A12C5F3B91715373(::System::Collections::Generic::Dictionary_2<::System::Int32, ::B61481FE254BA0AA*>* A0F580C58F855BAA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::B61481FE254BA0AA*>*))((::PBYTE)hIl2Cpp + BC913D9913EDA8CF_A12C5F3B91715373_OFFSET))(this, A0F580C58F855BAA);
	}

	::System::Void A765A1D14770A303()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BC913D9913EDA8CF_A765A1D14770A303_OFFSET))(this);
	}

	::System::Void A3C5476AFE78F9AB(::System::Int32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BC913D9913EDA8CF_A3C5476AFE78F9AB_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void A14A07A8290F1757(::UnityEngine::Vector2 A1AA95F414E715E8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + BC913D9913EDA8CF_A14A07A8290F1757_OFFSET))(this, A1AA95F414E715E8);
	}

	::System::Void FF5FC32B668FC840()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BC913D9913EDA8CF_FF5FC32B668FC840_OFFSET))(this);
	}

	::System::Void B61B8C5130137967(::System::Int32 A8DE14D12834430D, ::B61481FE254BA0AA* F86939EE5D190C10)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::B61481FE254BA0AA*))((::PBYTE)hIl2Cpp + BC913D9913EDA8CF_B61B8C5130137967_OFFSET))(this, A8DE14D12834430D, F86939EE5D190C10);
	}

	::System::Void F77C376165DED7C0(::System::Int32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BC913D9913EDA8CF_F77C376165DED7C0_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor(::ABC::UI::MonoUIAutoView* F45A155F61126DA2)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + BC913D9913EDA8CF__CTOR_OFFSET))(this, F45A155F61126DA2);
	}
};
