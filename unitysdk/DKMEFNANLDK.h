#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHackInteractPointChildWindowController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define DKMEFNANLDK_AHBGJCIGJLN_OFFSET UNITYSDK_OFFSET(0x15A52A00)
#define DKMEFNANLDK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A51EA0)
#define DKMEFNANLDK_GIMECMPCOLI_OFFSET UNITYSDK_OFFSET(0x15A52C40)
#define DKMEFNANLDK_KJCGIDNEICG_OFFSET UNITYSDK_OFFSET(0x15A52B90)
#define DKMEFNANLDK_MNLHEINDCEE_OFFSET UNITYSDK_OFFSET(0x15A525A0)
#define DKMEFNANLDK_PLAPBILCBGN_OFFSET UNITYSDK_OFFSET(0x15A52720)
#define DKMEFNANLDK__CTOR_OFFSET UNITYSDK_OFFSET(0x15A524C0)

inline static constexpr unsigned int DKMEFNANLDK_TypeDefinitionIndex = 89122;

class DKMEFNANLDK : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::UIHackInteractPointChildWindowController*>* AGLLICHJEAL; // 0x10
	::System::Collections::Generic::Queue_1<::MoleMole::UIHackInteractPointChildWindowController*>* KOIGEMMFCCD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMEFNANLDK__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMEFNANLDK_DISPOSE_OFFSET))(this);
	}

	::System::Void MNLHEINDCEE(::System::UInt32 DAFMBHHBOKF, ::MoleMole::UIHackInteractPointChildWindowController* NCIMBHDKIJM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::UIHackInteractPointChildWindowController*))((::PBYTE)hIl2Cpp + DKMEFNANLDK_MNLHEINDCEE_OFFSET))(this, DAFMBHHBOKF, NCIMBHDKIJM);
	}

	::System::Void PLAPBILCBGN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMEFNANLDK_PLAPBILCBGN_OFFSET))(this);
	}

	::System::Void AHBGJCIGJLN(::System::UInt32 DAFMBHHBOKF)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DKMEFNANLDK_AHBGJCIGJLN_OFFSET))(this, DAFMBHHBOKF);
	}

	::System::Boolean KJCGIDNEICG(::System::UInt32 PHHDHIBOCKA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DKMEFNANLDK_KJCGIDNEICG_OFFSET))(this, PHHDHIBOCKA);
	}

	::MoleMole::UIHackInteractPointChildWindowController* GIMECMPCOLI()
	{
		return ((::MoleMole::UIHackInteractPointChildWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMEFNANLDK_GIMECMPCOLI_OFFSET))(this);
	}
};
