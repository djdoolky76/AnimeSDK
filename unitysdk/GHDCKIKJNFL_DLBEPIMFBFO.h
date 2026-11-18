#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class IVideoPlayer; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define GHDCKIKJNFL_DLBEPIMFBFO__CTOR_OFFSET UNITYSDK_OFFSET(0x15CE40B0)

inline static constexpr unsigned int GHDCKIKJNFL_DLBEPIMFBFO_TypeDefinitionIndex = 78504;

class GHDCKIKJNFL_DLBEPIMFBFO : public ::System::Object
{
public:
	::MoleMole::IVideoPlayer* NEPAOLIPEFN; // 0x10
	::System::Action* PABLEDCGDGM; // 0x18
	::System::Action_1<::MoleMole::IVideoPlayer*>* JNCGLPCKKFL; // 0x20
	::System::Action* BNGMEPEJJHE; // 0x28
	::System::Action* AJFPKBOMMIA; // 0x30
	::System::Action_1<::MoleMole::IVideoPlayer*>* LEGHIDIHIHM; // 0x38
	::System::String* CJBJONJDOLI; // 0x40
	::System::Int32 MKEBAGONKPJ; // 0x48
	::System::Single GJLKCLKBNME; // 0x4C
	::System::Boolean EGNCJHEHILM; // 0x50
	::System::Boolean HAFDIMGJBHC; // 0x51

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHDCKIKJNFL_DLBEPIMFBFO__CTOR_OFFSET))(this);
	}
};
