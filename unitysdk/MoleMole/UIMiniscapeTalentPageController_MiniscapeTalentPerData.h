#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CBBHKFHBKPK;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTPERDATA_GETPRETALENTIDLIST_OFFSET UNITYSDK_OFFSET(0x193B0030)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTPERDATA_GETTABLEINFO_OFFSET UNITYSDK_OFFSET(0x193AFF50)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTPERDATA_GETTALENTID_OFFSET UNITYSDK_OFFSET(0x193AFF90)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTPERDATA_SETNEXTTALENTINDEX_OFFSET UNITYSDK_OFFSET(0x193B0080)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTPERDATA_SETTABLEINFO_OFFSET UNITYSDK_OFFSET(0x193AFFE0)
#define MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTPERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x193B00F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniscapeTalentPageController_MiniscapeTalentPerData_TypeDefinitionIndex = 60871;

	class UIMiniscapeTalentPageController_MiniscapeTalentPerData : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Int32>* NextTalentItemIndexList; // 0x10
		::CBBHKFHBKPK* _tableInfo; // 0x18
		::System::Int32 NextColumnItemIndex; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTPERDATA__CTOR_OFFSET))(this);
		}

		::CBBHKFHBKPK* GetTableInfo()
		{
			return ((::CBBHKFHBKPK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTPERDATA_GETTABLEINFO_OFFSET))(this);
		}

		::System::Int32 GetTalentId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTPERDATA_GETTALENTID_OFFSET))(this);
		}

		::System::Void SetTableInfo(::CBBHKFHBKPK* tableInfo)
		{
			return ((::System::Void(*)(::PVOID, ::CBBHKFHBKPK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTPERDATA_SETTABLEINFO_OFFSET))(this, tableInfo);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetPreTalentIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTPERDATA_GETPRETALENTIDLIST_OFFSET))(this);
		}

		::System::Void SetNextTalentIndex(::System::Int32 columnIndex, ::System::Int32 rowIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPAGECONTROLLER_MINISCAPETALENTPERDATA_SETNEXTTALENTINDEX_OFFSET))(this, columnIndex, rowIndex);
		}
	};
}
