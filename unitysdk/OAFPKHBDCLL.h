#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGJEMEHMBNL.h"
class NAOKFLDEDBJ;
namespace RPG::GameCore { class StaticProjectileData; }

#define OAFPKHBDCLL_CTOR_OFFSET UNITYSDK_OFFSET(0xBD20230)
#define OAFPKHBDCLL_GOLCDGNLEKL_OFFSET UNITYSDK_OFFSET(0xBD20EF0)
#define OAFPKHBDCLL_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xBD20290)
#define OAFPKHBDCLL_PGKPGNJJMMB_OFFSET UNITYSDK_OFFSET(0xBD20FF0)

	class OAFPKHBDCLL : public ::GGJEMEHMBNL
	{
	public:
		::RPG::GameCore::StaticProjectileData* HNKAPDKPKHM; // 0x48
		::System::Void _ctor(::NAOKFLDEDBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAOKFLDEDBJ*))((::PBYTE)hIl2Cpp + OAFPKHBDCLL_CTOR_OFFSET))(this, a1);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFPKHBDCLL_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void GOLCDGNLEKL(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + OAFPKHBDCLL_GOLCDGNLEKL_OFFSET))(this, a1, a2);
		}

		::System::Void PGKPGNJJMMB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OAFPKHBDCLL_PGKPGNJJMMB_OFFSET))(this, a1);
		}

	};
