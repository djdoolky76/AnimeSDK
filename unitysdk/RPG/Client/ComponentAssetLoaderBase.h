#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define RPG_CLIENT_COMPONENTASSETLOADERBASE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C98D6B0)
#define RPG_CLIENT_COMPONENTASSETLOADERBASE_COLLECTALLREFASSETPATH_OFFSET UNITYSDK_OFFSET(0x1C98D620)
#define RPG_CLIENT_COMPONENTASSETLOADERBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C98B270)

namespace RPG::Client
{
	inline static constexpr unsigned int ComponentAssetLoaderBase_TypeDefinitionIndex = 70351;

	class ComponentAssetLoaderBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Boolean* StaticGet_AutoLoadInEditor()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "ComponentAssetLoaderBase")->GetStaticField(0x6410);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADERBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADERBASE_CCTOR_OFFSET))();
		}

		::System::Collections::Generic::IEnumerator_1<::System::String*>* CollectAllRefAssetPath()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADERBASE_COLLECTALLREFASSETPATH_OFFSET))(this);
		}

	};
}
