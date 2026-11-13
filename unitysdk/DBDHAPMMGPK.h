#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/AnchorType.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/PreValidationFailureReason.h"
#include "unitysdk/System/Object.h"
class EAGPPDDBBIM;
class JKOOAIOBGHP;

#define DBDHAPMMGPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1B144830)
#define DBDHAPMMGPK_TRYSELECT_OFFSET UNITYSDK_OFFSET(0x1B144840)

inline static constexpr unsigned int DBDHAPMMGPK_TypeDefinitionIndex = 80074;

	class DBDHAPMMGPK : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::ComicDessert::AnchorType JFOAJLAAHLE; // 0x10
		::System::Void _ctor(::RPG::Client::LittleGame::ComicDessert::AnchorType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::AnchorType))((::PBYTE)hIl2Cpp + DBDHAPMMGPK_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean TrySelect(::JKOOAIOBGHP* a1, ::EAGPPDDBBIM* a2, ::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::JKOOAIOBGHP*, ::EAGPPDDBBIM*, ::RPG::Client::LittleGame::ComicDessert::PreValidationFailureReason))((::PBYTE)hIl2Cpp + DBDHAPMMGPK_TRYSELECT_OFFSET))(this, a1, a2, a3);
		}

	};
