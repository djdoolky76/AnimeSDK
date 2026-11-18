#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLGMMOFGMAP.h"
#include "unitysdk/DJFGDPFPPOD.h"
#include "unitysdk/FLMJPFJKBGG.h"
#include "unitysdk/IKNGCMPAFNF.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define DHKGMNBPMDP_AFCMCJLGJDL_OFFSET UNITYSDK_OFFSET(0x15A47150)
#define DHKGMNBPMDP_BMGMBKGNMDI_OFFSET UNITYSDK_OFFSET(0x15A47110)
#define DHKGMNBPMDP_EPEGKMMLHLJ_OFFSET UNITYSDK_OFFSET(0x15A47650)
#define DHKGMNBPMDP__CTOR_OFFSET UNITYSDK_OFFSET(0x15A47120)

inline static constexpr unsigned int DHKGMNBPMDP_TypeDefinitionIndex = 47132;

class DHKGMNBPMDP : public ::FLMJPFJKBGG
{
public:
	::UnityEngine::Transform* FLPIAIICMOG; // 0x28
	::UnityEngine::Transform* HEHCCHKAAJF; // 0x30
	::BLGMMOFGMAP JAECJJIEPKN; // 0x38
	::BLGMMOFGMAP IHGCJDANJKE; // 0x48
	::UnityEngine::Camera* IOENKICNNME; // 0x58
	::System::Int32 BCDHPKAHJDP; // 0x60
	::IKNGCMPAFNF CEHGFFDBHOJ; // 0x64

	::System::Void _ctor(::UnityEngine::Camera* IOENKICNNME, ::BLGMMOFGMAP ENIEOFHIMCB, ::BLGMMOFGMAP JMCHDCPCEGN, ::IKNGCMPAFNF JBCNPOHMGPE, ::System::Int32 NEEGKNOOOLI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::BLGMMOFGMAP, ::BLGMMOFGMAP, ::IKNGCMPAFNF, ::System::Int32))((::PBYTE)hIl2Cpp + DHKGMNBPMDP__CTOR_OFFSET))(this, IOENKICNNME, ENIEOFHIMCB, JMCHDCPCEGN, JBCNPOHMGPE, NEEGKNOOOLI);
	}

	::DJFGDPFPPOD BMGMBKGNMDI()
	{
		return ((::DJFGDPFPPOD(*)(::PVOID))((::PBYTE)hIl2Cpp + DHKGMNBPMDP_BMGMBKGNMDI_OFFSET))(this);
	}

	::System::Boolean AFCMCJLGJDL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DHKGMNBPMDP_AFCMCJLGJDL_OFFSET))(this);
	}

	::System::Boolean EPEGKMMLHLJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DHKGMNBPMDP_EPEGKMMLHLJ_OFFSET))(this);
	}
};
