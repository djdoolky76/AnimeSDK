#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

class ENGKPGFGGLM;
class OGMJICFALBC;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace UnityEngine { class Transform; }

#define NICMOBDAHDG_BIONJLDKAHG_OFFSET UNITYSDK_OFFSET(0x16B7FCF0)
#define NICMOBDAHDG_BLKKFMIIJAJ_OFFSET UNITYSDK_OFFSET(0x16B7FE80)
#define NICMOBDAHDG_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x16B7F6F0)
#define NICMOBDAHDG_DIEPHAJCGOE_OFFSET UNITYSDK_OFFSET(0x16B80080)
#define NICMOBDAHDG_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x16B800D0)
#define NICMOBDAHDG_MOMHHMOHHDC_OFFSET UNITYSDK_OFFSET(0x16B7F8D0)
#define NICMOBDAHDG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B7F880)

inline static constexpr unsigned int NICMOBDAHDG_TypeDefinitionIndex = 68467;

class NICMOBDAHDG : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NICMOBDAHDG__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NICMOBDAHDG_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void MOMHHMOHHDC(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NICMOBDAHDG_MOMHHMOHHDC_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void BLKKFMIIJAJ(::MoleMole::Battle::Entity* KECKGDFIALJ, ::OGMJICFALBC* BDCONLJIBPH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::OGMJICFALBC*))((::PBYTE)hIl2Cpp + NICMOBDAHDG_BLKKFMIIJAJ_OFFSET))(this, KECKGDFIALJ, BDCONLJIBPH);
	}

	static ::System::Void DIEPHAJCGOE(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NICMOBDAHDG_DIEPHAJCGOE_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	::System::Void BIONJLDKAHG(::OGMJICFALBC* BDCONLJIBPH, ::UnityEngine::Transform* IAPKABMDJNF)
	{
		return ((::System::Void(*)(::PVOID, ::OGMJICFALBC*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NICMOBDAHDG_BIONJLDKAHG_OFFSET))(this, BDCONLJIBPH, IAPKABMDJNF);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NICMOBDAHDG_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}
};
