#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IBKDKKCOMCL_DDGALHJEDIG_KHMIEPAIDGM_OFFSET UNITYSDK_OFFSET(0x141B72B0)
#define IBKDKKCOMCL_DDGALHJEDIG__CTOR_OFFSET UNITYSDK_OFFSET(0x141B72A0)

inline static constexpr unsigned int IBKDKKCOMCL_DDGALHJEDIG_TypeDefinitionIndex = 77658;

class IBKDKKCOMCL_DDGALHJEDIG : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* NIAFEHMEANN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBKDKKCOMCL_DDGALHJEDIG__CTOR_OFFSET))(this);
	}

	::System::Void KHMIEPAIDGM(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + IBKDKKCOMCL_DDGALHJEDIG_KHMIEPAIDGM_OFFSET))(this, KECKGDFIALJ);
	}
};
