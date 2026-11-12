#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IngredientKind.h"
#include "unitysdk/System/Object.h"
class OIFNCDILIHL;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HFGNIJJEEFM_APEKMCOPAGJ_OFFSET UNITYSDK_OFFSET(0x16BC1E60)
#define HFGNIJJEEFM_FAAJALELEDO_OFFSET UNITYSDK_OFFSET(0x16BC1F00)

inline static constexpr unsigned int HFGNIJJEEFM_TypeDefinitionIndex = 79752;

	class HFGNIJJEEFM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::GameCore::IngredientKind>* APEKMCOPAGJ(::OIFNCDILIHL* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::IngredientKind>*(*)(::OIFNCDILIHL*))((::PBYTE)hIl2Cpp + HFGNIJJEEFM_APEKMCOPAGJ_OFFSET))(a1);
		}

		static ::System::Boolean FAAJALELEDO(::OIFNCDILIHL* a1)
		{
			return ((::System::Boolean(*)(::OIFNCDILIHL*))((::PBYTE)hIl2Cpp + HFGNIJJEEFM_FAAJALELEDO_OFFSET))(a1);
		}

	};
