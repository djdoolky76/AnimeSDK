#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class DJPEEJFNCHL;
class IJFMMBEBPHE;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_UIZENKOVSEASONRESULTPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x10585970)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovSeasonResultPopWindowController_Context_TypeDefinitionIndex = 49159;

	class UIZenkovSeasonResultPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::IJFMMBEBPHE*>* seasonRecordMap; // 0x28
		::DJPEEJFNCHL* PlayerMedal; // 0x30
		::System::Boolean IsShowingSelfSeasonResult; // 0x38
		::System::Boolean isOneway; // 0x39

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSEASONRESULTPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
