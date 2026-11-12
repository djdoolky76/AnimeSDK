#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class AkTriggerBase_Trigger;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AKTRIGGERBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x208C7890)
#define AKTRIGGERBASE_GETALLDERIVEDTYPES_OFFSET UNITYSDK_OFFSET(0x208C7090)

inline static constexpr unsigned int AkTriggerBase_TypeDefinitionIndex = 46034;

	class AkTriggerBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::AkTriggerBase_Trigger* triggerDelegate; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERBASE_CTOR_OFFSET))(this);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* GetAllDerivedTypes()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*(*)())((::PBYTE)hIl2Cpp + AKTRIGGERBASE_GETALLDERIVEDTYPES_OFFSET))();
		}

	};
