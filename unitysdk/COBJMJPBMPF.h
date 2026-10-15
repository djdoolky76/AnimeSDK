#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/System/Object.h"

#define COBJMJPBMPF_MEBPCCPOMHK_OFFSET UNITYSDK_OFFSET(0xDCB18B0)

inline static constexpr unsigned int COBJMJPBMPF_TypeDefinitionIndex = 53641;

	class COBJMJPBMPF : public ::System::Object
	{
	public:
		static ::System::Boolean MEBPCCPOMHK(::RPG::GameCore::CompareType a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::CompareType, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + COBJMJPBMPF_MEBPCCPOMHK_OFFSET))(a1, a2, a3);
		}

	};
