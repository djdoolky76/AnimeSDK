#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/System/Object.h"

#define OCHGNIHELNL_MEBPCCPOMHK_OFFSET UNITYSDK_OFFSET(0x1C79DC30)

inline static constexpr unsigned int OCHGNIHELNL_TypeDefinitionIndex = 36976;

	class OCHGNIHELNL : public ::System::Object
	{
	public:
		static ::System::Boolean MEBPCCPOMHK(::RPG::GameCore::CompareType a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::CompareType, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OCHGNIHELNL_MEBPCCPOMHK_OFFSET))(a1, a2, a3);
		}

	};
