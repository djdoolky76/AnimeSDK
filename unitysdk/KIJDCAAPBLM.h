#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtBattleAnimMoveOption.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class String; }

#define KIJDCAAPBLM_AOOOLFJDMLP_OFFSET UNITYSDK_OFFSET(0x19EF1520)
#define KIJDCAAPBLM_BENPOPFBJDD_OFFSET UNITYSDK_OFFSET(0x19EF18E0)
#define KIJDCAAPBLM_CTOR_OFFSET UNITYSDK_OFFSET(0x19EF1FD0)
#define KIJDCAAPBLM_JFENOKLCCME_OFFSET UNITYSDK_OFFSET(0x19EF15A0)
#define KIJDCAAPBLM_LCEAJKLNLKJ_OFFSET UNITYSDK_OFFSET(0x19EF1D20)
#define KIJDCAAPBLM_PEKCCGNLGNO_OFFSET UNITYSDK_OFFSET(0x19EF1780)

inline static constexpr unsigned int KIJDCAAPBLM_TypeDefinitionIndex = 55357;

	class KIJDCAAPBLM : public ::System::Object
	{
	public:
		::System::String* GBIOGILHAHO; // 0x10
		::RPG::GameCore::GameEntity* KDPPFKNCKIL; // 0x18
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x20
		::System::Single DLOECBHBAGB; // 0x28
		::RPG::MVector3 HFPGLABPMMO; // 0x2C
		::System::Single ACCBAMDABCA; // 0x38
		::RPG::MVector3 KEBGGHNKODJ; // 0x3C
		::System::Single NNNAGHMNFKB; // 0x48
		::System::Single FMHMAHCNDGB; // 0x4C
		::System::Boolean NPEHDAMFOCH; // 0x50
		::System::Byte _padding0[0x3];
		::System::Single HJLOCBLHNLD; // 0x54
		::System::Single KJIOHLANNHA; // 0x58
		::RPG::MVector3 LOFKEOFNMKA; // 0x5C
		::System::Single HJKMFPPHEJH; // 0x68
		::RPG::GameCore::RtBattleAnimMoveOption ALEGIFEHGLH; // 0x6C
		::RPG::MVector3 FJBPOFJPFNP; // 0x70
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
