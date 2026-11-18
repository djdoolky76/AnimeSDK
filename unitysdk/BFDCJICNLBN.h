#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MHFGFMELFLB;

#define BFDCJICNLBN_GAIGKHOBBPA_OFFSET UNITYSDK_OFFSET(0x1424C150)
#define BFDCJICNLBN__CTOR_OFFSET UNITYSDK_OFFSET(0x1424C140)

inline static constexpr unsigned int BFDCJICNLBN_TypeDefinitionIndex = 47547;

class BFDCJICNLBN : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFDCJICNLBN__CTOR_OFFSET))(this);
	}

	static ::System::Void GAIGKHOBBPA(::MHFGFMELFLB* BBGGFOPDICP)
	{
		return ((::System::Void(*)(::MHFGFMELFLB*))((::PBYTE)hIl2Cpp + BFDCJICNLBN_GAIGKHOBBPA_OFFSET))(BBGGFOPDICP);
	}
};
