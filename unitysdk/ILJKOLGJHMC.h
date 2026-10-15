#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGJEMEHMBNL.h"
#include "unitysdk/UnityEngine/Vector3.h"
class NAOKFLDEDBJ;
namespace RPG::GameCore { class LinearWithDetectProjectileData; }
namespace UnityEngine { class Collider; }

#define ILJKOLGJHMC_CTOR_OFFSET UNITYSDK_OFFSET(0x164C0B20)
#define ILJKOLGJHMC_GET_FIRSTFRAMEOCCLUSION_OFFSET UNITYSDK_OFFSET(0x164C18A0)
#define ILJKOLGJHMC_GOLCDGNLEKL_OFFSET UNITYSDK_OFFSET(0x164C1210)
#define ILJKOLGJHMC_KFLNENIGDIN_OFFSET UNITYSDK_OFFSET(0x164C0FC0)
#define ILJKOLGJHMC_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0x164C0B80)
#define ILJKOLGJHMC_PGKPGNJJMMB_OFFSET UNITYSDK_OFFSET(0x164C10E0)
#define ILJKOLGJHMC_SET_FIRSTFRAMEOCCLUSION_OFFSET UNITYSDK_OFFSET(0x164C18B0)

inline static constexpr unsigned int ILJKOLGJHMC_TypeDefinitionIndex = 54746;

	class ILJKOLGJHMC : public ::GGJEMEHMBNL
	{
	public:
		::UnityEngine::Collider* PAKKIDHJAPI; // 0x48
		::RPG::GameCore::LinearWithDetectProjectileData* FPGPHIEOMFL; // 0x50
		::System::Boolean _FirstFrameOcclusion_k__BackingField; // 0x58
		::System::Boolean GCFHHOLDLAB; // 0x59
		::System::Byte _padding0[0x2];
		::System::Single KGBDNGJFPGM; // 0x5C
		::System::Single GDKPNPHFMAJ; // 0x60
		::UnityEngine::Vector3 PLJPILHHGAL; // 0x64
		::System::Single FKNJJCMGEGL; // 0x70
		::System::Single LDLDMGFBGAI; // 0x74
		::System::Void _ctor(::NAOKFLDEDBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAOKFLDEDBJ*))((::PBYTE)hIl2Cpp + ILJKOLGJHMC_CTOR_OFFSET))(this, a1);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILJKOLGJHMC_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void KFLNENIGDIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILJKOLGJHMC_KFLNENIGDIN_OFFSET))(this);
		}

		::System::Void PGKPGNJJMMB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ILJKOLGJHMC_PGKPGNJJMMB_OFFSET))(this, a1);
		}

		::System::Void GOLCDGNLEKL(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + ILJKOLGJHMC_GOLCDGNLEKL_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_FirstFrameOcclusion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILJKOLGJHMC_GET_FIRSTFRAMEOCCLUSION_OFFSET))(this);
		}

		::System::Void set_FirstFrameOcclusion(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ILJKOLGJHMC_SET_FIRSTFRAMEOCCLUSION_OFFSET))(this, a1);
		}

	};
