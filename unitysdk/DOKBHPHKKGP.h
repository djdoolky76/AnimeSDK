#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HHDPNCNDPCF;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DOKBHPHKKGP_BDEHPCDADFK_OFFSET UNITYSDK_OFFSET(0x132A5940)
#define DOKBHPHKKGP_FKKIPIFJBKJ_OFFSET UNITYSDK_OFFSET(0x132A4ED0)
#define DOKBHPHKKGP_GOGDFBBDGLP_OFFSET UNITYSDK_OFFSET(0x132A4DD0)
#define DOKBHPHKKGP_IKGLNMEFPOI_1_OFFSET UNITYSDK_OFFSET(0x132A5E20)
#define DOKBHPHKKGP_IKGLNMEFPOI_OFFSET UNITYSDK_OFFSET(0x132A5A80)
#define DOKBHPHKKGP_LEEDLIAHANN_OFFSET UNITYSDK_OFFSET(0x132A5300)
#define DOKBHPHKKGP_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x132A51C0)

inline static constexpr unsigned int DOKBHPHKKGP_TypeDefinitionIndex = 49814;

class DOKBHPHKKGP : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet_MGBFIFEMAFC()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(DOKBHPHKKGP_TypeDefinitionIndex)->GetStaticField(0x49990);
	}

	static ::Nap::NapECS::EcsFilter* GOGDFBBDGLP(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::Nap::NapECS::EcsFilter*(*)(::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + DOKBHPHKKGP_GOGDFBBDGLP_OFFSET))(GEEHGDABNJF);
	}

	static ::MoleMole::Battle::Entity* FKKIPIFJBKJ(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::MoleMole::Battle::Entity*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DOKBHPHKKGP_FKKIPIFJBKJ_OFFSET))(BKLGNCBNEGM);
	}

	static ::System::Void OKJCHFGIKBH(::Nap::NapECS::EcsFilter* PNPMMLNCDNK)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + DOKBHPHKKGP_OKJCHFGIKBH_OFFSET))(PNPMMLNCDNK);
	}

	static ::System::Void LEEDLIAHANN()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOKBHPHKKGP_LEEDLIAHANN_OFFSET))();
	}

	static ::System::Void BDEHPCDADFK(::Nap::NapECS::EcsFilter* PNPMMLNCDNK)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + DOKBHPHKKGP_BDEHPCDADFK_OFFSET))(PNPMMLNCDNK);
	}

	static ::System::Void IKGLNMEFPOI(::System::UInt32 LEHABHCOMGH)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DOKBHPHKKGP_IKGLNMEFPOI_OFFSET))(LEHABHCOMGH);
	}

	static ::System::Void IKGLNMEFPOI_1(::HHDPNCNDPCF* IJFDCJBKCDF)
	{
		return ((::System::Void(*)(::HHDPNCNDPCF*))((::PBYTE)hIl2Cpp + DOKBHPHKKGP_IKGLNMEFPOI_1_OFFSET))(IJFDCJBKCDF);
	}
};
