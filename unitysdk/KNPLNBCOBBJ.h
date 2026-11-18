#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
namespace MoleMole { class UIDailyChallengeCardRowWidgetController; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class RectTransform; }

#define KNPLNBCOBBJ_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x17672260)
#define KNPLNBCOBBJ_HJNJLKMIJPH_OFFSET UNITYSDK_OFFSET(0x17672520)
#define KNPLNBCOBBJ_PNBKGEKBDMK_OFFSET UNITYSDK_OFFSET(0x17672840)
#define KNPLNBCOBBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x176724D0)

inline static constexpr unsigned int KNPLNBCOBBJ_TypeDefinitionIndex = 62093;

class KNPLNBCOBBJ : public ::PBJOCICFNGK
{
public:
	::MoleMole::UIDailyChallengeCardRowWidgetController* OFJCKDMPPFO; // 0x50
	::UnityEngine::RectTransform* DJEMFIGNBKA; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNPLNBCOBBJ__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + KNPLNBCOBBJ_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void HJNJLKMIJPH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNPLNBCOBBJ_HJNJLKMIJPH_OFFSET))(this);
	}

	::System::Void PNBKGEKBDMK(::System::Int32 NJBALIKDOCA, ::System::Action_1<::System::Int32>* OFJCLIEIOFI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + KNPLNBCOBBJ_PNBKGEKBDMK_OFFSET))(this, NJBALIKDOCA, OFJCLIEIOFI);
	}
};
