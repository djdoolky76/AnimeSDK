#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class GPCLMNFMNBJ;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIFISHINGCONTESTMATCHRESULTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18930820)

namespace MoleMole
{
	inline static constexpr unsigned int UIFishingContestMatchResultContext_TypeDefinitionIndex = 89921;

	class UIFishingContestMatchResultContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Boolean>* OnClose; // 0x28
		::System::Collections::Generic::List_1<::GPCLMNFMNBJ*>* PlayerInfos; // 0x30
		::System::Boolean IsLocalPlayerWin; // 0x38
		::System::Byte _padding0[0x3];
		::System::Int32 LevelId; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTMATCHRESULTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
