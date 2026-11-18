#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FGMNLBKPDNB.h"
#include "unitysdk/MoleMole/Battle/MaterialPropertyModifierExtraParams.h"
#include "unitysdk/NCCKMEOKAJK.h"

class HACAMEGIBJA;
class HNJAIELBJFE;
namespace MoleMole::Config { class RenderMaterial; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BEOFJHJNOLE_DLMLJHDDIME_OFFSET UNITYSDK_OFFSET(0x17021E10)
#define BEOFJHJNOLE_GGCJAIJMMHJ_OFFSET UNITYSDK_OFFSET(0x17021EA0)
#define BEOFJHJNOLE__CTOR_OFFSET UNITYSDK_OFFSET(0x17021D60)

inline static constexpr unsigned int BEOFJHJNOLE_TypeDefinitionIndex = 75475;

class BEOFJHJNOLE : public ::FGMNLBKPDNB
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* PMBPGIMGOHL; // 0x10
	::HNJAIELBJFE* CBBEJBGIAKA; // 0x18
	::MoleMole::Battle::MaterialPropertyModifierExtraParams MLBBLMOKCLF; // 0x20

	::System::Void _ctor(::HNJAIELBJFE* HHIJHDFHPOI)
	{
		return ((::System::Void(*)(::PVOID, ::HNJAIELBJFE*))((::PBYTE)hIl2Cpp + BEOFJHJNOLE__CTOR_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void GGCJAIJMMHJ(::NCCKMEOKAJK& HBMGHPEPBNC)
	{
		return ((::System::Void(*)(::PVOID, ::NCCKMEOKAJK&))((::PBYTE)hIl2Cpp + BEOFJHJNOLE_GGCJAIJMMHJ_OFFSET))(this, HBMGHPEPBNC);
	}

	static ::MoleMole::Battle::MaterialPropertyModifierExtraParams DLMLJHDDIME(::HACAMEGIBJA* DFMKILICPFB)
	{
		return ((::MoleMole::Battle::MaterialPropertyModifierExtraParams(*)(::HACAMEGIBJA*))((::PBYTE)hIl2Cpp + BEOFJHJNOLE_DLMLJHDDIME_OFFSET))(DFMKILICPFB);
	}
};
