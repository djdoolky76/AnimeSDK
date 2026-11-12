#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGJEMEHMBNL.h"
#include "unitysdk/UnityEngine/Vector3.h"
class NAOKFLDEDBJ;
namespace RPG::GameCore { class HalfBoomerangWithDetectProjectileData; }
namespace UnityEngine { class Collider; }

#define NFELCAIEKEF_CTOR_OFFSET UNITYSDK_OFFSET(0xC456DF0)
#define NFELCAIEKEF_GOLCDGNLEKL_OFFSET UNITYSDK_OFFSET(0xC457560)
#define NFELCAIEKEF_IDLJDKPJEBG_OFFSET UNITYSDK_OFFSET(0xC457BA0)
#define NFELCAIEKEF_KFLNENIGDIN_OFFSET UNITYSDK_OFFSET(0xC457190)
#define NFELCAIEKEF_LHDIJEEEKEJ_OFFSET UNITYSDK_OFFSET(0xC4572B0)
#define NFELCAIEKEF_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xC456FF0)
#define NFELCAIEKEF_NNALPNDFFIJ_OFFSET UNITYSDK_OFFSET(0xC457060)
#define NFELCAIEKEF_PGKPGNJJMMB_OFFSET UNITYSDK_OFFSET(0xC457490)

inline static constexpr unsigned int NFELCAIEKEF_TypeDefinitionIndex = 55911;

	class NFELCAIEKEF : public ::GGJEMEHMBNL
	{
	public:
		::UnityEngine::Collider* PAKKIDHJAPI; // 0x48
		::RPG::GameCore::HalfBoomerangWithDetectProjectileData* FPGPHIEOMFL; // 0x50
		::System::Single HKNNPAFJAAO; // 0x58
		::UnityEngine::Vector3 OOECFAKCPIL; // 0x5C
		::System::Boolean GCFHHOLDLAB; // 0x68
		::System::Byte _padding0[0x3];
		::System::Single OFBOHEOLCCE; // 0x6C
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
