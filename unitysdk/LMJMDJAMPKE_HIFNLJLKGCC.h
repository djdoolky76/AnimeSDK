#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/LMJMDJAMPKE_AAHIEPCFDBO.h"
#include "unitysdk/LMJMDJAMPKE_HIFNLJLKGCC_DHOLLIBLDCJ.h"
#include "unitysdk/LMJMDJAMPKE_HIFNLJLKGCC_KPKMJGJDBBK.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/FocusUISpecialIconParam.h"
#include "unitysdk/System/Object.h"

class NLANCPLMPLB;
namespace MoleMole::Config { class NamePanelTrait; }
namespace System { class String; }

#define LMJMDJAMPKE_HIFNLJLKGCC_CBBOHEEIJEK_OFFSET UNITYSDK_OFFSET(0x12D44500)
#define LMJMDJAMPKE_HIFNLJLKGCC_FANCCAMFJPJ_OFFSET UNITYSDK_OFFSET(0x12D445E0)
#define LMJMDJAMPKE_HIFNLJLKGCC_KDAKHBHMOGF_OFFSET UNITYSDK_OFFSET(0x12D44510)
#define LMJMDJAMPKE_HIFNLJLKGCC_OABCIEFJEEI_OFFSET UNITYSDK_OFFSET(0x12D44600)
#define LMJMDJAMPKE_HIFNLJLKGCC_OCMPACOIKFF_OFFSET UNITYSDK_OFFSET(0x12D445F0)
#define LMJMDJAMPKE_HIFNLJLKGCC__CTOR_OFFSET UNITYSDK_OFFSET(0x12D444F0)

inline static constexpr unsigned int LMJMDJAMPKE_HIFNLJLKGCC_TypeDefinitionIndex = 64190;

class LMJMDJAMPKE_HIFNLJLKGCC : public ::System::Object
{
public:
	::NLANCPLMPLB* _IIOGCIKOJKK_k__BackingField; // 0x10
	::Foundation::AssetPath LGBJEHNICJM; // 0x18
	::Foundation::AssetPath MKNCIIJMIBC; // 0x28
	::System::String* COGEECMGJBB; // 0x38
	::MoleMole::Config::NamePanelTrait* _OHEFMFFCIHH_k__BackingField; // 0x40
	::System::String* GLMEMFAAPAF; // 0x48
	::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam LJPGDMGIOBL; // 0x50
	::System::Boolean NHIPOGLMBOG; // 0x60
	::System::Byte _padding0[0x3];
	::System::UInt32 NJNCGJLHLKC; // 0x64
	::System::Int32 CEFPFEHHJHB; // 0x68
	::LMJMDJAMPKE_AAHIEPCFDBO OFCAKJIAKDJ; // 0x6C
	::LMJMDJAMPKE_HIFNLJLKGCC_DHOLLIBLDCJ AICLEHBHBOO; // 0x70
	::LMJMDJAMPKE_HIFNLJLKGCC_KPKMJGJDBBK DCBCAODIJHP; // 0x74

	::System::Void _ctor(::System::UInt32 MABEMNLICHK)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LMJMDJAMPKE_HIFNLJLKGCC__CTOR_OFFSET))(this, MABEMNLICHK);
	}

	::NLANCPLMPLB* CBBOHEEIJEK()
	{
		return ((::NLANCPLMPLB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMJMDJAMPKE_HIFNLJLKGCC_CBBOHEEIJEK_OFFSET))(this);
	}

	::LMJMDJAMPKE_HIFNLJLKGCC* KDAKHBHMOGF()
	{
		return ((::LMJMDJAMPKE_HIFNLJLKGCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMJMDJAMPKE_HIFNLJLKGCC_KDAKHBHMOGF_OFFSET))(this);
	}

	::MoleMole::Config::NamePanelTrait* FANCCAMFJPJ()
	{
		return ((::MoleMole::Config::NamePanelTrait*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMJMDJAMPKE_HIFNLJLKGCC_FANCCAMFJPJ_OFFSET))(this);
	}

	::System::Void OCMPACOIKFF(::MoleMole::Config::NamePanelTrait* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::NamePanelTrait*))((::PBYTE)hIl2Cpp + LMJMDJAMPKE_HIFNLJLKGCC_OCMPACOIKFF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void OABCIEFJEEI(::NLANCPLMPLB* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::NLANCPLMPLB*))((::PBYTE)hIl2Cpp + LMJMDJAMPKE_HIFNLJLKGCC_OABCIEFJEEI_OFFSET))(this, EGEGIMGMJHN);
	}
};
