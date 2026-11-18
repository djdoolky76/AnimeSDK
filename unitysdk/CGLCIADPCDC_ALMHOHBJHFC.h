#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigDynamicCheckTree; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CGLCIADPCDC_ALMHOHBJHFC_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x1153DCA0)
#define CGLCIADPCDC_ALMHOHBJHFC__CTOR_OFFSET UNITYSDK_OFFSET(0x1153DC90)

inline static constexpr unsigned int CGLCIADPCDC_ALMHOHBJHFC_TypeDefinitionIndex = 50829;

class CGLCIADPCDC_ALMHOHBJHFC : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Action_1<::MoleMole::ConfigDynamicCheckTree*>* AMHGBGMOMLL; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::ConfigDynamicCheckTree*>* HPILKGCAPGF; // 0x20
	::System::Int32 HBINAGPODHA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLCIADPCDC_ALMHOHBJHFC__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::ConfigDynamicCheckTree* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigDynamicCheckTree*))((::PBYTE)hIl2Cpp + CGLCIADPCDC_ALMHOHBJHFC_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
