#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IPNCFCFIKCF.h"
#include "unitysdk/JEHKCBLNGPD.h"
#include "unitysdk/NMPKPCHPDMG.h"

class HGAJKHIMKJP;
namespace MoleMole { class UIHollowCardOptionsDialogContext; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CABAIKHDPJL_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x1458EC60)
#define CABAIKHDPJL_HLBKHEFJAPH_OFFSET UNITYSDK_OFFSET(0x145911A0)
#define CABAIKHDPJL__CTOR_OFFSET UNITYSDK_OFFSET(0x1458EB10)

inline static constexpr unsigned int CABAIKHDPJL_TypeDefinitionIndex = 71736;

class CABAIKHDPJL : public ::IPNCFCFIKCF
{
public:
	::MoleMole::UIHollowCardOptionsDialogContext* AAOCANGHBDG; // 0x18
	::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* HENPOHLEJJF; // 0x20
	::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* JEJBIHIBCIO; // 0x28
	::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* GLOIMHAJJIE; // 0x30
	::System::Boolean JNBALIGHMFD; // 0x38
	::System::Boolean PAHDPPPMJIK; // 0x39
	::System::Byte _padding0[0x2];
	::JEHKCBLNGPD NCLKGNCJBOI; // 0x3C
	::NMPKPCHPDMG CIAHAAKLADN; // 0x40

	::System::Void _ctor(::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* GLOIMHAJJIE, ::JEHKCBLNGPD NCLKGNCJBOI, ::System::Boolean PAHDPPPMJIK, ::NMPKPCHPDMG CIAHAAKLADN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*, ::JEHKCBLNGPD, ::System::Boolean, ::NMPKPCHPDMG))((::PBYTE)hIl2Cpp + CABAIKHDPJL__CTOR_OFFSET))(this, GLOIMHAJJIE, NCLKGNCJBOI, PAHDPPPMJIK, CIAHAAKLADN);
	}

	::System::Void HFBPONNNLBA(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CABAIKHDPJL_HFBPONNNLBA_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Int32 HLBKHEFJAPH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CABAIKHDPJL_HLBKHEFJAPH_OFFSET))(this);
	}
};
