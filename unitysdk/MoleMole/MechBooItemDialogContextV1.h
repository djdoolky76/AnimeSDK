#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MechBooItemDialogContext.h"

class ADEJAGFCBHK;
class OBCHINACLEL;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV1_GETPARTBUILDLIST_OFFSET UNITYSDK_OFFSET(0x143323D0)
#define MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV1_ISVALIDTEMPLATE_OFFSET UNITYSDK_OFFSET(0x14332360)
#define MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV1_OVERRIDETABTITLE_OFFSET UNITYSDK_OFFSET(0x14332310)
#define MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV1__CTOR_OFFSET UNITYSDK_OFFSET(0x143327F0)
#define MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV1___BASE_ISVALIDTEMPLATE_OFFSET UNITYSDK_OFFSET(0x14332840)

namespace MoleMole
{
	inline static constexpr unsigned int MechBooItemDialogContextV1_TypeDefinitionIndex = 52260;

	class MechBooItemDialogContextV1 : public ::MoleMole::MechBooItemDialogContext
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV1__CTOR_OFFSET))(this);
		}

		::System::Void OverrideTabTitle(::System::Int32 tabId, ::ADEJAGFCBHK* tab)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::ADEJAGFCBHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV1_OVERRIDETABTITLE_OFFSET))(this, tabId, tab);
		}

		::System::Boolean IsValidTemplate(::OBCHINACLEL* template_, ::System::Int32 tabId)
		{
			return ((::System::Boolean(*)(::PVOID, ::OBCHINACLEL*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV1_ISVALIDTEMPLATE_OFFSET))(this, template_, tabId);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetPartBuildList(::System::Int32 tabId)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV1_GETPARTBUILDLIST_OFFSET))(this, tabId);
		}

		::System::Boolean __base_IsValidTemplate(::OBCHINACLEL* P0, ::System::Int32 P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OBCHINACLEL*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV1___BASE_ISVALIDTEMPLATE_OFFSET))(this, P0, P1);
		}
	};
}
