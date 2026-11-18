#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CBBHKFHBKPK;
namespace MoleMole { class UIMiniscapeTalentPageController_MiniscapeTalentPerData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTONEROWDATA_GETMINISCAPETALENTPERDATABYINDEX_OFFSET UNITYSDK_OFFSET(0x147DCA80)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTONEROWDATA_GETPERTALENTDATALIST_OFFSET UNITYSDK_OFFSET(0x147DCA40)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTONEROWDATA_SETTABLEINFO_OFFSET UNITYSDK_OFFSET(0x147DCB20)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTONEROWDATA_SORTMETHOD_OFFSET UNITYSDK_OFFSET(0x147DCD50)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTONEROWDATA_SORTTABLEINFOLIST_OFFSET UNITYSDK_OFFSET(0x147DCC50)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTONEROWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x147DCEC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniscapeTalentPageController_MiniscapeTalentOneRowData_TypeDefinitionIndex = 60872;

	class UIMiniscapeTalentPageController_MiniscapeTalentOneRowData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* _perTalentDataList; // 0x10
		::System::Int32 ColumnIndexInConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTONEROWDATA__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* GetPerTalentDataList()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTONEROWDATA_GETPERTALENTDATALIST_OFFSET))(this);
		}

		::MoleMole::UIMiniscapeTalentPageController_MiniscapeTalentPerData* GetMiniscapeTalentPerDataByIndex(::System::Int32 index)
		{
			return ((::MoleMole::UIMiniscapeTalentPageController_MiniscapeTalentPerData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTONEROWDATA_GETMINISCAPETALENTPERDATABYINDEX_OFFSET))(this, index);
		}

		::System::Void SetTableInfo(::CBBHKFHBKPK* tableInfo)
		{
			return ((::System::Void(*)(::PVOID, ::CBBHKFHBKPK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTONEROWDATA_SETTABLEINFO_OFFSET))(this, tableInfo);
		}

		::System::Void SortTableInfoList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTONEROWDATA_SORTTABLEINFOLIST_OFFSET))(this);
		}

		::System::Int32 SortMethod(::MoleMole::UIMiniscapeTalentPageController_MiniscapeTalentPerData* first, ::MoleMole::UIMiniscapeTalentPageController_MiniscapeTalentPerData* second)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIMiniscapeTalentPageController_MiniscapeTalentPerData*, ::MoleMole::UIMiniscapeTalentPageController_MiniscapeTalentPerData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTONEROWDATA_SORTMETHOD_OFFSET))(this, first, second);
		}
	};
}
