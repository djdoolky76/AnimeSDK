#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
class LCOMIBOIAPN;
namespace RPG::GameCore { class CharacterPhaseAnimConfig; }
namespace RPG::GameCore { class ModifierBehaviorVisual; }
namespace System { class String; }

#define HOMDJMMOCJK_CTOR_OFFSET UNITYSDK_OFFSET(0x15DAEDB0)
#define HOMDJMMOCJK_DFLJMLKJPMC_OFFSET UNITYSDK_OFFSET(0x15DAEED0)
#define HOMDJMMOCJK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15DAEDE0)
#define HOMDJMMOCJK_GET_CURRENTPHASENAME_OFFSET UNITYSDK_OFFSET(0x15DAF330)
#define HOMDJMMOCJK_GIELOHGOMOA_OFFSET UNITYSDK_OFFSET(0x15DAF2E0)
#define HOMDJMMOCJK_IHEMNKPNOOM_OFFSET UNITYSDK_OFFSET(0x15DAF0C0)
#define HOMDJMMOCJK_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x15DAEE40)
#define HOMDJMMOCJK_MBANBMNIFDA_OFFSET UNITYSDK_OFFSET(0x15DAF120)
#define HOMDJMMOCJK_NFDCJEIHOJH_OFFSET UNITYSDK_OFFSET(0x15DAF1B0)
#define HOMDJMMOCJK_OEFNOOMCIIH_OFFSET UNITYSDK_OFFSET(0x15DAF260)
#define HOMDJMMOCJK_SET_CURRENTPHASENAME_OFFSET UNITYSDK_OFFSET(0x15DAF340)

inline static constexpr unsigned int HOMDJMMOCJK_TypeDefinitionIndex = 56960;

	class HOMDJMMOCJK : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::String* _CurrentPhaseName_k__BackingField; // 0x18
		::LCOMIBOIAPN* MNKMFKOLDNM; // 0x20
		::RPG::GameCore::CharacterPhaseAnimConfig* ONBJALLDAMB; // 0x28
		::RPG::GameCore::CharacterPhaseAnimConfig* MHEBFKKCHBF; // 0x30
		::System::Int32 OIIFKIJEFDA; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMDJMMOCJK_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMDJMMOCJK_DISPOSE_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMDJMMOCJK_LMCEDCHJKFF_OFFSET))(this);
		}

		::System::Void IHEMNKPNOOM(::System::String* a1, ::RPG::GameCore::CharacterPhaseAnimConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::CharacterPhaseAnimConfig*))((::PBYTE)hIl2Cpp + HOMDJMMOCJK_IHEMNKPNOOM_OFFSET))(this, a1, a2);
		}

		::System::Void MBANBMNIFDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMDJMMOCJK_MBANBMNIFDA_OFFSET))(this);
		}

		::RPG::GameCore::ModifierBehaviorVisual* NFDCJEIHOJH(::System::Int32 a1)
		{
			return ((::RPG::GameCore::ModifierBehaviorVisual*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOMDJMMOCJK_NFDCJEIHOJH_OFFSET))(this, a1);
		}

		::System::Boolean OEFNOOMCIIH(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOMDJMMOCJK_OEFNOOMCIIH_OFFSET))(this, a1);
		}

		::System::Void DFLJMLKJPMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMDJMMOCJK_DFLJMLKJPMC_OFFSET))(this);
		}

		::System::String* get_CurrentPhaseName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMDJMMOCJK_GET_CURRENTPHASENAME_OFFSET))(this);
		}

		::System::Void set_CurrentPhaseName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOMDJMMOCJK_SET_CURRENTPHASENAME_OFFSET))(this, a1);
		}

		::RPG::GameCore::CharacterPhaseAnimConfig* GIELOHGOMOA()
		{
			return ((::RPG::GameCore::CharacterPhaseAnimConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMDJMMOCJK_GIELOHGOMOA_OFFSET))(this);
		}

	};
