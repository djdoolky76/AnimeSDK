#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CPFJOGIHHCB;
namespace MoleMole { class MultipleVideoPlayerManager; }

#define CPFJOGIHHCB_BJIDPBJDEFE_AACLKPHGMLM_OFFSET UNITYSDK_OFFSET(0x123D71F0)
#define CPFJOGIHHCB_BJIDPBJDEFE__CTOR_OFFSET UNITYSDK_OFFSET(0x123D71E0)

inline static constexpr unsigned int CPFJOGIHHCB_BJIDPBJDEFE_TypeDefinitionIndex = 53607;

class CPFJOGIHHCB_BJIDPBJDEFE : public ::System::Object
{
public:
	::CPFJOGIHHCB* KLHPEBKNIFB; // 0x10
	::System::Boolean OAICOAHGJEC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFJOGIHHCB_BJIDPBJDEFE__CTOR_OFFSET))(this);
	}

	::System::Void AACLKPHGMLM(::MoleMole::MultipleVideoPlayerManager* PMKFNOGFCNA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MultipleVideoPlayerManager*))((::PBYTE)hIl2Cpp + CPFJOGIHHCB_BJIDPBJDEFE_AACLKPHGMLM_OFFSET))(this, PMKFNOGFCNA);
	}
};
