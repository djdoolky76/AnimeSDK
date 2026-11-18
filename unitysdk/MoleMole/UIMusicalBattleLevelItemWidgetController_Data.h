#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EACOAHODCJC_DPNHADHPJBG.h"
#include "unitysdk/EACOAHODCJC_JIENAGIBJOF.h"
#include "unitysdk/System/Object.h"

template <typename T> class JIOLFCAGOFH_1;
template <typename T> class LJHFMILANJA_1;

#define MOLEMOLE_UIMUSICALBATTLELEVELITEMWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18EB22F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicalBattleLevelItemWidgetController_Data_TypeDefinitionIndex = 65401;

	class UIMusicalBattleLevelItemWidgetController_Data : public ::System::Object
	{
	public:
		::JIOLFCAGOFH_1<::System::Boolean>* Focused; // 0x10
		::EACOAHODCJC_DPNHADHPJBG LevelInfo; // 0x18
		::LJHFMILANJA_1<::System::Int32>* CurSelectLevelIndex; // 0x50
		::EACOAHODCJC_JIENAGIBJOF LevelResult; // 0x58
		::System::Boolean Latest; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICALBATTLELEVELITEMWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
