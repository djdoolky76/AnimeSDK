#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAHAIEHANOH.h"
#include "unitysdk/KPBPGBNIDOK.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }

#define GBKIDFBFPGP_NICPBOMKBKE_DCEPANOBHNH_OFFSET UNITYSDK_OFFSET(0x15701930)
#define GBKIDFBFPGP_NICPBOMKBKE__CTOR_OFFSET UNITYSDK_OFFSET(0x15701920)

inline static constexpr unsigned int GBKIDFBFPGP_NICPBOMKBKE_TypeDefinitionIndex = 58610;

class GBKIDFBFPGP_NICPBOMKBKE : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18
	::System::Action* FAKMPMKIGEP; // 0x20
	::KPBPGBNIDOK HGCAEIPFNHM; // 0x28
	::System::Int32 BCCENALHBHL; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_NICPBOMKBKE__CTOR_OFFSET))(this);
	}

	::System::Void DCEPANOBHNH(::DAHAIEHANOH DMHCNCHBEGK)
	{
		return ((::System::Void(*)(::PVOID, ::DAHAIEHANOH))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_NICPBOMKBKE_DCEPANOBHNH_OFFSET))(this, DMHCNCHBEGK);
	}
};
