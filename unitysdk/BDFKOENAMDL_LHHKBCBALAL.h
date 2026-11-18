#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IBENDELLLAO;

#define BDFKOENAMDL_LHHKBCBALAL_GJIKJNBNMEG_OFFSET UNITYSDK_OFFSET(0x18665FE0)
#define BDFKOENAMDL_LHHKBCBALAL_LJGJIDOEMAC_OFFSET UNITYSDK_OFFSET(0x18665FA0)
#define BDFKOENAMDL_LHHKBCBALAL__CTOR_OFFSET UNITYSDK_OFFSET(0x18665F90)

inline static constexpr unsigned int BDFKOENAMDL_LHHKBCBALAL_TypeDefinitionIndex = 58586;

class BDFKOENAMDL_LHHKBCBALAL : public ::System::Object
{
public:
	::IBENDELLLAO* NKPMNJFEMMK; // 0x10
	::System::Int32 NAKOHNKDGJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDFKOENAMDL_LHHKBCBALAL__CTOR_OFFSET))(this);
	}

	::System::Void LJGJIDOEMAC(::System::Int32 POKELHACLAE, ::System::Int32 GALMEKPFIKN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BDFKOENAMDL_LHHKBCBALAL_LJGJIDOEMAC_OFFSET))(this, POKELHACLAE, GALMEKPFIKN);
	}

	::System::Void GJIKJNBNMEG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDFKOENAMDL_LHHKBCBALAL_GJIKJNBNMEG_OFFSET))(this);
	}
};
