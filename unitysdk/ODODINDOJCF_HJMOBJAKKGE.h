#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define ODODINDOJCF_HJMOBJAKKGE__CTOR_OFFSET UNITYSDK_OFFSET(0xFB832E0)

inline static constexpr unsigned int ODODINDOJCF_HJMOBJAKKGE_TypeDefinitionIndex = 66806;

class ODODINDOJCF_HJMOBJAKKGE : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* OGDNJKJANEK; // 0x10
	::System::String* AEAFLLDMMPH; // 0x18
	::System::Boolean CJGKDAIMJHL; // 0x20

	::System::Void _ctor(::MoleMole::Battle::Entity* DJHFOGHIFEJ, ::System::String* CJBJONJDOLI, ::System::Boolean DEBGKPLOPCG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + ODODINDOJCF_HJMOBJAKKGE__CTOR_OFFSET))(this, DJHFOGHIFEJ, CJBJONJDOLI, DEBGKPLOPCG);
	}
};
