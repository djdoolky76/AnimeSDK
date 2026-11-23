#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class AkTriggerBase_AAC2413668A9336F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AKTRIGGERBASE_B11E66ED907F91A3_OFFSET UNITYSDK_OFFSET(0x2927400)
#define AKTRIGGERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

inline static constexpr unsigned int AkTriggerBase_TypeDefinitionIndex = 20475;

class AkTriggerBase : public ::UnityEngine::MonoBehaviour
{
public:
	::AkTriggerBase_AAC2413668A9336F* triggerDelegate; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERBASE__CTOR_OFFSET))(this);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* B11E66ED907F91A3()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*(*)())((::PBYTE)hIl2Cpp + AKTRIGGERBASE_B11E66ED907F91A3_OFFSET))();
	}
};
