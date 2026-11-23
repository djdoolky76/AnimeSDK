#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define HOUDINIENGINEUNITY_HEU_HOUDINIASSETROOT_A90A6086045D2C85_OFFSET UNITYSDK_OFFSET(0x3846620)
#define HOUDINIENGINEUNITY_HEU_HOUDINIASSETROOT_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x3846310)
#define HOUDINIENGINEUNITY_HEU_HOUDINIASSETROOT_AE8BF05ED6C6ACDB_OFFSET UNITYSDK_OFFSET(0x169C070)
#define HOUDINIENGINEUNITY_HEU_HOUDINIASSETROOT_BC5FC01AE53FF41F_OFFSET UNITYSDK_OFFSET(0x3846740)
#define HOUDINIENGINEUNITY_HEU_HOUDINIASSETROOT_EAAC9592C3E1E772_OFFSET UNITYSDK_OFFSET(0x16BD320)
#define HOUDINIENGINEUNITY_HEU_HOUDINIASSETROOT_EF7DD90451710460_OFFSET UNITYSDK_OFFSET(0x3846300)
#define HOUDINIENGINEUNITY_HEU_HOUDINIASSETROOT_FF7B54454D9FE5F0_OFFSET UNITYSDK_OFFSET(0x3846280)
#define HOUDINIENGINEUNITY_HEU_HOUDINIASSETROOT__CTOR_OFFSET UNITYSDK_OFFSET(0x3846810)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_HoudiniAssetRoot_TypeDefinitionIndex = 17991;

	class HEU_HoudiniAssetRoot : public ::UnityEngine::MonoBehaviour
	{
	public:
		::HoudiniEngineUnity::HEU_HoudiniAsset* _houdiniAsset; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _bakeTargets; // 0x28

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIASSETROOT_AB36E0EE549986E5_OFFSET))(this);
		}

		static ::System::Void EF7DD90451710460(::HoudiniEngineUnity::HEU_HoudiniAssetRoot* E637C71643CEDC91)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_HoudiniAssetRoot*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIASSETROOT_EF7DD90451710460_OFFSET))(E637C71643CEDC91);
		}

		::HoudiniEngineUnity::HEU_HoudiniAsset* EAAC9592C3E1E772()
		{
			return ((::HoudiniEngineUnity::HEU_HoudiniAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIASSETROOT_EAAC9592C3E1E772_OFFSET))(this);
		}

		::System::Void BC5FC01AE53FF41F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIASSETROOT_BC5FC01AE53FF41F_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* AE8BF05ED6C6ACDB()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIASSETROOT_AE8BF05ED6C6ACDB_OFFSET))(this);
		}

		::System::Void FF7B54454D9FE5F0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIASSETROOT_FF7B54454D9FE5F0_OFFSET))(this);
		}

		::System::Void A90A6086045D2C85()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIASSETROOT_A90A6086045D2C85_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIASSETROOT__CTOR_OFFSET))(this);
		}
	};
}
