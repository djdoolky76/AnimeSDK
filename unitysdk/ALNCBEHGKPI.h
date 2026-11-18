#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define ALNCBEHGKPI__CTOR_OFFSET UNITYSDK_OFFSET(0x16FFB7B0)

inline static constexpr unsigned int ALNCBEHGKPI_TypeDefinitionIndex = 42415;

class ALNCBEHGKPI : public ::System::Object
{
public:
	::System::String* DEJDMEAKOHN; // 0x10
	::System::Action* OKLLFEIJKHN; // 0x18
	::MoleMole::HollowChessboard::HollowChessboardUID LKDJGGNEEAL; // 0x20
	::System::Boolean HFANICLMHMK; // 0x28
	::System::Boolean EFOIFHFGGCG; // 0x29

	::System::Void _ctor(::System::String* MLDCMAGADCE, ::MoleMole::HollowChessboard::HollowChessboardUID ACHBBPJIBIE, ::System::Boolean HFANICLMHMK, ::System::Action* NPFIONPDFED)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + ALNCBEHGKPI__CTOR_OFFSET))(this, MLDCMAGADCE, ACHBBPJIBIE, HFANICLMHMK, NPFIONPDFED);
	}
};
