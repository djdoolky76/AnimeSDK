#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StageHarmonyLightModLinkSlot.h"
class DHBOGGBEMFF;

#define EEFBIGDCEHO_AIDGGGKKGKD_OFFSET UNITYSDK_OFFSET(0x13A2B890)
#define EEFBIGDCEHO_CTOR_OFFSET UNITYSDK_OFFSET(0x13A2BC80)
#define EEFBIGDCEHO_GFPDJBDCIBB_OFFSET UNITYSDK_OFFSET(0x13A2B700)
#define EEFBIGDCEHO_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0x13A2BC00)
#define EEFBIGDCEHO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x13A2BBC0)
#define EEFBIGDCEHO_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0x13A2BC40)

inline static constexpr unsigned int EEFBIGDCEHO_TypeDefinitionIndex = 47354;

	class EEFBIGDCEHO : public ::StageHarmonyLightModLinkSlot
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFBIGDCEHO_CTOR_OFFSET))(this);
		}

		::System::Void GFPDJBDCIBB(::System::Int32 a1, ::DHBOGGBEMFF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::DHBOGGBEMFF*))((::PBYTE)hIl2Cpp + EEFBIGDCEHO_GFPDJBDCIBB_OFFSET))(this, a1, a2);
		}

		::System::Void AIDGGGKKGKD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EEFBIGDCEHO_AIDGGGKKGKD_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFBIGDCEHO_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void JKCPLEJCBML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFBIGDCEHO_JKCPLEJCBML_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFBIGDCEHO_NEKGALPLEOH_OFFSET))(this);
		}

	};
