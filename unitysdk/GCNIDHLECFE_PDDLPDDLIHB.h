#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GCNIDHLECFE;
namespace MoleMole { class IVideoPlayer; }
namespace System { class Action; }

#define GCNIDHLECFE_PDDLPDDLIHB_NFBFJEOOPKL_OFFSET UNITYSDK_OFFSET(0xBB82610)
#define GCNIDHLECFE_PDDLPDDLIHB__CTOR_OFFSET UNITYSDK_OFFSET(0xBB82600)

inline static constexpr unsigned int GCNIDHLECFE_PDDLPDDLIHB_TypeDefinitionIndex = 72098;

class GCNIDHLECFE_PDDLPDDLIHB : public ::System::Object
{
public:
	::GCNIDHLECFE* KLHPEBKNIFB; // 0x10
	::System::Action* JNCGLPCKKFL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCNIDHLECFE_PDDLPDDLIHB__CTOR_OFFSET))(this);
	}

	::System::Void NFBFJEOOPKL(::MoleMole::IVideoPlayer* JGPIGFLIDOJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + GCNIDHLECFE_PDDLPDDLIHB_NFBFJEOOPKL_OFFSET))(this, JGPIGFLIDOJ);
	}
};
