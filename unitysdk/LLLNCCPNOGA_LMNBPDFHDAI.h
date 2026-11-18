#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGGBGKKEBCC;
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }

#define LLLNCCPNOGA_LMNBPDFHDAI_FIDHEFFACGP_OFFSET UNITYSDK_OFFSET(0x12D3A830)
#define LLLNCCPNOGA_LMNBPDFHDAI__CTOR_OFFSET UNITYSDK_OFFSET(0x12D3A820)

inline static constexpr unsigned int LLLNCCPNOGA_LMNBPDFHDAI_TypeDefinitionIndex = 63643;

class LLLNCCPNOGA_LMNBPDFHDAI : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* ADANGBMIJBF; // 0x10
	::HGGBGKKEBCC* EIFBJGMCAEN; // 0x18
	::System::Action* EJGDHCIBCJH; // 0x20
	::System::Int32 NPKEGCLAKJF; // 0x28
	::System::Boolean EIIDOADGOIF; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLNCCPNOGA_LMNBPDFHDAI__CTOR_OFFSET))(this);
	}

	::System::Void FIDHEFFACGP(::System::UInt32 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LLLNCCPNOGA_LMNBPDFHDAI_FIDHEFFACGP_OFFSET))(this, MGMDLMBEDJF);
	}
};
