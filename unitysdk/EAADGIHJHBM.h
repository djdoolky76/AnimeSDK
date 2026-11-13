#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IngredientKind.h"
#include "unitysdk/System/Object.h"
class GDCBKFDNOCL;
class NOEOAMBCKHB;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define EAADGIHJHBM_FHEDEIODGGP_OFFSET UNITYSDK_OFFSET(0x181C4C40)
#define EAADGIHJHBM_JFFDILLFINC_OFFSET UNITYSDK_OFFSET(0x181C4930)
#define EAADGIHJHBM_JPHBPEMAFLI_OFFSET UNITYSDK_OFFSET(0x181C5060)
#define EAADGIHJHBM_NJGCNIACKPP_OFFSET UNITYSDK_OFFSET(0x181C4CE0)
#define EAADGIHJHBM_OFNNCAEMCDJ_OFFSET UNITYSDK_OFFSET(0x181C48A0)

inline static constexpr unsigned int EAADGIHJHBM_TypeDefinitionIndex = 79859;

	class EAADGIHJHBM : public ::System::Object
	{
	public:
		// static const ::System::Object MMCKBFADCGC; // 0x0
		static ::GDCBKFDNOCL* OFNNCAEMCDJ(::System::Collections::Generic::IReadOnlyList_1<::GDCBKFDNOCL*>* a1, ::RPG::GameCore::IngredientKind a2, ::System::UInt32 a3)
		{
			return ((::GDCBKFDNOCL*(*)(::System::Collections::Generic::IReadOnlyList_1<::GDCBKFDNOCL*>*, ::RPG::GameCore::IngredientKind, ::System::UInt32))((::PBYTE)hIl2Cpp + EAADGIHJHBM_OFNNCAEMCDJ_OFFSET))(a1, a2, a3);
		}

		static ::GDCBKFDNOCL* FHEDEIODGGP(::System::Collections::Generic::IReadOnlyList_1<::GDCBKFDNOCL*>* a1, ::RPG::GameCore::IngredientKind a2, ::System::UInt32 a3, ::System::Int32 a4)
		{
			return ((::GDCBKFDNOCL*(*)(::System::Collections::Generic::IReadOnlyList_1<::GDCBKFDNOCL*>*, ::RPG::GameCore::IngredientKind, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + EAADGIHJHBM_FHEDEIODGGP_OFFSET))(a1, a2, a3, a4);
		}

		static ::GDCBKFDNOCL* NJGCNIACKPP(::System::Collections::Generic::IReadOnlyList_1<::NOEOAMBCKHB*>* a1, ::NOEOAMBCKHB* a2, ::System::Collections::Generic::IReadOnlyList_1<::GDCBKFDNOCL*>* a3, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::IngredientKind>* a4, ::RPG::GameCore::IngredientKind a5, ::System::Int32 a6)
		{
			return ((::GDCBKFDNOCL*(*)(::System::Collections::Generic::IReadOnlyList_1<::NOEOAMBCKHB*>*, ::NOEOAMBCKHB*, ::System::Collections::Generic::IReadOnlyList_1<::GDCBKFDNOCL*>*, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::IngredientKind>*, ::RPG::GameCore::IngredientKind, ::System::Int32))((::PBYTE)hIl2Cpp + EAADGIHJHBM_NJGCNIACKPP_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Int32 JPHBPEMAFLI(::System::Collections::Generic::IReadOnlyList_1<::GDCBKFDNOCL*>* a1, ::RPG::GameCore::IngredientKind a2)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::IReadOnlyList_1<::GDCBKFDNOCL*>*, ::RPG::GameCore::IngredientKind))((::PBYTE)hIl2Cpp + EAADGIHJHBM_JPHBPEMAFLI_OFFSET))(a1, a2);
		}

		static ::GDCBKFDNOCL* JFFDILLFINC(::System::Collections::Generic::IReadOnlyList_1<::GDCBKFDNOCL*>* a1, ::RPG::GameCore::IngredientKind a2, ::System::UInt32 a3, ::System::Boolean a4, ::System::Int32 a5)
		{
			return ((::GDCBKFDNOCL*(*)(::System::Collections::Generic::IReadOnlyList_1<::GDCBKFDNOCL*>*, ::RPG::GameCore::IngredientKind, ::System::UInt32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + EAADGIHJHBM_JFFDILLFINC_OFFSET))(a1, a2, a3, a4, a5);
		}

	};
