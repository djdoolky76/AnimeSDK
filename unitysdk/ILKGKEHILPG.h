#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEtherEyes; }
namespace MoleMole::Config { class EtherEyesObjectTypeDefaultConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define ILKGKEHILPG_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x141F7C80)
#define ILKGKEHILPG_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x141F7B90)
#define ILKGKEHILPG_EBHCFBDPELB_OFFSET UNITYSDK_OFFSET(0x141F8070)
#define ILKGKEHILPG_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x141F7E90)

inline static constexpr unsigned int ILKGKEHILPG_TypeDefinitionIndex = 65536;

class ILKGKEHILPG : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigEtherEyes** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigEtherEyes**)Il2CppClass::FromTypeDefinitionIndex(ILKGKEHILPG_TypeDefinitionIndex)->GetStaticField(0x32470);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + ILKGKEHILPG_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + ILKGKEHILPG_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::MoleMole::Config::ConfigEtherEyes* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigEtherEyes*(*)())((::PBYTE)hIl2Cpp + ILKGKEHILPG_KGNEJKNNODJ_OFFSET))();
	}

	static ::MoleMole::Config::EtherEyesObjectTypeDefaultConfig* EBHCFBDPELB(::MoleMole::Config::EtherEyesObjectType KDDBINPLBNP)
	{
		return ((::MoleMole::Config::EtherEyesObjectTypeDefaultConfig*(*)(::MoleMole::Config::EtherEyesObjectType))((::PBYTE)hIl2Cpp + ILKGKEHILPG_EBHCFBDPELB_OFFSET))(KDDBINPLBNP);
	}
};
