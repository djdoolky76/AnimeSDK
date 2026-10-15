#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
class EKFMIDBJDIA;
namespace RPG::GameCore { class TeamDataComponent; }

#define OHFCEFCOBFH_CTOR_OFFSET UNITYSDK_OFFSET(0xBE5F9B0)
#define OHFCEFCOBFH_DFGLMOFJDNP_OFFSET UNITYSDK_OFFSET(0xBE5F890)
#define OHFCEFCOBFH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE5F620)
#define OHFCEFCOBFH_LGHLMCGOOIN_OFFSET UNITYSDK_OFFSET(0xBE5F920)
#define OHFCEFCOBFH_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xBE5F750)

inline static constexpr unsigned int OHFCEFCOBFH_TypeDefinitionIndex = 57466;

	class OHFCEFCOBFH : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHFCEFCOBFH_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHFCEFCOBFH_DISPOSE_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::RPG::GameCore::TeamDataComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamDataComponent*))((::PBYTE)hIl2Cpp + OHFCEFCOBFH_LMCEDCHJKFF_OFFSET))(this, a1);
		}

		::System::Void DFGLMOFJDNP(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + OHFCEFCOBFH_DFGLMOFJDNP_OFFSET))(this, a1);
		}

		::System::Void LGHLMCGOOIN(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + OHFCEFCOBFH_LGHLMCGOOIN_OFFSET))(this, a1);
		}

	};
