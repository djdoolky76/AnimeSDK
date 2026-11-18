#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FJILNDLOFGN;
namespace MoleMole::Battle { class Entity; }

#define GBKIDFBFPGP_FHNNHJKGDEC_BHGIELICJOG_OFFSET UNITYSDK_OFFSET(0x11C9A390)
#define GBKIDFBFPGP_FHNNHJKGDEC__CTOR_OFFSET UNITYSDK_OFFSET(0x11C8AEE0)

inline static constexpr unsigned int GBKIDFBFPGP_FHNNHJKGDEC_TypeDefinitionIndex = 58608;

class GBKIDFBFPGP_FHNNHJKGDEC : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x10
	::FJILNDLOFGN* DEKJDEPKKLH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_FHNNHJKGDEC__CTOR_OFFSET))(this);
	}

	::System::Void BHGIELICJOG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_FHNNHJKGDEC_BHGIELICJOG_OFFSET))(this);
	}
};
