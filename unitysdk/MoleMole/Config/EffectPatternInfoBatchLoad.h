#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_EFFECTPATTERNINFOBATCHLOAD__CTOR_OFFSET UNITYSDK_OFFSET(0x19B22D10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int EffectPatternInfoBatchLoad_TypeDefinitionIndex = 82474;

	class EffectPatternInfoBatchLoad : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::Foundation::AssetPath>*>* CharacterConfigPaths; // 0x58
		::Il2CppArray<::Foundation::AssetPath>* CommonConfigPaths; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTPATTERNINFOBATCHLOAD__CTOR_OFFSET))(this);
		}
	};
}
