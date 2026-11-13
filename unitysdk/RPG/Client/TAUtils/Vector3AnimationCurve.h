#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::TAUtils { class Vector3AnimationCurve; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_TAUTILS_VECTOR3ANIMATIONCURVE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5ABDD0)
#define RPG_CLIENT_TAUTILS_VECTOR3ANIMATIONCURVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5ABC00)
#define RPG_CLIENT_TAUTILS_VECTOR3ANIMATIONCURVE_HCNFPLHKHDO_OFFSET UNITYSDK_OFFSET(0x1C5ABC10)
#define RPG_CLIENT_TAUTILS_VECTOR3ANIMATIONCURVE_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1C5A8F40)
#define RPG_CLIENT_TAUTILS_VECTOR3ANIMATIONCURVE_KNJCAJDNOFC_OFFSET UNITYSDK_OFFSET(0x1C5ABCF0)
#define RPG_CLIENT_TAUTILS_VECTOR3ANIMATIONCURVE_MIMCGMPIBHE_OFFSET UNITYSDK_OFFSET(0x1C5ABB20)
#define RPG_CLIENT_TAUTILS_VECTOR3ANIMATIONCURVE_NLDLLPECLCH_OFFSET UNITYSDK_OFFSET(0x1C5A92C0)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int Vector3AnimationCurve_TypeDefinitionIndex = 75766;

	class Vector3AnimationCurve : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* x; // 0x10
		::UnityEngine::AnimationCurve* y; // 0x18
		::UnityEngine::AnimationCurve* z; // 0x20
		static ::System::Collections::Generic::List_1<::RPG::Client::TAUtils::Vector3AnimationCurve*>** StaticGet_presets()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::TAUtils::Vector3AnimationCurve*>**)UnitySDK::FromName("RPG.Client.TAUtils", "Vector3AnimationCurve")->GetStaticField(0x149C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_VECTOR3ANIMATIONCURVE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_VECTOR3ANIMATIONCURVE_CCTOR_OFFSET))();
		}

		::UnityEngine::Vector3 KFGJEKJHIMB(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_VECTOR3ANIMATIONCURVE_KFGJEKJHIMB_OFFSET))(this, a1);
		}

		static ::RPG::Client::TAUtils::Vector3AnimationCurve* MIMCGMPIBHE(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::RPG::Client::TAUtils::Vector3AnimationCurve*(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_VECTOR3ANIMATIONCURVE_MIMCGMPIBHE_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::TAUtils::Vector3AnimationCurve* HCNFPLHKHDO(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::RPG::Client::TAUtils::Vector3AnimationCurve*(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_VECTOR3ANIMATIONCURVE_HCNFPLHKHDO_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::TAUtils::Vector3AnimationCurve* KNJCAJDNOFC(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::RPG::Client::TAUtils::Vector3AnimationCurve*(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_VECTOR3ANIMATIONCURVE_KNJCAJDNOFC_OFFSET))(a1, a2, a3, a4);
		}

		::System::Boolean NLDLLPECLCH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_VECTOR3ANIMATIONCURVE_NLDLLPECLCH_OFFSET))(this);
		}

	};
}
