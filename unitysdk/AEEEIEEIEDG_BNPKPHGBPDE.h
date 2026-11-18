#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHHJKACNJLG.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define AEEEIEEIEDG_BNPKPHGBPDE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x154E8B60)
#define AEEEIEEIEDG_BNPKPHGBPDE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x154E8B70)
#define AEEEIEEIEDG_BNPKPHGBPDE__CTOR_OFFSET UNITYSDK_OFFSET(0x154E8B40)

inline static constexpr unsigned int AEEEIEEIEDG_BNPKPHGBPDE_TypeDefinitionIndex = 53511;

class AEEEIEEIEDG_BNPKPHGBPDE : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* GLKMAMKJNOB; // 0x10
	::System::Func_1<::System::Object*>* OHALLKCPMLF; // 0x18
	::HHHJKACNJLG ENLBOOAEPDH; // 0x20
	::MoleMole::InputLogicEventType DLJNPPOPDCL; // 0x24
	::System::Int32 GMPHDFIJPCA; // 0x28

	::System::Void _ctor(::System::Action_1<::System::Int32>* GLKMAMKJNOB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + AEEEIEEIEDG_BNPKPHGBPDE__CTOR_OFFSET))(this, GLKMAMKJNOB);
	}

	::System::Void _ctor_1(::System::Action_1<::System::Int32>* GLKMAMKJNOB, ::System::Int32 GMPHDFIJPCA, ::HHHJKACNJLG ENLBOOAEPDH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*, ::System::Int32, ::HHHJKACNJLG))((::PBYTE)hIl2Cpp + AEEEIEEIEDG_BNPKPHGBPDE__CTOR_1_OFFSET))(this, GLKMAMKJNOB, GMPHDFIJPCA, ENLBOOAEPDH);
	}

	::System::Void _ctor_2(::System::Action_1<::System::Int32>* GLKMAMKJNOB, ::System::Int32 GMPHDFIJPCA, ::HHHJKACNJLG ENLBOOAEPDH, ::MoleMole::InputLogicEventType DLJNPPOPDCL, ::System::Func_1<::System::Object*>* OHALLKCPMLF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*, ::System::Int32, ::HHHJKACNJLG, ::MoleMole::InputLogicEventType, ::System::Func_1<::System::Object*>*))((::PBYTE)hIl2Cpp + AEEEIEEIEDG_BNPKPHGBPDE__CTOR_2_OFFSET))(this, GLKMAMKJNOB, GMPHDFIJPCA, ENLBOOAEPDH, DLJNPPOPDCL, OHALLKCPMLF);
	}
};
