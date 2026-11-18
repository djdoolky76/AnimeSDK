#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MELDNFKKBME.h"

#define MFNHFMCALFE__CTOR_OFFSET UNITYSDK_OFFSET(0x14052180)

inline static constexpr unsigned int MFNHFMCALFE_TypeDefinitionIndex = 40295;

class MFNHFMCALFE : public ::MELDNFKKBME
{
public:
	// static const ::System::Int32 EHFFMDGCNGB = 0x0; // 0x0
	// static const ::System::Int32 OCLDHJIJMDE = 0x1; // 0x0
	::System::Int32 NOOLOILNGPL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFNHFMCALFE__CTOR_OFFSET))(this);
	}
};
