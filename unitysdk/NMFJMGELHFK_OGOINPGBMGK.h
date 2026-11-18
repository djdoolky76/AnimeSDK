#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LBGOAJOFOIO;
class NMFJMGELHFK_HIDMGCPDPBE;

#define NMFJMGELHFK_OGOINPGBMGK_IBHFKGBPDFC_OFFSET UNITYSDK_OFFSET(0x114ADE70)
#define NMFJMGELHFK_OGOINPGBMGK__CTOR_OFFSET UNITYSDK_OFFSET(0x114ADE60)

inline static constexpr unsigned int NMFJMGELHFK_OGOINPGBMGK_TypeDefinitionIndex = 53064;

class NMFJMGELHFK_OGOINPGBMGK : public ::System::Object
{
public:
	::NMFJMGELHFK_HIDMGCPDPBE* FGBNBFHOKAA; // 0x10
	::LBGOAJOFOIO* GPNFIJGMPPA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMFJMGELHFK_OGOINPGBMGK__CTOR_OFFSET))(this);
	}

	::System::Void IBHFKGBPDFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMFJMGELHFK_OGOINPGBMGK_IBHFKGBPDFC_OFFSET))(this);
	}
};
