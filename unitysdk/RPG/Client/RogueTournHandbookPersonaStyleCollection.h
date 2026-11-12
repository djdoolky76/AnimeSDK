#pragma once
#include "unitysdk/unitysdk.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLECOLLECTION_CTOR_OFFSET UNITYSDK_OFFSET(0xEA5B6C0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLECOLLECTION_GETALLUNSEENUNLOCKEDSTYLEIDS_OFFSET UNITYSDK_OFFSET(0xEA5FF90)
#define RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLECOLLECTION_SETALLUNLOCKEDSTYLESEEN_OFFSET UNITYSDK_OFFSET(0xEA60850)
#define RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLECOLLECTION_SETSTYLESEEN_OFFSET UNITYSDK_OFFSET(0xEA60720)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHandbookPersonaStyleCollection_TypeDefinitionIndex = 69604;

	class RogueTournHandbookPersonaStyleCollection
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLECOLLECTION_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAllUnseenUnlockedStyleIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLECOLLECTION_GETALLUNSEENUNLOCKEDSTYLEIDS_OFFSET))(this);
		}

		::System::Void SetStyleSeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLECOLLECTION_SETSTYLESEEN_OFFSET))(this, a1);
		}

		::System::Void SetAllUnlockedStyleSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLECOLLECTION_SETALLUNLOCKEDSTYLESEEN_OFFSET))(this);
		}

	};
}
