#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CROWDANIMATOR_CROWDASSETSPATHCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xCBC17E0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDASSETSPATHCONFIG_GKGBNLAOFLE_OFFSET UNITYSDK_OFFSET(0xCBC1480)
#define RPG_CLIENT_CROWDANIMATOR_CROWDASSETSPATHCONFIG_KDJANOAPAFO_OFFSET UNITYSDK_OFFSET(0xCBC16E0)

namespace RPG::Client::CrowdAnimator
{
	inline static constexpr unsigned int CrowdAssetsPathConfig_TypeDefinitionIndex = 73715;

	class CrowdAssetsPathConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* CrowdVariantPath; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* _CrowdVariantPathDicts; // 0x20
		// static const ::System::String* DEFAULT_CONFIG_PATH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDASSETSPATHCONFIG_CTOR_OFFSET))(this);
		}

		::System::Void GKGBNLAOFLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDASSETSPATHCONFIG_GKGBNLAOFLE_OFFSET))(this);
		}

		::System::String* KDJANOAPAFO(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDASSETSPATHCONFIG_KDJANOAPAFO_OFFSET))(this, a1);
		}

	};
}
