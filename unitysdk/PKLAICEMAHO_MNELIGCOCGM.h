#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PKLAICEMAHO;

#define PKLAICEMAHO_MNELIGCOCGM_MODLGENBCOP_OFFSET UNITYSDK_OFFSET(0x1371C220)
#define PKLAICEMAHO_MNELIGCOCGM__CTOR_OFFSET UNITYSDK_OFFSET(0x1371C210)

inline static constexpr unsigned int PKLAICEMAHO_MNELIGCOCGM_TypeDefinitionIndex = 89079;

class PKLAICEMAHO_MNELIGCOCGM : public ::System::Object
{
public:
	::PKLAICEMAHO* KLHPEBKNIFB; // 0x10
	::System::Int32 MCMBMPMOOLP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLAICEMAHO_MNELIGCOCGM__CTOR_OFFSET))(this);
	}

	::System::Void MODLGENBCOP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLAICEMAHO_MNELIGCOCGM_MODLGENBCOP_OFFSET))(this);
	}
};
