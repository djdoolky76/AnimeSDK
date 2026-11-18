#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Animator; }

#define BDLKAHNBCCM__CTOR_OFFSET UNITYSDK_OFFSET(0x12680590)

inline static constexpr unsigned int BDLKAHNBCCM_TypeDefinitionIndex = 52264;

class BDLKAHNBCCM : public ::System::Object
{
public:
	::UnityEngine::Animator* ICAAMDMMDDJ; // 0x10
	::System::Int16 FFIDLOHLOJA; // 0x18
	::System::Byte _padding0[0x2];
	::System::Int32 HLJEFIIDMFA; // 0x1C
	::System::UInt32 NJNCGJLHLKC; // 0x20
	::System::Single KADJNAHIDMO; // 0x24

	::System::Void _ctor(::UnityEngine::Animator* PLFGAFNHOGH, ::MoleMole::Battle::Entity* NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BDLKAHNBCCM__CTOR_OFFSET))(this, PLFGAFNHOGH, NFFNEFLKPDG);
	}
};
