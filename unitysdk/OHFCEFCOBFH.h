#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
class EKFMIDBJDIA;
namespace RPG::GameCore { class TeamDataComponent; }

#define OHFCEFCOBFH_CTOR_OFFSET UNITYSDK_OFFSET(0x18E0DD60)
#define OHFCEFCOBFH_DFGLMOFJDNP_OFFSET UNITYSDK_OFFSET(0x18E0DC40)
#define OHFCEFCOBFH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18E0D9D0)
#define OHFCEFCOBFH_LGHLMCGOOIN_OFFSET UNITYSDK_OFFSET(0x18E0DCD0)
#define OHFCEFCOBFH_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x18E0DB00)

inline static constexpr unsigned int OHFCEFCOBFH_TypeDefinitionIndex = 58694;

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
