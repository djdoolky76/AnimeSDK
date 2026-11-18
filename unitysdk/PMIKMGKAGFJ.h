#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLGMMOFGMAP.h"
#include "unitysdk/DJFGDPFPPOD.h"
#include "unitysdk/FLMJPFJKBGG.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define PMIKMGKAGFJ_AFCMCJLGJDL_OFFSET UNITYSDK_OFFSET(0x1D632A70)
#define PMIKMGKAGFJ_BMGMBKGNMDI_OFFSET UNITYSDK_OFFSET(0x1D632A40)
#define PMIKMGKAGFJ_EPEGKMMLHLJ_OFFSET UNITYSDK_OFFSET(0x1D632F50)
#define PMIKMGKAGFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1D632A50)

inline static constexpr unsigned int PMIKMGKAGFJ_TypeDefinitionIndex = 41876;

class PMIKMGKAGFJ : public ::FLMJPFJKBGG
{
public:
	::UnityEngine::Transform* FLPIAIICMOG; // 0x28
	::BLGMMOFGMAP IHGCJDANJKE; // 0x30
	::UnityEngine::Camera* IOENKICNNME; // 0x40
	::BLGMMOFGMAP JAECJJIEPKN; // 0x48
	::UnityEngine::Transform* HEHCCHKAAJF; // 0x58
	::System::Int32 IGIICAJEGJC; // 0x60

	::System::Void _ctor(::UnityEngine::Camera* IOENKICNNME, ::BLGMMOFGMAP ENIEOFHIMCB, ::BLGMMOFGMAP JMCHDCPCEGN, ::System::Int32 OGIHENKICBP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::BLGMMOFGMAP, ::BLGMMOFGMAP, ::System::Int32))((::PBYTE)hIl2Cpp + PMIKMGKAGFJ__CTOR_OFFSET))(this, IOENKICNNME, ENIEOFHIMCB, JMCHDCPCEGN, OGIHENKICBP);
	}

	::DJFGDPFPPOD BMGMBKGNMDI()
	{
		return ((::DJFGDPFPPOD(*)(::PVOID))((::PBYTE)hIl2Cpp + PMIKMGKAGFJ_BMGMBKGNMDI_OFFSET))(this);
	}

	::System::Boolean AFCMCJLGJDL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PMIKMGKAGFJ_AFCMCJLGJDL_OFFSET))(this);
	}

	::System::Boolean EPEGKMMLHLJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PMIKMGKAGFJ_EPEGKMMLHLJ_OFFSET))(this);
	}
};
