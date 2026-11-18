#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKLBGAKHAOC.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/OFDKEANKAIL.h"

class KFPKNGNFJNO;
template <typename T> class LJHFMILANJA_1;

#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19BC47E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovBagPageController_Context_TypeDefinitionIndex = 54353;

	class UIBangkovBagPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::LJHFMILANJA_1<::KFPKNGNFJNO*>* SelectQuestData; // 0x28
		::System::Int32 SearchEntityRid; // 0x30
		::System::Boolean IsNightMode; // 0x34
		::System::Byte _padding0[0x3];
		::AKLBGAKHAOC ShowPageType; // 0x38
		::OFDKEANKAIL PlayType; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
