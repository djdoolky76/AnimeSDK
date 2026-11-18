#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/LevelEndType.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { template <typename T1, typename T2> class TwoDiffValue_2; }
namespace MoleMole::Config { class ConfigLevelEndCameraEffect; }
namespace MoleMole::Config { class ConfigLevelEndPerform; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KCEKFHKICNP_AMHDOGFJOMM_OFFSET UNITYSDK_OFFSET(0x1763CBF0)
#define KCEKFHKICNP_BAHGGNNOGJL_OFFSET UNITYSDK_OFFSET(0x1763C740)
#define KCEKFHKICNP_BICOLHMCKPN_OFFSET UNITYSDK_OFFSET(0x1763B5B0)
#define KCEKFHKICNP_CNNBGFHOPIG_OFFSET UNITYSDK_OFFSET(0x1763BB60)
#define KCEKFHKICNP_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x1763B930)
#define KCEKFHKICNP_DDHIJBLLEAP_1_OFFSET UNITYSDK_OFFSET(0x1763CBA0)
#define KCEKFHKICNP_DDHIJBLLEAP_OFFSET UNITYSDK_OFFSET(0x1763BF40)
#define KCEKFHKICNP_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x1763B840)
#define KCEKFHKICNP_DKMFIKFJDFA_OFFSET UNITYSDK_OFFSET(0x1763C9B0)
#define KCEKFHKICNP_DPDDDKFHGJN_OFFSET UNITYSDK_OFFSET(0x1763C370)
#define KCEKFHKICNP_EJMCMIFAJDE_OFFSET UNITYSDK_OFFSET(0x1763C550)
#define KCEKFHKICNP_KICHJGAOHHI_OFFSET UNITYSDK_OFFSET(0x1763B340)
#define KCEKFHKICNP_MBHJMMKELJN_OFFSET UNITYSDK_OFFSET(0x1763BD50)

inline static constexpr unsigned int KCEKFHKICNP_TypeDefinitionIndex = 72374;

class KCEKFHKICNP : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigLevelEndPerform** StaticGet_OEONLBEMFNC()
	{
		return (::MoleMole::Config::ConfigLevelEndPerform**)Il2CppClass::FromTypeDefinitionIndex(KCEKFHKICNP_TypeDefinitionIndex)->GetStaticField(0x4D470);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLevelEndCameraEffect*>* KICHJGAOHHI(::MoleMole::Config::LevelEndType BECHJGCCJKO)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLevelEndCameraEffect*>*(*)(::MoleMole::Config::LevelEndType))((::PBYTE)hIl2Cpp + KCEKFHKICNP_KICHJGAOHHI_OFFSET))(BECHJGCCJKO);
	}

	static ::System::Single BICOLHMCKPN(::MoleMole::Config::LevelEndType AMPNBJCCOLA)
	{
		return ((::System::Single(*)(::MoleMole::Config::LevelEndType))((::PBYTE)hIl2Cpp + KCEKFHKICNP_BICOLHMCKPN_OFFSET))(AMPNBJCCOLA);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + KCEKFHKICNP_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Single CNNBGFHOPIG()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + KCEKFHKICNP_CNNBGFHOPIG_OFFSET))();
	}

	static ::System::Single MBHJMMKELJN()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + KCEKFHKICNP_MBHJMMKELJN_OFFSET))();
	}

	static ::System::String* DDHIJBLLEAP(::MoleMole::Config::LevelEndType BECHJGCCJKO, ::System::UInt32 JKKLOCBIDKJ, ::System::String* PKGDBDFHOMO)
	{
		return ((::System::String*(*)(::MoleMole::Config::LevelEndType, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + KCEKFHKICNP_DDHIJBLLEAP_OFFSET))(BECHJGCCJKO, JKKLOCBIDKJ, PKGDBDFHOMO);
	}

	static ::MoleMole::Config::ConfigLevelEndPerform* DPDDDKFHGJN()
	{
		return ((::MoleMole::Config::ConfigLevelEndPerform*(*)())((::PBYTE)hIl2Cpp + KCEKFHKICNP_DPDDDKFHGJN_OFFSET))();
	}

	static ::System::Boolean EJMCMIFAJDE()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KCEKFHKICNP_EJMCMIFAJDE_OFFSET))();
	}

	static ::MoleMole::TwoDiffValue_2<::System::String*, ::System::Boolean>* BAHGGNNOGJL(::MoleMole::Config::LevelEndType BECHJGCCJKO)
	{
		return ((::MoleMole::TwoDiffValue_2<::System::String*, ::System::Boolean>*(*)(::MoleMole::Config::LevelEndType))((::PBYTE)hIl2Cpp + KCEKFHKICNP_BAHGGNNOGJL_OFFSET))(BECHJGCCJKO);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + KCEKFHKICNP_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::Config::MaterialPropertyType>* DKMFIKFJDFA()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::MaterialPropertyType>*(*)())((::PBYTE)hIl2Cpp + KCEKFHKICNP_DKMFIKFJDFA_OFFSET))();
	}

	static ::System::String* DDHIJBLLEAP_1(::MoleMole::Config::LevelEndType BECHJGCCJKO)
	{
		return ((::System::String*(*)(::MoleMole::Config::LevelEndType))((::PBYTE)hIl2Cpp + KCEKFHKICNP_DDHIJBLLEAP_1_OFFSET))(BECHJGCCJKO);
	}

	static ::System::Single AMHDOGFJOMM()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + KCEKFHKICNP_AMHDOGFJOMM_OFFSET))();
	}
};
