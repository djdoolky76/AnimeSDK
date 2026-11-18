#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define KBLFCKFFOLL_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x14FCBAC0)
#define KBLFCKFFOLL_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x14FCAE60)
#define KBLFCKFFOLL_DGJJGACGFJH_OFFSET UNITYSDK_OFFSET(0x14FCB920)
#define KBLFCKFFOLL_GHEBLAOKOLI_OFFSET UNITYSDK_OFFSET(0x14FCB1E0)
#define KBLFCKFFOLL_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x14FCB4D0)
#define KBLFCKFFOLL_JBCLGCLLOGC_OFFSET UNITYSDK_OFFSET(0x14FCB730)
#define KBLFCKFFOLL_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x14FCB890)
#define KBLFCKFFOLL_UPDATE_OFFSET UNITYSDK_OFFSET(0x14FCB020)
#define KBLFCKFFOLL__CTOR_OFFSET UNITYSDK_OFFSET(0x14FCB190)

inline static constexpr unsigned int KBLFCKFFOLL_TypeDefinitionIndex = 51419;

class KBLFCKFFOLL : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBLFCKFFOLL__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + KBLFCKFFOLL_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBLFCKFFOLL_UPDATE_OFFSET))(this);
	}

	static ::System::Void GHEBLAOKOLI(::System::UInt32 BKLGNCBNEGM, ::System::Boolean NANNBFHNMAO)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + KBLFCKFFOLL_GHEBLAOKOLI_OFFSET))(BKLGNCBNEGM, NANNBFHNMAO);
	}

	::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KBLFCKFFOLL_HMLGKBFFNHI_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + KBLFCKFFOLL_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void JBCLGCLLOGC(::System::Boolean JICOEAHNDGJ)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + KBLFCKFFOLL_JBCLGCLLOGC_OFFSET))(JICOEAHNDGJ);
	}

	static ::System::Void DGJJGACGFJH(::System::Boolean JICOEAHNDGJ)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + KBLFCKFFOLL_DGJJGACGFJH_OFFSET))(JICOEAHNDGJ);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBLFCKFFOLL_CMFOMGGDPPA_OFFSET))(this);
	}
};
