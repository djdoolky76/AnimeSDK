#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIMiddleTip; }
namespace System { template <typename T> class WeakReference_1; }

#define PKHKCDPNGIJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7B00C0)
#define PKHKCDPNGIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x7B0010)

inline static constexpr unsigned int PKHKCDPNGIJ_TypeDefinitionIndex = 67223;

struct alignas(8) PKHKCDPNGIJ
{
	::System::WeakReference_1<::MoleMole::UIMiddleTip*>* OBIGDKKGNLA; // 0x10

	::System::Void _ctor(::MoleMole::UIMiddleTip* HODAIDNDKHD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIMiddleTip*))((::PBYTE)hIl2Cpp + PKHKCDPNGIJ__CTOR_OFFSET))(this, HODAIDNDKHD);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKHKCDPNGIJ_DISPOSE_OFFSET))(this);
	}
};
