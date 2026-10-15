#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceProperty.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ADLHEPFKAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C849F80)

inline static constexpr unsigned int ADLHEPFKAGE_TypeDefinitionIndex = 43781;

	class ADLHEPFKAGE : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceProperty, ::System::Int32>* FBEBNLOPIBL; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADLHEPFKAGE_CTOR_OFFSET))(this);
		}

	};
