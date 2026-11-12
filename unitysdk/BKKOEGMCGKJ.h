#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/AnchorType.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/PreValidationFailureReason.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/TargetStrategy.h"
#include "unitysdk/System/Object.h"
class AJDCLALCDLJ;
class EAGPPDDBBIM;
class JKOOAIOBGHP;
class LPHINGPIEAJ;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define BKKOEGMCGKJ_CLPGLOKIECN_OFFSET UNITYSDK_OFFSET(0xC123AC0)
#define BKKOEGMCGKJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC123D80)
#define BKKOEGMCGKJ_LADIDJKNAPA_OFFSET UNITYSDK_OFFSET(0xC123530)
#define BKKOEGMCGKJ_MGLPAHOMAPJ_OFFSET UNITYSDK_OFFSET(0xC1237D0)
#define BKKOEGMCGKJ_TRYSELECT_OFFSET UNITYSDK_OFFSET(0xC1230B0)

inline static constexpr unsigned int BKKOEGMCGKJ_TypeDefinitionIndex = 80073;

	class BKKOEGMCGKJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKKOEGMCGKJ_CTOR_OFFSET))(this);
		}

		::System::Boolean TrySelect(::JKOOAIOBGHP* a1, ::EAGPPDDBBIM* a2, ::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::JKOOAIOBGHP*, ::EAGPPDDBBIM*, ::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason))((::PBYTE)hIl2Cpp + BKKOEGMCGKJ_TRYSELECT_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Boolean LADIDJKNAPA(::LPHINGPIEAJ* a1, ::System::Collections::Generic::IReadOnlyList_1<::AJDCLALCDLJ*>* a2, ::RPG::Client::LittleGame::ComicDessert::TargetStrategy a3, ::System::Int32 a4, ::RPG::Client::LittleGame::ComicDessert::AnchorType a5, ::System::Object* a6, ::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason a7)
		{
			return ((::System::Boolean(*)(::LPHINGPIEAJ*, ::System::Collections::Generic::IReadOnlyList_1<::AJDCLALCDLJ*>*, ::RPG::Client::LittleGame::ComicDessert::TargetStrategy, ::System::Int32, ::RPG::Client::LittleGame::ComicDessert::AnchorType, ::System::Object*, ::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason))((::PBYTE)hIl2Cpp + BKKOEGMCGKJ_LADIDJKNAPA_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Int32 MGLPAHOMAPJ(::System::Collections::Generic::IReadOnlyList_1<::AJDCLALCDLJ*>* a1, ::RPG::Client::LittleGame::ComicDessert::AnchorType a2)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::IReadOnlyList_1<::AJDCLALCDLJ*>*, ::RPG::Client::LittleGame::ComicDessert::AnchorType))((::PBYTE)hIl2Cpp + BKKOEGMCGKJ_MGLPAHOMAPJ_OFFSET))(a1, a2);
		}

		static ::System::Int32 CLPGLOKIECN(::System::Collections::Generic::IReadOnlyList_1<::AJDCLALCDLJ*>* a1, ::RPG::Client::LittleGame::ComicDessert::AnchorType a2)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::IReadOnlyList_1<::AJDCLALCDLJ*>*, ::RPG::Client::LittleGame::ComicDessert::AnchorType))((::PBYTE)hIl2Cpp + BKKOEGMCGKJ_CLPGLOKIECN_OFFSET))(a1, a2);
		}

	};
