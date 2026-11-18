#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class ACPNMIAAMLJ;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GENERALCHALLENGEINFODIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1191CCA0)

namespace MoleMole
{
	inline static constexpr unsigned int GeneralChallengeInfoDialogContext_TypeDefinitionIndex = 64225;

	class GeneralChallengeInfoDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* CustomTitleKey; // 0x28
		::System::Collections::Generic::List_1<::ACPNMIAAMLJ*>* CustomInfoData; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALCHALLENGEINFODIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
