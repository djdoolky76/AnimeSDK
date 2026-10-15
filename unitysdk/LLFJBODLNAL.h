#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StageHarmonyLightModLinkSlot.h"
class DHBOGGBEMFF;

#define LLFJBODLNAL_AIDGGGKKGKD_OFFSET UNITYSDK_OFFSET(0xB7695C0)
#define LLFJBODLNAL_CTOR_OFFSET UNITYSDK_OFFSET(0xB7699B0)
#define LLFJBODLNAL_GFPDJBDCIBB_OFFSET UNITYSDK_OFFSET(0xB769430)
#define LLFJBODLNAL_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0xB769930)
#define LLFJBODLNAL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB7698F0)
#define LLFJBODLNAL_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xB769970)

inline static constexpr unsigned int LLFJBODLNAL_TypeDefinitionIndex = 47349;

	class LLFJBODLNAL : public ::StageHarmonyLightModLinkSlot
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFJBODLNAL_CTOR_OFFSET))(this);
		}

		::System::Void GFPDJBDCIBB(::System::Int32 a1, ::DHBOGGBEMFF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::DHBOGGBEMFF*))((::PBYTE)hIl2Cpp + LLFJBODLNAL_GFPDJBDCIBB_OFFSET))(this, a1, a2);
		}

		::System::Void AIDGGGKKGKD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LLFJBODLNAL_AIDGGGKKGKD_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFJBODLNAL_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void JKCPLEJCBML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFJBODLNAL_JKCPLEJCBML_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFJBODLNAL_NEKGALPLEOH_OFFSET))(this);
		}

	};
