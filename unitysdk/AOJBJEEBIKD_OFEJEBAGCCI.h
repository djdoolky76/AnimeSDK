#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AOJBJEEBIKD_IHBBFIMPHCP.h"

class AOJBJEEBIKD;
namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }

#define AOJBJEEBIKD_OFEJEBAGCCI_BHHFACFMDEJ_OFFSET UNITYSDK_OFFSET(0x113C8220)
#define AOJBJEEBIKD_OFEJEBAGCCI_CJPGBDMDBEF_OFFSET UNITYSDK_OFFSET(0x113C8410)
#define AOJBJEEBIKD_OFEJEBAGCCI__CTOR_OFFSET UNITYSDK_OFFSET(0x113C6DF0)

inline static constexpr unsigned int AOJBJEEBIKD_OFEJEBAGCCI_TypeDefinitionIndex = 90636;

class AOJBJEEBIKD_OFEJEBAGCCI : public ::System::Object
{
public:
	::AOJBJEEBIKD* KLHPEBKNIFB; // 0x10
	::MoleMole::Cameras::NapVirtualPipelineCamera* NNBIPFKGNMG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOJBJEEBIKD_OFEJEBAGCCI__CTOR_OFFSET))(this);
	}

	::System::Void BHHFACFMDEJ(::AOJBJEEBIKD_IHBBFIMPHCP OIFAGALBPHC)
	{
		return ((::System::Void(*)(::PVOID, ::AOJBJEEBIKD_IHBBFIMPHCP))((::PBYTE)hIl2Cpp + AOJBJEEBIKD_OFEJEBAGCCI_BHHFACFMDEJ_OFFSET))(this, OIFAGALBPHC);
	}

	::System::Void CJPGBDMDBEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOJBJEEBIKD_OFEJEBAGCCI_CJPGBDMDBEF_OFFSET))(this);
	}
};
