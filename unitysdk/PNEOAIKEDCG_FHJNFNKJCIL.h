#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define PNEOAIKEDCG_FHJNFNKJCIL__CTOR_OFFSET UNITYSDK_OFFSET(0x3F28E0)

inline static constexpr unsigned int PNEOAIKEDCG_FHJNFNKJCIL_TypeDefinitionIndex = 72600;

struct alignas(8) PNEOAIKEDCG_FHJNFNKJCIL
{
	::System::Int32 PAAEFLBFMGK; // 0x10
	::System::Byte _padding0[0x4];
	::System::Action_2<::MoleMole::Battle::Entity*, ::System::Boolean>* IOKODKLJNGP; // 0x18

	::System::Void _ctor(::System::Int32 FEOPKDMJHDH, ::System::Action_2<::MoleMole::Battle::Entity*, ::System::Boolean>* AOKHOHCJNFJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_2<::MoleMole::Battle::Entity*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + PNEOAIKEDCG_FHJNFNKJCIL__CTOR_OFFSET))(this, FEOPKDMJHDH, AOKHOHCJNFJ);
	}
};
