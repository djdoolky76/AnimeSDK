#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGJEMEHMBNL.h"
class NAOKFLDEDBJ;
namespace RPG::GameCore { class TraceWithDetectProjectileData; }
namespace UnityEngine { class Collider; }

#define ECPIKMPOLFL_CTOR_OFFSET UNITYSDK_OFFSET(0x186B08A0)
#define ECPIKMPOLFL_GOLCDGNLEKL_OFFSET UNITYSDK_OFFSET(0x186B0EE0)
#define ECPIKMPOLFL_KFLNENIGDIN_OFFSET UNITYSDK_OFFSET(0x186B0C30)
#define ECPIKMPOLFL_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0x186B0900)
#define ECPIKMPOLFL_PGKPGNJJMMB_OFFSET UNITYSDK_OFFSET(0x186B0DA0)

inline static constexpr unsigned int ECPIKMPOLFL_TypeDefinitionIndex = 55928;

	class ECPIKMPOLFL : public ::GGJEMEHMBNL
	{
	public:
		::UnityEngine::Collider* PAKKIDHJAPI; // 0x48
		::RPG::GameCore::TraceWithDetectProjectileData* FPGPHIEOMFL; // 0x50
		::System::Boolean CDGGODAIMGN; // 0x58
		::System::Boolean GCFHHOLDLAB; // 0x59
		::System::Boolean CGPILFCEFGN; // 0x5A
		::System::Byte _padding0[0x1];
		::System::Int32 CCKPDMAHLNJ; // 0x5C
		::System::Void _ctor(::NAOKFLDEDBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAOKFLDEDBJ*))((::PBYTE)hIl2Cpp + ECPIKMPOLFL_CTOR_OFFSET))(this, a1);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPIKMPOLFL_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void KFLNENIGDIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPIKMPOLFL_KFLNENIGDIN_OFFSET))(this);
		}

		::System::Void PGKPGNJJMMB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ECPIKMPOLFL_PGKPGNJJMMB_OFFSET))(this, a1);
		}

		::System::Void GOLCDGNLEKL(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + ECPIKMPOLFL_GOLCDGNLEKL_OFFSET))(this, a1, a2);
		}

	};
