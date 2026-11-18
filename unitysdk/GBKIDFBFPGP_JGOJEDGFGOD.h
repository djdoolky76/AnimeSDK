#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

#define GBKIDFBFPGP_JGOJEDGFGOD_AKIOGJFKKHJ_OFFSET UNITYSDK_OFFSET(0x179CDAE0)
#define GBKIDFBFPGP_JGOJEDGFGOD__CTOR_OFFSET UNITYSDK_OFFSET(0x179CDAD0)

inline static constexpr unsigned int GBKIDFBFPGP_JGOJEDGFGOD_TypeDefinitionIndex = 58611;

class GBKIDFBFPGP_JGOJEDGFGOD : public ::System::Object
{
public:
	::MoleMole::EntityHandle HPADNAEINPK; // 0x10
	::System::Int32 BCCENALHBHL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_JGOJEDGFGOD__CTOR_OFFSET))(this);
	}

	::System::Void AKIOGJFKKHJ(::System::Int32 PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_JGOJEDGFGOD_AKIOGJFKKHJ_OFFSET))(this, PIIPCLCCOIG);
	}
};
