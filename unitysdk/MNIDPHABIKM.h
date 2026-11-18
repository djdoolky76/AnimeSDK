#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AGIELBDPJBN;
class HKIELPFGJJA;

#define MNIDPHABIKM__CTOR_OFFSET UNITYSDK_OFFSET(0x16CAB1D0)

inline static constexpr unsigned int MNIDPHABIKM_TypeDefinitionIndex = 42833;

class MNIDPHABIKM : public ::System::Object
{
public:
	::AGIELBDPJBN* IJLGLMCDFLH; // 0x10
	::HKIELPFGJJA* GKHFBCBOAOM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIDPHABIKM__CTOR_OFFSET))(this);
	}
};
