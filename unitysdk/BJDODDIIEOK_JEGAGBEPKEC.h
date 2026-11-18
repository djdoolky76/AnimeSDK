#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BJDODDIIEOK;

#define BJDODDIIEOK_JEGAGBEPKEC_DFEHFKAKJDJ_OFFSET UNITYSDK_OFFSET(0x1507C4B0)
#define BJDODDIIEOK_JEGAGBEPKEC__CTOR_OFFSET UNITYSDK_OFFSET(0x1507C4A0)

inline static constexpr unsigned int BJDODDIIEOK_JEGAGBEPKEC_TypeDefinitionIndex = 58515;

class BJDODDIIEOK_JEGAGBEPKEC : public ::System::Object
{
public:
	::BJDODDIIEOK* KLHPEBKNIFB; // 0x10
	::System::Boolean IAOJECCOMPN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJDODDIIEOK_JEGAGBEPKEC__CTOR_OFFSET))(this);
	}

	::System::Void DFEHFKAKJDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJDODDIIEOK_JEGAGBEPKEC_DFEHFKAKJDJ_OFFSET))(this);
	}
};
