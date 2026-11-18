#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class JJOKKBDDGNN;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_UIRABRESULTBANGBOODATASTATWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x168EBCD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABResultBangbooDataStatWidgetController_Context_TypeDefinitionIndex = 74581;

	class UIRABResultBangbooDataStatWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* MaxStats; // 0x28
		::JJOKKBDDGNN* SlotData; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABRESULTBANGBOODATASTATWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
