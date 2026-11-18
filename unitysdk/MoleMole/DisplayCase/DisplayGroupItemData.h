#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayCase/DisplayBaseTransformData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/Config/DisplayCase/DisplayCaseCfgData.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_DISPLAYCASE_DISPLAYGROUPITEMDATA_EGBIGMNFCNO_OFFSET UNITYSDK_OFFSET(0x1A06BC60)
#define MOLEMOLE_DISPLAYCASE_DISPLAYGROUPITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A06B8E0)

namespace MoleMole::DisplayCase
{
	inline static constexpr unsigned int DisplayGroupItemData_TypeDefinitionIndex = 69609;

	class DisplayGroupItemData : public ::System::Object
	{
	public:
		::System::Int32 CaseId; // 0x10
		::System::Int32 TypeId; // 0x14
		::System::Boolean IsFemale; // 0x18
		::System::Byte _padding0[0x3];
		::MoleMole::DisplayCase::DisplayBaseTransformData TransformData; // 0x1C
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::DisplayCase::DisplayBaseTransformData>*>* AllItems; // 0x30

		::System::Void _ctor(::System::Int32 IJNJKKDPPJN, ::MoleMole::Config::DisplayCase::DisplayCaseCfgData AMJADGKJAPK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Config::DisplayCase::DisplayCaseCfgData))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYCASE_DISPLAYGROUPITEMDATA__CTOR_OFFSET))(this, IJNJKKDPPJN, AMJADGKJAPK);
		}

		::System::Void EGBIGMNFCNO(::MoleMole::DisplayCase::DisplayGroupItemData* LJBPECKCCEA)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::DisplayCase::DisplayGroupItemData*))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYCASE_DISPLAYGROUPITEMDATA_EGBIGMNFCNO_OFFSET))(this, LJBPECKCCEA);
		}
	};
}
