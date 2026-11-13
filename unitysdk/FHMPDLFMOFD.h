#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IngredientKind.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/EBPAAJCGLAI.h"
class NOEOAMBCKHB;
class OIFNCDILIHL;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FHMPDLFMOFD_NGBHKLEFLLG_OFFSET UNITYSDK_OFFSET(0x197ECD30)
#define FHMPDLFMOFD_OONNHKJLIEP_OFFSET UNITYSDK_OFFSET(0x197ECEE0)

inline static constexpr unsigned int FHMPDLFMOFD_TypeDefinitionIndex = 79857;

	class FHMPDLFMOFD : public ::System::Object
	{
	public:
		static ::System::Boolean NGBHKLEFLLG(::System::Collections::Generic::IReadOnlyList_1<::NOEOAMBCKHB*>* a1, ::OIFNCDILIHL* a2, ::RPG::GameCore::IngredientKind a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IReadOnlyList_1<::NOEOAMBCKHB*>*, ::OIFNCDILIHL*, ::RPG::GameCore::IngredientKind, ::System::Int32))((::PBYTE)hIl2Cpp + FHMPDLFMOFD_NGBHKLEFLLG_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Collections::Generic::List_1<::EBPAAJCGLAI>* OONNHKJLIEP(::System::Collections::Generic::IReadOnlyList_1<::NOEOAMBCKHB*>* a1, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::IngredientKind>* a2, ::RPG::GameCore::IngredientKind a3, ::System::Int32 a4)
		{
			return ((::System::Collections::Generic::List_1<::EBPAAJCGLAI>*(*)(::System::Collections::Generic::IReadOnlyList_1<::NOEOAMBCKHB*>*, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::IngredientKind>*, ::RPG::GameCore::IngredientKind, ::System::Int32))((::PBYTE)hIl2Cpp + FHMPDLFMOFD_OONNHKJLIEP_OFFSET))(a1, a2, a3, a4);
		}

	};
