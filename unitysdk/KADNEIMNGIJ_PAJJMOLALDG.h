#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

class GGPBDIEHGOO;
class KADNEIMNGIJ_MBKGDLKNMLO;
class MPKBDIJDMAP;
namespace MoleMole { class BlendTextureSheetDataItem; }

#define KADNEIMNGIJ_PAJJMOLALDG_CONGBIHKLGC_OFFSET UNITYSDK_OFFSET(0x152B8180)
#define KADNEIMNGIJ_PAJJMOLALDG__CTOR_OFFSET UNITYSDK_OFFSET(0x152B8170)

inline static constexpr unsigned int KADNEIMNGIJ_PAJJMOLALDG_TypeDefinitionIndex = 72642;

class KADNEIMNGIJ_PAJJMOLALDG : public ::System::Object
{
public:
	::GGPBDIEHGOO* CNAJIEKLJBF; // 0x10
	::MoleMole::BlendTextureSheetDataItem* IMJJOOKKMFK; // 0x18
	::KADNEIMNGIJ_MBKGDLKNMLO* EEMOEMFLABI; // 0x20
	::UnityEngine::Vector4 HDPGPBNINGA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KADNEIMNGIJ_PAJJMOLALDG__CTOR_OFFSET))(this);
	}

	::System::Void CONGBIHKLGC(::MPKBDIJDMAP* JNDDJMAHNAI)
	{
		return ((::System::Void(*)(::PVOID, ::MPKBDIJDMAP*))((::PBYTE)hIl2Cpp + KADNEIMNGIJ_PAJJMOLALDG_CONGBIHKLGC_OFFSET))(this, JNDDJMAHNAI);
	}
};
