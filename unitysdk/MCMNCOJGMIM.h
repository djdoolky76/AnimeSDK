#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"

class JCADHFOKIHK;

#define MCMNCOJGMIM_BBHOBCECLEO_OFFSET UNITYSDK_OFFSET(0x7CD650)
#define MCMNCOJGMIM__CTOR_OFFSET UNITYSDK_OFFSET(0x7CD640)

inline static constexpr unsigned int MCMNCOJGMIM_TypeDefinitionIndex = 92931;

struct alignas(4) MCMNCOJGMIM
{
	::MoleMole::EntityHandle BFDPPMDEOFF; // 0x10
	::System::Int32 OCILHPIHLOF; // 0x20

	::System::Void _ctor(::JCADHFOKIHK* PEDHJPALABK)
	{
		return ((::System::Void(*)(::PVOID, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MCMNCOJGMIM__CTOR_OFFSET))(this, PEDHJPALABK);
	}

	::JCADHFOKIHK* BBHOBCECLEO()
	{
		return ((::JCADHFOKIHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCMNCOJGMIM_BBHOBCECLEO_OFFSET))(this);
	}
};
