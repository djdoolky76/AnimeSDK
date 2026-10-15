#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IECNEMPGKJL.h"
namespace RPG::GameCore { class CharacterInputData; }
namespace RPGTools::Timeline::Story { class BaseStoryMoveRunData; }

#define CENNJOPMMGO_BHBBBKCILLA_OFFSET UNITYSDK_OFFSET(0xC9ECFF0)
#define CENNJOPMMGO_CNAPOOPIAAI_OFFSET UNITYSDK_OFFSET(0xC9EC720)
#define CENNJOPMMGO_CTOR_OFFSET UNITYSDK_OFFSET(0xC9ED0F0)
#define CENNJOPMMGO_DNNFJCBMFHP_OFFSET UNITYSDK_OFFSET(0xC9EC4D0)
#define CENNJOPMMGO_FGFFJBEKHBO_OFFSET UNITYSDK_OFFSET(0xC9EC510)
#define CENNJOPMMGO_JOMMEOPIOBH_OFFSET UNITYSDK_OFFSET(0xC9EC630)
#define CENNJOPMMGO_LHJBPEBMKDN_OFFSET UNITYSDK_OFFSET(0xC9EC560)
#define CENNJOPMMGO_LMNDPBPJPNC_OFFSET UNITYSDK_OFFSET(0xC9EC490)
#define CENNJOPMMGO_MNKAPPBEJOK_OFFSET UNITYSDK_OFFSET(0xC9ECD10)
#define CENNJOPMMGO_PMMJGEDIIJD_OFFSET UNITYSDK_OFFSET(0xC9ECCB0)

inline static constexpr unsigned int CENNJOPMMGO_TypeDefinitionIndex = 53614;

	class CENNJOPMMGO : public ::IECNEMPGKJL
	{
	public:
		::RPGTools::Timeline::Story::BaseStoryMoveRunData* MGLCLKLBMKG; // 0x90
		::System::Int32 KFDJIJJEENC; // 0x98
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CENNJOPMMGO_CTOR_OFFSET))(this);
		}

		::System::Single LMNDPBPJPNC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CENNJOPMMGO_LMNDPBPJPNC_OFFSET))(this);
		}

		::System::Single DNNFJCBMFHP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CENNJOPMMGO_DNNFJCBMFHP_OFFSET))(this);
		}

		::System::Void FGFFJBEKHBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CENNJOPMMGO_FGFFJBEKHBO_OFFSET))(this);
		}

		::System::Void LHJBPEBMKDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CENNJOPMMGO_LHJBPEBMKDN_OFFSET))(this);
		}

		::System::Void CNAPOOPIAAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CENNJOPMMGO_CNAPOOPIAAI_OFFSET))(this);
		}

		::System::Void JOMMEOPIOBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CENNJOPMMGO_JOMMEOPIOBH_OFFSET))(this);
		}

		::System::Void PMMJGEDIIJD(::RPG::GameCore::CharacterInputData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*))((::PBYTE)hIl2Cpp + CENNJOPMMGO_PMMJGEDIIJD_OFFSET))(this, a1);
		}

		::System::Boolean MNKAPPBEJOK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CENNJOPMMGO_MNKAPPBEJOK_OFFSET))(this);
		}

		::System::Boolean BHBBBKCILLA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CENNJOPMMGO_BHBBBKCILLA_OFFSET))(this);
		}

	};
