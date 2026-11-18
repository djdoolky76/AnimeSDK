#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PGFBGFBDBAH_EJDFNIFFLLN;
namespace MoleMole { class UIUrbanMapRightStreetInfoController_Collect; }

#define PGFBGFBDBAH_EKKMMDEOJDL_GPIEGICONNG_OFFSET UNITYSDK_OFFSET(0xFDB77E0)
#define PGFBGFBDBAH_EKKMMDEOJDL__CTOR_OFFSET UNITYSDK_OFFSET(0xFDB77D0)

inline static constexpr unsigned int PGFBGFBDBAH_EKKMMDEOJDL_TypeDefinitionIndex = 46100;

class PGFBGFBDBAH_EKKMMDEOJDL : public ::System::Object
{
public:
	::PGFBGFBDBAH_EJDFNIFFLLN* MFOCAFMBBGM; // 0x10
	::MoleMole::UIUrbanMapRightStreetInfoController_Collect* NCIMBHDKIJM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_EKKMMDEOJDL__CTOR_OFFSET))(this);
	}

	::System::Void GPIEGICONNG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_EKKMMDEOJDL_GPIEGICONNG_OFFSET))(this);
	}
};
