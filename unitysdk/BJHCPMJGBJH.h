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

#define BJHCPMJGBJH_CLPGLOKIECN_OFFSET UNITYSDK_OFFSET(0xBE5D940)
#define BJHCPMJGBJH_CTOR_OFFSET UNITYSDK_OFFSET(0xBE5D420)
#define BJHCPMJGBJH_LADIDJKNAPA_OFFSET UNITYSDK_OFFSET(0xBE5D6A0)
#define BJHCPMJGBJH_TRYSELECT_OFFSET UNITYSDK_OFFSET(0xBE5D430)

inline static constexpr unsigned int BJHCPMJGBJH_TypeDefinitionIndex = 80070;

	class BJHCPMJGBJH : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::ComicDessert::TargetStrategy KDLAKDJKIIO; // 0x10
		::RPG::Client::LittleGame::ComicDessert::AnchorType IBEJMIDCFAP; // 0x14
		::System::Void _ctor(::RPG::Client::LittleGame::ComicDessert::AnchorType a1, ::RPG::Client::LittleGame::ComicDessert::TargetStrategy a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::AnchorType, ::RPG::Client::LittleGame::ComicDessert::TargetStrategy))((::PBYTE)hIl2Cpp + BJHCPMJGBJH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean TrySelect(::JKOOAIOBGHP* a1, ::EAGPPDDBBIM* a2, ::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::JKOOAIOBGHP*, ::EAGPPDDBBIM*, ::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason))((::PBYTE)hIl2Cpp + BJHCPMJGBJH_TRYSELECT_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Boolean LADIDJKNAPA(::LPHINGPIEAJ* a1, ::System::Collections::Generic::IReadOnlyList_1<::AJDCLALCDLJ*>* a2, ::RPG::Client::LittleGame::ComicDessert::TargetStrategy a3, ::System::Int32 a4, ::RPG::Client::LittleGame::ComicDessert::AnchorType a5, ::System::Object* a6, ::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason a7)
		{
			return ((::System::Boolean(*)(::LPHINGPIEAJ*, ::System::Collections::Generic::IReadOnlyList_1<::AJDCLALCDLJ*>*, ::RPG::Client::LittleGame::ComicDessert::TargetStrategy, ::System::Int32, ::RPG::Client::LittleGame::ComicDessert::AnchorType, ::System::Object*, ::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason))((::PBYTE)hIl2Cpp + BJHCPMJGBJH_LADIDJKNAPA_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Int32 CLPGLOKIECN(::System::Collections::Generic::IReadOnlyList_1<::AJDCLALCDLJ*>* a1, ::RPG::Client::LittleGame::ComicDessert::AnchorType a2)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::IReadOnlyList_1<::AJDCLALCDLJ*>*, ::RPG::Client::LittleGame::ComicDessert::AnchorType))((::PBYTE)hIl2Cpp + BJHCPMJGBJH_CLPGLOKIECN_OFFSET))(a1, a2);
		}

	};
