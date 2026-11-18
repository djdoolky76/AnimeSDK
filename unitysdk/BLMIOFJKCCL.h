#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IIOAEIALMIO.h"

class AHNHEANMAML;
class DNGEKLMPBAC;
class MBJCLLBMALO;
class NGPAGDNPMKJ;
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define BLMIOFJKCCL_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x18DA79A0)
#define BLMIOFJKCCL_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x18DA7BB0)
#define BLMIOFJKCCL__CTOR_OFFSET UNITYSDK_OFFSET(0x18DA7BA0)

inline static constexpr unsigned int BLMIOFJKCCL_TypeDefinitionIndex = 45043;

class BLMIOFJKCCL : public ::IIOAEIALMIO
{
public:
	::AHNHEANMAML* LBHNMKHHEGD; // 0x40
	::MBJCLLBMALO* EJOIPECKCHC; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLMIOFJKCCL__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* JECAEDMPEDB, ::NGPAGDNPMKJ* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + BLMIOFJKCCL_BBOMJDBNHIC_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* MIALFKCCCPI, ::NGPAGDNPMKJ* KMGKAIDEIBA, ::MoleMole::Config::UISpecialNumGroup* FDHMCIFPNCK, ::DNGEKLMPBAC* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + BLMIOFJKCCL_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}
};
