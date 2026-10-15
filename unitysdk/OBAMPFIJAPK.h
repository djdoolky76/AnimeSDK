#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGJEMEHMBNL.h"
#include "unitysdk/UnityEngine/Vector3.h"
class NAOKFLDEDBJ;
namespace RPG::GameCore { class BoomerangProjectileData; }

#define OBAMPFIJAPK_CTOR_OFFSET UNITYSDK_OFFSET(0xBD32420)
#define OBAMPFIJAPK_GOLCDGNLEKL_OFFSET UNITYSDK_OFFSET(0xBD32940)
#define OBAMPFIJAPK_IDLJDKPJEBG_OFFSET UNITYSDK_OFFSET(0xBD32F70)
#define OBAMPFIJAPK_LHDIJEEEKEJ_OFFSET UNITYSDK_OFFSET(0xBD32620)
#define OBAMPFIJAPK_PGKPGNJJMMB_OFFSET UNITYSDK_OFFSET(0xBD32800)

	class OBAMPFIJAPK : public ::GGJEMEHMBNL
	{
	public:
		::RPG::GameCore::BoomerangProjectileData* FPGPHIEOMFL; // 0x48
		::System::Single HKNNPAFJAAO; // 0x50
		::UnityEngine::Vector3 OOECFAKCPIL; // 0x54
		::System::Single OFBOHEOLCCE; // 0x60
		::System::Void _ctor(::NAOKFLDEDBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAOKFLDEDBJ*))((::PBYTE)hIl2Cpp + OBAMPFIJAPK_CTOR_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 LHDIJEEEKEJ()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAMPFIJAPK_LHDIJEEEKEJ_OFFSET))(this);
		}

		::System::Void PGKPGNJJMMB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OBAMPFIJAPK_PGKPGNJJMMB_OFFSET))(this, a1);
		}

		::System::Void GOLCDGNLEKL(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + OBAMPFIJAPK_GOLCDGNLEKL_OFFSET))(this, a1, a2);
		}

		::System::Void IDLJDKPJEBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAMPFIJAPK_IDLJDKPJEBG_OFFSET))(this);
		}

	};
