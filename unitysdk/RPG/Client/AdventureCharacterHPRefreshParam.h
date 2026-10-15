#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAJOCEIKAGK.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MemberData; }
namespace System::Collections::Generic { class KeyValuePair; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ADVENTURECHARACTERHPREFRESHPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xC5D5CA0)

namespace RPG::Client
{
	class AdventureCharacterHPRefreshParam : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair*>* ChangeList; // 0x10
		::OAJOCEIKAGK Reason; // 0x18
		::System::Boolean TriggerCommonEffect; // 0x1C
		::System::Boolean Overflow; // 0x1D
		::System::Byte _padding0[0x2];
		::System::Single ChangeRatio; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTURECHARACTERHPREFRESHPARAM_CTOR_OFFSET))(this);
		}

	};
}
