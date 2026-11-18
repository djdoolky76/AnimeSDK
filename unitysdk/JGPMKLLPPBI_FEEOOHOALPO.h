#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class EMADFJAKIBG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JGPMKLLPPBI_FEEOOHOALPO_BNHIDAPEHNL_OFFSET UNITYSDK_OFFSET(0x13841590)
#define JGPMKLLPPBI_FEEOOHOALPO_MAKNEHPPFFN_OFFSET UNITYSDK_OFFSET(0x13841410)
#define JGPMKLLPPBI_FEEOOHOALPO__CTOR_OFFSET UNITYSDK_OFFSET(0x13841400)

inline static constexpr unsigned int JGPMKLLPPBI_FEEOOHOALPO_TypeDefinitionIndex = 90553;

class JGPMKLLPPBI_FEEOOHOALPO : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* NFBIEEPHGFB; // 0x10
	::HOCDHMEPPEG MMCKPLBLCIL; // 0x18
	::Foundation::ViewObject::ViewObjectHandle AMNIHACKELI; // 0x48
	::HOCDHMEPPEG CGJOHGLPDBP; // 0x58
	::HOCDHMEPPEG DJBBALOPPNE; // 0x88
	::System::Action* DLMJCFBENGB; // 0xB8
	::System::Boolean DEBGKPLOPCG; // 0xC0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGPMKLLPPBI_FEEOOHOALPO__CTOR_OFFSET))(this);
	}

	::System::Void MAKNEHPPFFN(::EMADFJAKIBG* PJMOJNFEHLF)
	{
		return ((::System::Void(*)(::PVOID, ::EMADFJAKIBG*))((::PBYTE)hIl2Cpp + JGPMKLLPPBI_FEEOOHOALPO_MAKNEHPPFFN_OFFSET))(this, PJMOJNFEHLF);
	}

	::System::Void BNHIDAPEHNL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGPMKLLPPBI_FEEOOHOALPO_BNHIDAPEHNL_OFFSET))(this);
	}
};
