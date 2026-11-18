#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DDGDBFHPBEJ_KLGDHOIMPPM.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BKDIHAIJPHI;
class KJIEFIKLMKN;
namespace MoleMole::Config { class ConfigFocusCameraEntry; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Object; }

#define DDGDBFHPBEJ_DBAGONDHCML_CJGKDAIMJHL_OFFSET UNITYSDK_OFFSET(0x743330)
#define DDGDBFHPBEJ_DBAGONDHCML_COMPARETO_OFFSET UNITYSDK_OFFSET(0x743300)
#define DDGDBFHPBEJ_DBAGONDHCML_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7431D0)
#define DDGDBFHPBEJ_DBAGONDHCML_EQUALS_OFFSET UNITYSDK_OFFSET(0x743140)
#define DDGDBFHPBEJ_DBAGONDHCML_FLBEECAOLJG_OFFSET UNITYSDK_OFFSET(0x7433C0)
#define DDGDBFHPBEJ_DBAGONDHCML_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7431E0)
#define DDGDBFHPBEJ_DBAGONDHCML_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x743350)
#define DDGDBFHPBEJ_DBAGONDHCML_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x7433E0)
#define DDGDBFHPBEJ_DBAGONDHCML_KOPPJDHBBMC_OFFSET UNITYSDK_OFFSET(0x7433D0)
#define DDGDBFHPBEJ_DBAGONDHCML_OMMICIJCCKB_OFFSET UNITYSDK_OFFSET(0x743340)
#define DDGDBFHPBEJ_DBAGONDHCML__CCTOR_OFFSET UNITYSDK_OFFSET(0x149960D0)
#define DDGDBFHPBEJ_DBAGONDHCML__CTOR_1_OFFSET UNITYSDK_OFFSET(0x743130)
#define DDGDBFHPBEJ_DBAGONDHCML__CTOR_OFFSET UNITYSDK_OFFSET(0x743110)

inline static constexpr unsigned int DDGDBFHPBEJ_DBAGONDHCML_TypeDefinitionIndex = 66480;

struct alignas(8) DDGDBFHPBEJ_DBAGONDHCML
{
	static ::DDGDBFHPBEJ_DBAGONDHCML* StaticGet_EFMCBKOMKIH()
	{
		return (::DDGDBFHPBEJ_DBAGONDHCML*)Il2CppClass::FromTypeDefinitionIndex(DDGDBFHPBEJ_DBAGONDHCML_TypeDefinitionIndex)->GetStaticField(0x313F0);
	}
	::Foundation::Unreal::FName MALFDBMCCIO; // 0x10
	::System::Single DJNMJGONENF; // 0x18
	::System::Int32 IPGMJCJBMAN; // 0x1C
	::KJIEFIKLMKN* DEGDGNGDEAE; // 0x20
	::DDGDBFHPBEJ_KLGDHOIMPPM JHAFNIDMILC; // 0x28

	::System::Void _ctor(::System::Int32 PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DDGDBFHPBEJ_DBAGONDHCML__CTOR_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void _ctor_1(::BKDIHAIJPHI* JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::PVOID, ::BKDIHAIJPHI*))((::PBYTE)hIl2Cpp + DDGDBFHPBEJ_DBAGONDHCML__CTOR_1_OFFSET))(this, JKBLDFBGBPK);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDGDBFHPBEJ_DBAGONDHCML__CCTOR_OFFSET))();
	}

	/*
	::System::Boolean Equals(::DDGDBFHPBEJ_DBAGONDHCML LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::DDGDBFHPBEJ_DBAGONDHCML))((::PBYTE)hIl2Cpp + DDGDBFHPBEJ_DBAGONDHCML_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DDGDBFHPBEJ_DBAGONDHCML_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDGDBFHPBEJ_DBAGONDHCML_GETHASHCODE_OFFSET))(this);
	}

	/*
	::System::Int32 CompareTo(::DDGDBFHPBEJ_DBAGONDHCML LIBPKNHDIGP)
	{
		return ((::System::Int32(*)(::PVOID, ::DDGDBFHPBEJ_DBAGONDHCML))((::PBYTE)hIl2Cpp + DDGDBFHPBEJ_DBAGONDHCML_COMPARETO_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean CJGKDAIMJHL(::UnityEngine::Vector3& AJLBBHOJJFF, ::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + DDGDBFHPBEJ_DBAGONDHCML_CJGKDAIMJHL_OFFSET))(this, AJLBBHOJJFF, GEEHGDABNJF);
	}

	::System::Void OMMICIJCCKB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDGDBFHPBEJ_DBAGONDHCML_OMMICIJCCKB_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDGDBFHPBEJ_DBAGONDHCML_HLPHPBAODIF_OFFSET))(this);
	}

	::MoleMole::Config::ConfigFocusCameraEntry* FLBEECAOLJG()
	{
		return ((::MoleMole::Config::ConfigFocusCameraEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDGDBFHPBEJ_DBAGONDHCML_FLBEECAOLJG_OFFSET))(this);
	}

	::System::Boolean KOPPJDHBBMC(::UnityEngine::Vector3& AJLBBHOJJFF, ::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + DDGDBFHPBEJ_DBAGONDHCML_KOPPJDHBBMC_OFFSET))(this, AJLBBHOJJFF, GEEHGDABNJF);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DDGDBFHPBEJ_DBAGONDHCML_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}
};
