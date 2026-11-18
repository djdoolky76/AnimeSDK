#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

class AEMCAOEICDG;
class EHKKPCGAJHO;
class ENGKPGFGGLM;
namespace MoleMole { class MonoEffect; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define EEOHLGFOLJA_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0xFDD9FB0)
#define EEOHLGFOLJA_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xFDD96A0)
#define EEOHLGFOLJA_EDENFHOEGDG_OFFSET UNITYSDK_OFFSET(0xFDDA8B0)
#define EEOHLGFOLJA_KOLPCLEMHGJ_OFFSET UNITYSDK_OFFSET(0xFDDB460)
#define EEOHLGFOLJA_LMECCGCGMCE_OFFSET UNITYSDK_OFFSET(0xFDD99B0)
#define EEOHLGFOLJA_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0xFDDB700)
#define EEOHLGFOLJA_NHBPDANLLNA_OFFSET UNITYSDK_OFFSET(0xFDDA1C0)
#define EEOHLGFOLJA_PBPKLPOJEAC_OFFSET UNITYSDK_OFFSET(0xFDD9E00)
#define EEOHLGFOLJA_PLKBGIEHBPA_OFFSET UNITYSDK_OFFSET(0xFDDA960)
#define EEOHLGFOLJA__CTOR_OFFSET UNITYSDK_OFFSET(0xFDD9960)

inline static constexpr unsigned int EEOHLGFOLJA_TypeDefinitionIndex = 67851;

class EEOHLGFOLJA : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOHLGFOLJA__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + EEOHLGFOLJA_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	static ::System::Void LMECCGCGMCE(::EHKKPCGAJHO* POBADKEDFOE, ::System::Int32 GJOMCPFIFAD, ::System::Boolean HNACDPGAJKL)
	{
		return ((::System::Void(*)(::EHKKPCGAJHO*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + EEOHLGFOLJA_LMECCGCGMCE_OFFSET))(POBADKEDFOE, GJOMCPFIFAD, HNACDPGAJKL);
	}

	::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + EEOHLGFOLJA_APAGIJMHEAK_OFFSET))(this, MNGHGOLKKNO);
	}

	::System::Void EDENFHOEGDG(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EEOHLGFOLJA_EDENFHOEGDG_OFFSET))(this, BKLGNCBNEGM);
	}

	static ::System::Void PBPKLPOJEAC(::AEMCAOEICDG* OHPJHPEOFLD, ::EHKKPCGAJHO* POBADKEDFOE)
	{
		return ((::System::Void(*)(::AEMCAOEICDG*, ::EHKKPCGAJHO*))((::PBYTE)hIl2Cpp + EEOHLGFOLJA_PBPKLPOJEAC_OFFSET))(OHPJHPEOFLD, POBADKEDFOE);
	}

	static ::System::Void PLKBGIEHBPA(::MoleMole::MonoEffect* FLMDJACEMFH, ::AEMCAOEICDG* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::MoleMole::MonoEffect*, ::AEMCAOEICDG*))((::PBYTE)hIl2Cpp + EEOHLGFOLJA_PLKBGIEHBPA_OFFSET))(FLMDJACEMFH, OHPJHPEOFLD);
	}

	static ::System::Void KOLPCLEMHGJ(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* LEOKEOFNDLH)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + EEOHLGFOLJA_KOLPCLEMHGJ_OFFSET))(FFNKDGGHBPP, LEOKEOFNDLH);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + EEOHLGFOLJA_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void NHBPDANLLNA(::AEMCAOEICDG* OHPJHPEOFLD, ::EHKKPCGAJHO* POBADKEDFOE)
	{
		return ((::System::Void(*)(::PVOID, ::AEMCAOEICDG*, ::EHKKPCGAJHO*))((::PBYTE)hIl2Cpp + EEOHLGFOLJA_NHBPDANLLNA_OFFSET))(this, OHPJHPEOFLD, POBADKEDFOE);
	}
};
