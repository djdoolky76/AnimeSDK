#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }

#define ABAMIGEEBOI_COHFMBAFCLK_LJFGCDFNJIB_OFFSET UNITYSDK_OFFSET(0x181E43E0)
#define ABAMIGEEBOI_COHFMBAFCLK__CTOR_OFFSET UNITYSDK_OFFSET(0x181E43D0)

inline static constexpr unsigned int ABAMIGEEBOI_COHFMBAFCLK_TypeDefinitionIndex = 39927;

class ABAMIGEEBOI_COHFMBAFCLK : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::System::Int32 MPKKKJFNLIJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABAMIGEEBOI_COHFMBAFCLK__CTOR_OFFSET))(this);
	}

	::System::Void LJFGCDFNJIB(::MoleMole::Battle::Entity* NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + ABAMIGEEBOI_COHFMBAFCLK_LJFGCDFNJIB_OFFSET))(this, NFFNEFLKPDG);
	}
};
