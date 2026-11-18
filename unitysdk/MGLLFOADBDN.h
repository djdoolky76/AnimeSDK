#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HHDPNCNDPCF;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MGLLFOADBDN_EFIHFEDEJMN_OFFSET UNITYSDK_OFFSET(0x1A64D5E0)
#define MGLLFOADBDN_FKKIPIFJBKJ_OFFSET UNITYSDK_OFFSET(0x1A64CE50)
#define MGLLFOADBDN_GOGDFBBDGLP_OFFSET UNITYSDK_OFFSET(0x1A64D4E0)
#define MGLLFOADBDN_OBEEBDHCJPI_1_OFFSET UNITYSDK_OFFSET(0x1A64DC20)
#define MGLLFOADBDN_OBEEBDHCJPI_OFFSET UNITYSDK_OFFSET(0x1A64D140)
#define MGLLFOADBDN_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x1A64DED0)

inline static constexpr unsigned int MGLLFOADBDN_TypeDefinitionIndex = 64479;

class MGLLFOADBDN : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet_MGBFIFEMAFC()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MGLLFOADBDN_TypeDefinitionIndex)->GetStaticField(0x4D6A0);
	}

	static ::MoleMole::Battle::Entity* FKKIPIFJBKJ(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::MoleMole::Battle::Entity*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MGLLFOADBDN_FKKIPIFJBKJ_OFFSET))(BKLGNCBNEGM);
	}

	static ::System::Void OBEEBDHCJPI(::System::UInt32 LEHABHCOMGH)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MGLLFOADBDN_OBEEBDHCJPI_OFFSET))(LEHABHCOMGH);
	}

	static ::Nap::NapECS::EcsFilter* GOGDFBBDGLP(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::Nap::NapECS::EcsFilter*(*)(::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MGLLFOADBDN_GOGDFBBDGLP_OFFSET))(GEEHGDABNJF);
	}

	static ::System::Void EFIHFEDEJMN()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGLLFOADBDN_EFIHFEDEJMN_OFFSET))();
	}

	static ::System::Void OBEEBDHCJPI_1(::HHDPNCNDPCF* IJFDCJBKCDF)
	{
		return ((::System::Void(*)(::HHDPNCNDPCF*))((::PBYTE)hIl2Cpp + MGLLFOADBDN_OBEEBDHCJPI_1_OFFSET))(IJFDCJBKCDF);
	}

	static ::System::Void OKJCHFGIKBH(::Nap::NapECS::EcsFilter* PNPMMLNCDNK)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + MGLLFOADBDN_OKJCHFGIKBH_OFFSET))(PNPMMLNCDNK);
	}
};
