#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class HGAJKHIMKJP;
class OBCHINACLEL;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MECHBOOITEMDIALOGCONTEXT_GETPARTITEMDATA_OFFSET UNITYSDK_OFFSET(0x180F5CF0)
#define MOLEMOLE_MECHBOOITEMDIALOGCONTEXT_ISVALIDTEMPLATE_OFFSET UNITYSDK_OFFSET(0x180F5C90)
#define MOLEMOLE_MECHBOOITEMDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x180F5FD0)

namespace MoleMole
{
	inline static constexpr unsigned int MechBooItemDialogContext_TypeDefinitionIndex = 47892;

	class MechBooItemDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MECHBOOITEMDIALOGCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean IsValidTemplate(::OBCHINACLEL* template_, ::System::Int32 tabId)
		{
			return ((::System::Boolean(*)(::PVOID, ::OBCHINACLEL*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MECHBOOITEMDIALOGCONTEXT_ISVALIDTEMPLATE_OFFSET))(this, template_, tabId);
		}

		::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* GetPartItemData(::System::Int32 tabId)
		{
			return ((::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MECHBOOITEMDIALOGCONTEXT_GETPARTITEMDATA_OFFSET))(this, tabId);
		}
	};
}
