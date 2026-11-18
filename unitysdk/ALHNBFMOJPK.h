#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENHHCBBAADE.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ALHNBFMOJPK_MJFHPEBFAID_OFFSET UNITYSDK_OFFSET(0x1550A380)
#define ALHNBFMOJPK__CTOR_OFFSET UNITYSDK_OFFSET(0x1550A220)

inline static constexpr unsigned int ALHNBFMOJPK_TypeDefinitionIndex = 66181;

class ALHNBFMOJPK : public ::ENHHCBBAADE
{
public:
	::System::Collections::Generic::List_1<::System::String*>* NBFIGAOCACO; // 0x20

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::String*>*& JNHELHOFMOB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*&))((::PBYTE)hIl2Cpp + ALHNBFMOJPK__CTOR_OFFSET))(this, JNHELHOFMOB);
	}

	::System::Boolean MJFHPEBFAID(::MoleMole::Battle::Entity*& KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + ALHNBFMOJPK_MJFHPEBFAID_OFFSET))(this, KECKGDFIALJ);
	}
};
