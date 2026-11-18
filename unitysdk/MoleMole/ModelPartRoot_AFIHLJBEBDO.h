#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace MoleMole { class ModelPartRoot; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MODELPARTROOT_AFIHLJBEBDO_BEJAAHLGOKN_OFFSET UNITYSDK_OFFSET(0x139F21B0)
#define MOLEMOLE_MODELPARTROOT_AFIHLJBEBDO_EPGLFCABGII_OFFSET UNITYSDK_OFFSET(0x139F21E0)
#define MOLEMOLE_MODELPARTROOT_AFIHLJBEBDO__CTOR_OFFSET UNITYSDK_OFFSET(0x139F21A0)

namespace MoleMole
{
	inline static constexpr unsigned int ModelPartRoot_AFIHLJBEBDO_TypeDefinitionIndex = 77979;

	class ModelPartRoot_AFIHLJBEBDO : public ::System::Object
	{
	public:
		::System::Action* DLMJCFBENGB; // 0x10
		::MoleMole::ModelPartRoot* KLHPEBKNIFB; // 0x18
		::System::Int32 BLCLDOCEPCC; // 0x20
		::System::Boolean EBAJLMBGMFE; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_AFIHLJBEBDO__CTOR_OFFSET))(this);
		}

		::System::Void BEJAAHLGOKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_AFIHLJBEBDO_BEJAAHLGOKN_OFFSET))(this);
		}

		::System::Void EPGLFCABGII(::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* AJMHPLBGDLJ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTROOT_AFIHLJBEBDO_EPGLFCABGII_OFFSET))(this, AJMHPLBGDLJ);
		}
	};
}
