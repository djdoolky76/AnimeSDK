#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MLJGMELKNCC_KCKGMDBGMDB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIPRIVATEMESSAGEPOPWINDOWCONTROLLER___C__DISPLAYCLASS67_0__CTOR_OFFSET UNITYSDK_OFFSET(0x186EE750)
#define MOLEMOLE_UIPRIVATEMESSAGEPOPWINDOWCONTROLLER___C__DISPLAYCLASS67_0__SORTLIST_B__0_OFFSET UNITYSDK_OFFSET(0x186EE760)

namespace MoleMole
{
	inline static constexpr unsigned int UIPrivateMessagePopWindowController___c__DisplayClass67_0_TypeDefinitionIndex = 70162;

	class UIPrivateMessagePopWindowController___c__DisplayClass67_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* selectUsers; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEPOPWINDOWCONTROLLER___C__DISPLAYCLASS67_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _SortList_b__0(::MLJGMELKNCC_KCKGMDBGMDB* a, ::MLJGMELKNCC_KCKGMDBGMDB* b)
		{
			return ((::System::Int32(*)(::PVOID, ::MLJGMELKNCC_KCKGMDBGMDB*, ::MLJGMELKNCC_KCKGMDBGMDB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEPOPWINDOWCONTROLLER___C__DISPLAYCLASS67_0__SORTLIST_B__0_OFFSET))(this, a, b);
		}
	};
}
