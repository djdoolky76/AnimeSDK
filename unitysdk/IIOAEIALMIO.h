#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLKOFEPPBNJ.h"

class DNGEKLMPBAC;
class EBEAAFHPBJG;
class NGPAGDNPMKJ;
class OBKNEEOLOPB;
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace MoleMole::HollowChessboard { class HollowEntity; }

#define IIOAEIALMIO_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x141EF740)
#define IIOAEIALMIO_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x141EF9E0)
#define IIOAEIALMIO__CTOR_OFFSET UNITYSDK_OFFSET(0x141EF9D0)

inline static constexpr unsigned int IIOAEIALMIO_TypeDefinitionIndex = 80660;

class IIOAEIALMIO : public ::LLKOFEPPBNJ
{
public:
	::EBEAAFHPBJG* DMPGFHFDOHG; // 0x28
	::MoleMole::HollowChessboard::HollowEntity* MOLHFFODLBO; // 0x30
	::OBKNEEOLOPB* KHLGIJDBNAC; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIOAEIALMIO__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* JECAEDMPEDB, ::NGPAGDNPMKJ* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + IIOAEIALMIO_BBOMJDBNHIC_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* MIALFKCCCPI, ::NGPAGDNPMKJ* KMGKAIDEIBA, ::MoleMole::Config::UISpecialNumGroup* FDHMCIFPNCK, ::DNGEKLMPBAC* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + IIOAEIALMIO_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}
};
