#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PEJCCBOKHCL_JJKGIAGDINC_NGPKOLHIIKH_OFFSET UNITYSDK_OFFSET(0x14B98160)
#define PEJCCBOKHCL_JJKGIAGDINC__CTOR_OFFSET UNITYSDK_OFFSET(0x14B98150)

inline static constexpr unsigned int PEJCCBOKHCL_JJKGIAGDINC_TypeDefinitionIndex = 72588;

class PEJCCBOKHCL_JJKGIAGDINC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* MOGGEOEAKJP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_JJKGIAGDINC__CTOR_OFFSET))(this);
	}

	::System::Boolean NGPKOLHIIKH(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_JJKGIAGDINC_NGPKOLHIIKH_OFFSET))(this, KECKGDFIALJ);
	}
};
