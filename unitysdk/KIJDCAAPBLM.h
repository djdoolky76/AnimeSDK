#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtBattleAnimMoveOption.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class String; }

#define KIJDCAAPBLM_AOOOLFJDMLP_OFFSET UNITYSDK_OFFSET(0xB42AF80)
#define KIJDCAAPBLM_BENPOPFBJDD_OFFSET UNITYSDK_OFFSET(0xB42B340)
#define KIJDCAAPBLM_CTOR_OFFSET UNITYSDK_OFFSET(0xB42BA30)
#define KIJDCAAPBLM_JFENOKLCCME_OFFSET UNITYSDK_OFFSET(0xB42B000)
#define KIJDCAAPBLM_LCEAJKLNLKJ_OFFSET UNITYSDK_OFFSET(0xB42B780)
#define KIJDCAAPBLM_PEKCCGNLGNO_OFFSET UNITYSDK_OFFSET(0xB42B1E0)

inline static constexpr unsigned int KIJDCAAPBLM_TypeDefinitionIndex = 54193;

	class KIJDCAAPBLM : public ::System::Object
	{
	public:
		::System::String* GBIOGILHAHO; // 0x10
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x18
		::RPG::GameCore::GameEntity* KDPPFKNCKIL; // 0x20
		::System::Single FMHMAHCNDGB; // 0x28
		::System::Single NNNAGHMNFKB; // 0x2C
		::System::Boolean NPEHDAMFOCH; // 0x30
		::System::Byte _padding0[0x3];
		::RPG::MVector3 HFPGLABPMMO; // 0x34
		::System::Single KJIOHLANNHA; // 0x40
		::System::Single ACCBAMDABCA; // 0x44
		::System::Single HJKMFPPHEJH; // 0x48
		::RPG::MVector3 KEBGGHNKODJ; // 0x4C
		::RPG::MVector3 LOFKEOFNMKA; // 0x58
		::System::Single DLOECBHBAGB; // 0x64
		::RPG::MVector3 FJBPOFJPFNP; // 0x68
		::System::Single HJLOCBLHNLD; // 0x74
		::RPG::GameCore::RtBattleAnimMoveOption ALEGIFEHGLH; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJDCAAPBLM_CTOR_OFFSET))(this);
		}

		::RPG::MVector3 AOOOLFJDMLP()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJDCAAPBLM_AOOOLFJDMLP_OFFSET))(this);
		}

		::RPG::MVector3 PEKCCGNLGNO()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJDCAAPBLM_PEKCCGNLGNO_OFFSET))(this);
		}

		::RPG::MVector3 JFENOKLCCME(::RPG::MVector3 a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + KIJDCAAPBLM_JFENOKLCCME_OFFSET))(this, a1);
		}

		::System::Boolean BENPOPFBJDD(::RPG::GameCore::TransformComponent* a1, ::RPG::MVector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TransformComponent*, ::RPG::MVector3))((::PBYTE)hIl2Cpp + KIJDCAAPBLM_BENPOPFBJDD_OFFSET))(this, a1, a2);
		}

		::System::Void LCEAJKLNLKJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KIJDCAAPBLM_LCEAJKLNLKJ_OFFSET))(this, a1);
		}

	};
