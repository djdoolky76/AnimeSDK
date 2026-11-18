#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace DG::Tweening { class Tween; }
namespace MoleMole::SceneMark { class StageTweenAnimData; }

#define GFEAAEGGBPJ_AGMBGKFIHKP_OFFSET UNITYSDK_OFFSET(0x65FC40)
#define GFEAAEGGBPJ_DDHKGLDILDH_OFFSET UNITYSDK_OFFSET(0x65FBC0)
#define GFEAAEGGBPJ_DOCGMAIMGNJ_OFFSET UNITYSDK_OFFSET(0x65FBD0)
#define GFEAAEGGBPJ_ECEBDPJEKNN_OFFSET UNITYSDK_OFFSET(0x65FBB0)
#define GFEAAEGGBPJ_GPKMPDHNCGL_OFFSET UNITYSDK_OFFSET(0x65FC50)
#define GFEAAEGGBPJ_ILOJMDIKEED_OFFSET UNITYSDK_OFFSET(0x65FBE0)
#define GFEAAEGGBPJ_KCEICHCECFF_OFFSET UNITYSDK_OFFSET(0x65FB50)
#define GFEAAEGGBPJ_KCOKAPJJOKL_OFFSET UNITYSDK_OFFSET(0x65FCA0)
#define GFEAAEGGBPJ_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x65FCB0)
#define GFEAAEGGBPJ_MFFEICNIILI_OFFSET UNITYSDK_OFFSET(0x65FB40)

inline static constexpr unsigned int GFEAAEGGBPJ_TypeDefinitionIndex = 57883;

struct alignas(8) GFEAAEGGBPJ
{
	::MoleMole::SceneMark::StageTweenAnimData* OLMDGDMMCMO; // 0x10

	::System::Void MFFEICNIILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFEAAEGGBPJ_MFFEICNIILI_OFFSET))(this);
	}

	::System::Boolean KCEICHCECFF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFEAAEGGBPJ_KCEICHCECFF_OFFSET))(this);
	}

	::System::Void ECEBDPJEKNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFEAAEGGBPJ_ECEBDPJEKNN_OFFSET))(this);
	}

	::System::Boolean DDHKGLDILDH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFEAAEGGBPJ_DDHKGLDILDH_OFFSET))(this);
	}

	::System::Boolean DOCGMAIMGNJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFEAAEGGBPJ_DOCGMAIMGNJ_OFFSET))(this);
	}

	::DG::Tweening::Tween* ILOJMDIKEED()
	{
		return ((::DG::Tweening::Tween*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFEAAEGGBPJ_ILOJMDIKEED_OFFSET))(this);
	}

	::System::Void AGMBGKFIHKP(::System::Single CAOPDAMCNCN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GFEAAEGGBPJ_AGMBGKFIHKP_OFFSET))(this, CAOPDAMCNCN);
	}

	::System::Boolean GPKMPDHNCGL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFEAAEGGBPJ_GPKMPDHNCGL_OFFSET))(this);
	}

	::System::Boolean KCOKAPJJOKL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFEAAEGGBPJ_KCOKAPJJOKL_OFFSET))(this);
	}

	::System::Void LCJEELHBNHG(::System::Single CAOPDAMCNCN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GFEAAEGGBPJ_LCJEELHBNHG_OFFSET))(this, CAOPDAMCNCN);
	}
};
