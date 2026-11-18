#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GINEMJPBFMK;
class JMNEANIBLKC;
class OGOGJEFPHDG;
namespace MoleMole { class UIZenkovWishListExchangeDialogPopWindowController_Context; }
namespace System { template <typename T> class Action_1; }

#define OGOGJEFPHDG_IOPPDGKLPOB_GFDPIMGLMJA_OFFSET UNITYSDK_OFFSET(0xFB8A570)
#define OGOGJEFPHDG_IOPPDGKLPOB_HNBNGPPAOMI_OFFSET UNITYSDK_OFFSET(0xFB8A690)
#define OGOGJEFPHDG_IOPPDGKLPOB__CTOR_OFFSET UNITYSDK_OFFSET(0xFB8A560)

inline static constexpr unsigned int OGOGJEFPHDG_IOPPDGKLPOB_TypeDefinitionIndex = 67016;

class OGOGJEFPHDG_IOPPDGKLPOB : public ::System::Object
{
public:
	::OGOGJEFPHDG* KLHPEBKNIFB; // 0x10
	::System::Action_1<::JMNEANIBLKC*>* DLMJCFBENGB; // 0x18
	::MoleMole::UIZenkovWishListExchangeDialogPopWindowController_Context* HBMGHPEPBNC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGOGJEFPHDG_IOPPDGKLPOB__CTOR_OFFSET))(this);
	}

	::System::Void GFDPIMGLMJA(::JMNEANIBLKC* FPGJHIAAACG)
	{
		return ((::System::Void(*)(::PVOID, ::JMNEANIBLKC*))((::PBYTE)hIl2Cpp + OGOGJEFPHDG_IOPPDGKLPOB_GFDPIMGLMJA_OFFSET))(this, FPGJHIAAACG);
	}

	::System::Void HNBNGPPAOMI(::GINEMJPBFMK* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::GINEMJPBFMK*))((::PBYTE)hIl2Cpp + OGOGJEFPHDG_IOPPDGKLPOB_HNBNGPPAOMI_OFFSET))(this, GLAOEHCGCFO);
	}
};
