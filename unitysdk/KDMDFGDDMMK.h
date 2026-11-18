#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENHHCBBAADE.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KDMDFGDDMMK_MJFHPEBFAID_OFFSET UNITYSDK_OFFSET(0x130B3D70)
#define KDMDFGDDMMK__CTOR_OFFSET UNITYSDK_OFFSET(0x130B3C80)

inline static constexpr unsigned int KDMDFGDDMMK_TypeDefinitionIndex = 73868;

class KDMDFGDDMMK : public ::ENHHCBBAADE
{
public:
	::System::Collections::Generic::List_1<::System::String*>* LFNJKLCBNPG; // 0x20

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::String*>*& JMDOANHOEJG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*&))((::PBYTE)hIl2Cpp + KDMDFGDDMMK__CTOR_OFFSET))(this, JMDOANHOEJG);
	}

	::System::Boolean MJFHPEBFAID(::MoleMole::Battle::Entity*& KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + KDMDFGDDMMK_MJFHPEBFAID_OFFSET))(this, KECKGDFIALJ);
	}
};
