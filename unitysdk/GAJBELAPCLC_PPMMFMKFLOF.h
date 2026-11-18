#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace MoleMole::Battle { class Entity; }

#define GAJBELAPCLC_PPMMFMKFLOF_MEELBPKLPNA_OFFSET UNITYSDK_OFFSET(0x15CD01D0)
#define GAJBELAPCLC_PPMMFMKFLOF__CTOR_OFFSET UNITYSDK_OFFSET(0x15CD01C0)

inline static constexpr unsigned int GAJBELAPCLC_PPMMFMKFLOF_TypeDefinitionIndex = 58987;

class GAJBELAPCLC_PPMMFMKFLOF : public ::System::Object
{
public:
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* PLKMIEJCFOI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJBELAPCLC_PPMMFMKFLOF__CTOR_OFFSET))(this);
	}

	::System::Void MEELBPKLPNA(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GAJBELAPCLC_PPMMFMKFLOF_MEELBPKLPNA_OFFSET))(this, KECKGDFIALJ);
	}
};
