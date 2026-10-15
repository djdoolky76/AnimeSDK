#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Keyframe.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace RPG::Client::TAUtils { class Vector4AnimationCurve; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE_BCBABCIKDNH_OFFSET UNITYSDK_OFFSET(0xE195EF0)
#define RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE_CCTOR_OFFSET UNITYSDK_OFFSET(0xE196590)
#define RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE_CFGNKJFLGKK_OFFSET UNITYSDK_OFFSET(0xE195FD0)
#define RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE_CTOR_OFFSET UNITYSDK_OFFSET(0xE196380)
#define RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE_EBDLEPNBPHA_OFFSET UNITYSDK_OFFSET(0xE195DC0)
#define RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE_HCNFPLHKHDO_OFFSET UNITYSDK_OFFSET(0xE196390)
#define RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xE192CF0)
#define RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE_KNJCAJDNOFC_OFFSET UNITYSDK_OFFSET(0xE196490)
#define RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE_LHNIOAMBKEM_OFFSET UNITYSDK_OFFSET(0xE1961B0)
#define RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE_MCKJFEGPDHF_OFFSET UNITYSDK_OFFSET(0xE196110)
#define RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE_MIMCGMPIBHE_OFFSET UNITYSDK_OFFSET(0xE196280)
#define RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE_NLDLLPECLCH_OFFSET UNITYSDK_OFFSET(0xE192FE0)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int Vector4AnimationCurve_TypeDefinitionIndex = 73645;

	class Vector4AnimationCurve : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* x; // 0x10
		::UnityEngine::AnimationCurve* y; // 0x18
		::UnityEngine::AnimationCurve* z; // 0x20
		::UnityEngine::AnimationCurve* w; // 0x28
		static ::System::Collections::Generic::List_1<::RPG::Client::TAUtils::Vector4AnimationCurve*>** StaticGet_presets()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::TAUtils::Vector4AnimationCurve*>**)UnitySDK::FromName("RPG.Client.TAUtils", "Vector4AnimationCurve")->GetStaticField(0xAD30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE_CCTOR_OFFSET))();
		}

		::UnityEngine::Vector4 KFGJEKJHIMB(::System::Single a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE_KFGJEKJHIMB_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 EBDLEPNBPHA(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE_EBDLEPNBPHA_OFFSET))(this, a1);
		}

		::System::Void BCBABCIKDNH(::System::Single a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE_BCBABCIKDNH_OFFSET))(this, a1, a2);
		}

		::System::Void CFGNKJFLGKK(::System::Int32 a1, ::UnityEngine::Keyframe a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE_CFGNKJFLGKK_OFFSET))(this, a1, a2);
		}

		::System::Void MCKJFEGPDHF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE_MCKJFEGPDHF_OFFSET))(this, a1);
		}

		::System::Void LHNIOAMBKEM(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE_LHNIOAMBKEM_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::TAUtils::Vector4AnimationCurve* MIMCGMPIBHE(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::RPG::Client::TAUtils::Vector4AnimationCurve*(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE_MIMCGMPIBHE_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::TAUtils::Vector4AnimationCurve* HCNFPLHKHDO(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::RPG::Client::TAUtils::Vector4AnimationCurve*(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE_HCNFPLHKHDO_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::TAUtils::Vector4AnimationCurve* KNJCAJDNOFC(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::RPG::Client::TAUtils::Vector4AnimationCurve*(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE_KNJCAJDNOFC_OFFSET))(a1, a2, a3, a4);
		}

		::System::Boolean NLDLLPECLCH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_VECTOR4ANIMATIONCURVE_NLDLLPECLCH_OFFSET))(this);
		}

	};
}
