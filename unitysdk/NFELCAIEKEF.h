#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGJEMEHMBNL.h"
#include "unitysdk/UnityEngine/Vector3.h"
class NAOKFLDEDBJ;
namespace RPG::GameCore { class HalfBoomerangWithDetectProjectileData; }
namespace UnityEngine { class Collider; }

#define NFELCAIEKEF_CTOR_OFFSET UNITYSDK_OFFSET(0xBB7D1D0)
#define NFELCAIEKEF_GOLCDGNLEKL_OFFSET UNITYSDK_OFFSET(0xBB7D940)
#define NFELCAIEKEF_IDLJDKPJEBG_OFFSET UNITYSDK_OFFSET(0xBB7DF80)
#define NFELCAIEKEF_KFLNENIGDIN_OFFSET UNITYSDK_OFFSET(0xBB7D570)
#define NFELCAIEKEF_LHDIJEEEKEJ_OFFSET UNITYSDK_OFFSET(0xBB7D690)
#define NFELCAIEKEF_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xBB7D3D0)
#define NFELCAIEKEF_NNALPNDFFIJ_OFFSET UNITYSDK_OFFSET(0xBB7D440)
#define NFELCAIEKEF_PGKPGNJJMMB_OFFSET UNITYSDK_OFFSET(0xBB7D870)

	class NFELCAIEKEF : public ::GGJEMEHMBNL
	{
	public:
		::RPG::GameCore::HalfBoomerangWithDetectProjectileData* FPGPHIEOMFL; // 0x48
		::UnityEngine::Collider* PAKKIDHJAPI; // 0x50
		::System::Single OFBOHEOLCCE; // 0x58
		::System::Single HKNNPAFJAAO; // 0x5C
		::System::Boolean GCFHHOLDLAB; // 0x60
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 OOECFAKCPIL; // 0x64
		::System::Void _ctor(::NAOKFLDEDBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAOKFLDEDBJ*))((::PBYTE)hIl2Cpp + NFELCAIEKEF_CTOR_OFFSET))(this, a1);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFELCAIEKEF_MGFLFCHMGPA_OFFSET))(this);
		}

		::UnityEngine::Vector3 NNALPNDFFIJ()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NFELCAIEKEF_NNALPNDFFIJ_OFFSET))(this);
		}

		::System::Void KFLNENIGDIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFELCAIEKEF_KFLNENIGDIN_OFFSET))(this);
		}

		::UnityEngine::Vector3 LHDIJEEEKEJ()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NFELCAIEKEF_LHDIJEEEKEJ_OFFSET))(this);
		}

		::System::Void PGKPGNJJMMB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NFELCAIEKEF_PGKPGNJJMMB_OFFSET))(this, a1);
		}

		::System::Void GOLCDGNLEKL(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + NFELCAIEKEF_GOLCDGNLEKL_OFFSET))(this, a1, a2);
		}

		::System::Void IDLJDKPJEBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFELCAIEKEF_IDLJDKPJEBG_OFFSET))(this);
		}

	};
