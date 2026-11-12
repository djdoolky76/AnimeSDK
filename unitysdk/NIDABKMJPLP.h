#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IngredientKind.h"
#include "unitysdk/System/Object.h"
class NOEOAMBCKHB;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NIDABKMJPLP_BCMKKGHEAFK_OFFSET UNITYSDK_OFFSET(0xC4C1640)
#define NIDABKMJPLP_COEMCOBPMKD_OFFSET UNITYSDK_OFFSET(0xC4C2280)
#define NIDABKMJPLP_HGHOPHJKEKB_OFFSET UNITYSDK_OFFSET(0xC4C0AC0)
#define NIDABKMJPLP_KPBFEKFKNGL_OFFSET UNITYSDK_OFFSET(0xC4C0E20)

inline static constexpr unsigned int NIDABKMJPLP_TypeDefinitionIndex = 79845;

	class NIDABKMJPLP : public ::System::Object
	{
	public:
		static ::System::Boolean HGHOPHJKEKB(::NOEOAMBCKHB* a1, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::IngredientKind>* a2)
		{
			return ((::System::Boolean(*)(::NOEOAMBCKHB*, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::IngredientKind>*))((::PBYTE)hIl2Cpp + NIDABKMJPLP_HGHOPHJKEKB_OFFSET))(a1, a2);
		}

		static ::NOEOAMBCKHB* KPBFEKFKNGL(::System::Collections::Generic::IReadOnlyList_1<::NOEOAMBCKHB*>* a1, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::IngredientKind>* a2, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a3)
		{
			return ((::NOEOAMBCKHB*(*)(::System::Collections::Generic::IReadOnlyList_1<::NOEOAMBCKHB*>*, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::IngredientKind>*, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + NIDABKMJPLP_KPBFEKFKNGL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BCMKKGHEAFK(::NOEOAMBCKHB* a1, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::IngredientKind>* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::IngredientKind>* a3)
		{
			return ((::System::Void(*)(::NOEOAMBCKHB*, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::IngredientKind>*, ::System::Collections::Generic::List_1<::RPG::GameCore::IngredientKind>*))((::PBYTE)hIl2Cpp + NIDABKMJPLP_BCMKKGHEAFK_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 COEMCOBPMKD(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::IngredientKind>* a1, ::RPG::GameCore::IngredientKind a2)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::IngredientKind>*, ::RPG::GameCore::IngredientKind))((::PBYTE)hIl2Cpp + NIDABKMJPLP_COEMCOBPMKD_OFFSET))(a1, a2);
		}

	};
