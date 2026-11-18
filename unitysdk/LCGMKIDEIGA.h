#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

class AEMCAOEICDG;
class AKDPNDDJEIJ;
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define LCGMKIDEIGA_ANIMIKPOSTUPDATE_OFFSET UNITYSDK_OFFSET(0x17681060)
#define LCGMKIDEIGA_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x17680DD0)
#define LCGMKIDEIGA_HACNOPKMIAP_OFFSET UNITYSDK_OFFSET(0x176820D0)
#define LCGMKIDEIGA_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x176816A0)
#define LCGMKIDEIGA_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x17682040)
#define LCGMKIDEIGA_KIDOODKFBDJ_OFFSET UNITYSDK_OFFSET(0x176810B0)
#define LCGMKIDEIGA_LLPIPIMMLOB_OFFSET UNITYSDK_OFFSET(0x17681270)
#define LCGMKIDEIGA_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x17682160)
#define LCGMKIDEIGA_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x17680FF0)
#define LCGMKIDEIGA__CTOR_OFFSET UNITYSDK_OFFSET(0x17681220)

inline static constexpr unsigned int LCGMKIDEIGA_TypeDefinitionIndex = 61000;

class LCGMKIDEIGA : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* KANNLBJLNNF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGMKIDEIGA__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + LCGMKIDEIGA_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGMKIDEIGA_ONDESTROY_OFFSET))(this);
	}

	::System::Void AnimIKPostUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGMKIDEIGA_ANIMIKPOSTUPDATE_OFFSET))(this);
	}

	static ::System::Void LLPIPIMMLOB(::AKDPNDDJEIJ* KAICEBJDDGG, ::AEMCAOEICDG* FBGPAPDNMGE)
	{
		return ((::System::Void(*)(::AKDPNDDJEIJ*, ::AEMCAOEICDG*))((::PBYTE)hIl2Cpp + LCGMKIDEIGA_LLPIPIMMLOB_OFFSET))(KAICEBJDDGG, FBGPAPDNMGE);
	}

	static ::System::Void HMLGKBFFNHI(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LCGMKIDEIGA_HMLGKBFFNHI_OFFSET))(NJNCGJLHLKC);
	}

	::System::Void KIDOODKFBDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGMKIDEIGA_KIDOODKFBDJ_OFFSET))(this);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGMKIDEIGA_IFHNMAGGFAE_OFFSET))(this);
	}

	::System::Void HACNOPKMIAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGMKIDEIGA_HACNOPKMIAP_OFFSET))(this);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + LCGMKIDEIGA_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}
};
