#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UIAdaptiveDeviceType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class LNDHLHALKAK;
class MonoUIAdaptConfigItem;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MONOUIADAPTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xBA4FA30)
#define MONOUIADAPTCONFIG_GETUIADAPTIONOPERATIONS_OFFSET UNITYSDK_OFFSET(0xBA4F3D0)

inline static constexpr unsigned int MonoUIAdaptConfig_TypeDefinitionIndex = 47585;

	class MonoUIAdaptConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::MonoUIAdaptConfigItem*>* Configs; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIADAPTCONFIG_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::LNDHLHALKAK*>* GetUIAdaptionOperations(::RPG::GameCore::UIAdaptiveDeviceType a1)
		{
			return ((::System::Collections::Generic::List_1<::LNDHLHALKAK*>*(*)(::PVOID, ::RPG::GameCore::UIAdaptiveDeviceType))((::PBYTE)hIl2Cpp + MONOUIADAPTCONFIG_GETUIADAPTIONOPERATIONS_OFFSET))(this, a1);
		}

	};
