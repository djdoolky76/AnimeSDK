#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ALLILHAJFKJ.h"

class HFEDNAJAAMJ;
namespace MoleMole { class UICinemaInviteRoleItemWidgetController; }

#define MOGLNKNAJPM_BDJFEEPLCGA_OFFSET UNITYSDK_OFFSET(0x16CACA50)
#define MOGLNKNAJPM_EBFFDLHNBAF_OFFSET UNITYSDK_OFFSET(0x16CAC920)
#define MOGLNKNAJPM_FNBFIKACEEF_OFFSET UNITYSDK_OFFSET(0x16CACAA0)
#define MOGLNKNAJPM_FPNGPBAONJC_OFFSET UNITYSDK_OFFSET(0x16CAC8C0)
#define MOGLNKNAJPM_HAEEPMMHBGJ_OFFSET UNITYSDK_OFFSET(0x16CAC9B0)
#define MOGLNKNAJPM__CTOR_OFFSET UNITYSDK_OFFSET(0x16CAC910)

inline static constexpr unsigned int MOGLNKNAJPM_TypeDefinitionIndex = 41028;

class MOGLNKNAJPM : public ::ALLILHAJFKJ
{
public:
	::MoleMole::UICinemaInviteRoleItemWidgetController* LILGIMLBBPH; // 0x20
	::HFEDNAJAAMJ* LMDKIMHPMAJ; // 0x28
	::System::Boolean LIEJIGMGGOL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGLNKNAJPM__CTOR_OFFSET))(this);
	}

	::System::Boolean FPNGPBAONJC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGLNKNAJPM_FPNGPBAONJC_OFFSET))(this);
	}

	::System::Boolean EBFFDLHNBAF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGLNKNAJPM_EBFFDLHNBAF_OFFSET))(this);
	}

	::System::Void HAEEPMMHBGJ(::System::Boolean LIEJIGMGGOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOGLNKNAJPM_HAEEPMMHBGJ_OFFSET))(this, LIEJIGMGGOL);
	}

	::System::Void BDJFEEPLCGA(::MoleMole::UICinemaInviteRoleItemWidgetController* LILGIMLBBPH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UICinemaInviteRoleItemWidgetController*))((::PBYTE)hIl2Cpp + MOGLNKNAJPM_BDJFEEPLCGA_OFFSET))(this, LILGIMLBBPH);
	}

	::System::Void FNBFIKACEEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGLNKNAJPM_FNBFIKACEEF_OFFSET))(this);
	}
};
