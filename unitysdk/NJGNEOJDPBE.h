#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InteractantTagListEntry.h"
#include "unitysdk/NLLJDOHBCJA.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NJGNEOJDPBE_IFGIFJMEBLK_OFFSET UNITYSDK_OFFSET(0x5A4430)
#define NJGNEOJDPBE__CTOR_OFFSET UNITYSDK_OFFSET(0x5A4420)

inline static constexpr unsigned int NJGNEOJDPBE_TypeDefinitionIndex = 61696;

struct alignas(8) NJGNEOJDPBE
{
	::System::Collections::Generic::List_1<::MoleMole::InteractantTagListEntry>* AMEBGEGLNDD; // 0x10
	::System::Collections::Generic::IReadOnlyList_1<::MoleMole::InteractantTagListEntry>* MABKDGJCAAO; // 0x18

	::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::MoleMole::InteractantTagListEntry>*& KDDPAFAJMHM, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::InteractantTagListEntry>*& AMCLPKFNHKH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::InteractantTagListEntry>*&, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::InteractantTagListEntry>*&))((::PBYTE)hIl2Cpp + NJGNEOJDPBE__CTOR_OFFSET))(this, KDDPAFAJMHM, AMCLPKFNHKH);
	}

	::System::Collections::Generic::List_1<::System::String*>* IFGIFJMEBLK(::NLLJDOHBCJA OBNIAHNMHPF)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::NLLJDOHBCJA))((::PBYTE)hIl2Cpp + NJGNEOJDPBE_IFGIFJMEBLK_OFFSET))(this, OBNIAHNMHPF);
	}
};
