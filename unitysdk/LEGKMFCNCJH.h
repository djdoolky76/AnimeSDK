#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLMIOFJKCCL.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class DNGEKLMPBAC;
class NGPAGDNPMKJ;
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define LEGKMFCNCJH_AHKBFKDLIBD_OFFSET UNITYSDK_OFFSET(0x15653300)
#define LEGKMFCNCJH_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x156531A0)
#define LEGKMFCNCJH_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x15653970)
#define LEGKMFCNCJH_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0x156538E0)
#define LEGKMFCNCJH_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x15653290)
#define LEGKMFCNCJH_MMPAEGJMFML_OFFSET UNITYSDK_OFFSET(0x15653630)
#define LEGKMFCNCJH_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x15653590)
#define LEGKMFCNCJH_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x156538D0)
#define LEGKMFCNCJH__CTOR_OFFSET UNITYSDK_OFFSET(0x156538C0)

inline static constexpr unsigned int LEGKMFCNCJH_TypeDefinitionIndex = 91560;

class LEGKMFCNCJH : public ::BLMIOFJKCCL
{
public:
	::MoleMole::HollowChessboard::HollowCell NOPJALHIEHA; // 0x50
	::System::Single HAJACAFCHIM; // 0x5C
	::MoleMole::HollowChessboard::HollowCell GALMEKPFIKN; // 0x60
	::System::Boolean JKAFJCAFLFM; // 0x6C
	::System::Byte _padding0[0x3];
	::System::UInt32 LNILHNIFLDC; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGKMFCNCJH__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* JECAEDMPEDB, ::NGPAGDNPMKJ* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + LEGKMFCNCJH_BBOMJDBNHIC_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGKMFCNCJH_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Single CAOPDAMCNCN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LEGKMFCNCJH_OKJCHFGIKBH_OFFSET))(this, CAOPDAMCNCN);
	}

	::System::Void PNHPDOBPKKE(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* MIALFKCCCPI, ::NGPAGDNPMKJ* KMGKAIDEIBA, ::MoleMole::Config::UISpecialNumGroup* FDHMCIFPNCK, ::DNGEKLMPBAC* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::NGPAGDNPMKJ*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + LEGKMFCNCJH_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGKMFCNCJH_EEOOAGEDKLM_OFFSET))(this);
	}

	::System::Void CMFOMGGDPPA(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LEGKMFCNCJH_CMFOMGGDPPA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void MMPAEGJMFML()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGKMFCNCJH_MMPAEGJMFML_OFFSET))(this);
	}

	::System::Void AHKBFKDLIBD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGKMFCNCJH_AHKBFKDLIBD_OFFSET))(this);
	}
};
