#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AvatarDynamicCheckType.h"
#include "unitysdk/NBNJMJGKOEO_PNBHBGLNDMK.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NBNJMJGKOEO_CFFPHBNGEDC_LKCDJBHPDED_OFFSET UNITYSDK_OFFSET(0x1ADEFE60)
#define NBNJMJGKOEO_CFFPHBNGEDC__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADEFE50)

inline static constexpr unsigned int NBNJMJGKOEO_CFFPHBNGEDC_TypeDefinitionIndex = 68607;

class NBNJMJGKOEO_CFFPHBNGEDC : public ::NBNJMJGKOEO_PNBHBGLNDMK
{
public:
	::MoleMole::AvatarDynamicCheckType JEPHNMFFGON; // 0x38

	::System::Void _ctor(::System::Int32 GPJPMCGBHFI, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* JMDOANHOEJG, ::MoleMole::AvatarDynamicCheckType BGNBOKFMILG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*, ::MoleMole::AvatarDynamicCheckType))((::PBYTE)hIl2Cpp + NBNJMJGKOEO_CFFPHBNGEDC__CTOR_OFFSET))(this, GPJPMCGBHFI, JMDOANHOEJG, BGNBOKFMILG);
	}

	::System::Void LKCDJBHPDED(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*& IDKNEIEMPAP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*&))((::PBYTE)hIl2Cpp + NBNJMJGKOEO_CFFPHBNGEDC_LKCDJBHPDED_OFFSET))(this, IDKNEIEMPAP);
	}
};
