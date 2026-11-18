#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PGFBGFBDBAH_ABNDAEDJCND;
namespace MoleMole { class UrbanMapRightBangkovController; }

#define PGFBGFBDBAH_MGMIIDOABKB_DDGIFBOFMEC_OFFSET UNITYSDK_OFFSET(0x1C1D2CE0)
#define PGFBGFBDBAH_MGMIIDOABKB_HLGJNNLKAAD_OFFSET UNITYSDK_OFFSET(0x1C1D2C90)
#define PGFBGFBDBAH_MGMIIDOABKB_JAAFJLENAGP_OFFSET UNITYSDK_OFFSET(0x1C1D2C40)
#define PGFBGFBDBAH_MGMIIDOABKB__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1D2C30)

inline static constexpr unsigned int PGFBGFBDBAH_MGMIIDOABKB_TypeDefinitionIndex = 46117;

class PGFBGFBDBAH_MGMIIDOABKB : public ::System::Object
{
public:
	::PGFBGFBDBAH_ABNDAEDJCND* FGBNBFHOKAA; // 0x10
	::MoleMole::UrbanMapRightBangkovController* NCIMBHDKIJM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_MGMIIDOABKB__CTOR_OFFSET))(this);
	}

	::System::Void JAAFJLENAGP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_MGMIIDOABKB_JAAFJLENAGP_OFFSET))(this);
	}

	::System::Void HLGJNNLKAAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_MGMIIDOABKB_HLGJNNLKAAD_OFFSET))(this);
	}

	::System::Void DDGIFBOFMEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_MGMIIDOABKB_DDGIFBOFMEC_OFFSET))(this);
	}
};
