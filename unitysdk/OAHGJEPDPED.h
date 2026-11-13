#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/AnchorType.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/PreValidationFailureReason.h"
#include "unitysdk/System/Object.h"
class AJDCLALCDLJ;
class EAGPPDDBBIM;
class JKOOAIOBGHP;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define OAHGJEPDPED_CLPGLOKIECN_OFFSET UNITYSDK_OFFSET(0x1AB5C210)
#define OAHGJEPDPED_CTOR_OFFSET UNITYSDK_OFFSET(0x1AB5C4D0)
#define OAHGJEPDPED_TRYSELECT_OFFSET UNITYSDK_OFFSET(0x1AB5BE70)

inline static constexpr unsigned int OAHGJEPDPED_TypeDefinitionIndex = 80073;

	class OAHGJEPDPED : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAHGJEPDPED_CTOR_OFFSET))(this);
		}

		::System::Boolean TrySelect(::JKOOAIOBGHP* a1, ::EAGPPDDBBIM* a2, ::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::JKOOAIOBGHP*, ::EAGPPDDBBIM*, ::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason))((::PBYTE)hIl2Cpp + OAHGJEPDPED_TRYSELECT_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Int32 CLPGLOKIECN(::System::Collections::Generic::IReadOnlyList_1<::AJDCLALCDLJ*>* a1, ::RPG::Client::LittleGame::ComicDessert::AnchorType a2)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::IReadOnlyList_1<::AJDCLALCDLJ*>*, ::RPG::Client::LittleGame::ComicDessert::AnchorType))((::PBYTE)hIl2Cpp + OAHGJEPDPED_CLPGLOKIECN_OFFSET))(a1, a2);
		}

	};
