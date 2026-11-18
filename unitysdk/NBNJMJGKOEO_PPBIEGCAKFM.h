#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NBNJMJGKOEO_PNBHBGLNDMK.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NBNJMJGKOEO_PPBIEGCAKFM_LKCDJBHPDED_OFFSET UNITYSDK_OFFSET(0x105AABD0)
#define NBNJMJGKOEO_PPBIEGCAKFM__CTOR_OFFSET UNITYSDK_OFFSET(0x105AABC0)

inline static constexpr unsigned int NBNJMJGKOEO_PPBIEGCAKFM_TypeDefinitionIndex = 68613;

class NBNJMJGKOEO_PPBIEGCAKFM : public ::NBNJMJGKOEO_PNBHBGLNDMK
{
public:
	::System::Void _ctor(::System::Int32 GPJPMCGBHFI, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* JMDOANHOEJG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*))((::PBYTE)hIl2Cpp + NBNJMJGKOEO_PPBIEGCAKFM__CTOR_OFFSET))(this, GPJPMCGBHFI, JMDOANHOEJG);
	}

	::System::Void LKCDJBHPDED(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*& IDKNEIEMPAP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*&))((::PBYTE)hIl2Cpp + NBNJMJGKOEO_PPBIEGCAKFM_LKCDJBHPDED_OFFSET))(this, IDKNEIEMPAP);
	}
};
