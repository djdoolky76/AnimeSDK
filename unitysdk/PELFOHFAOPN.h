#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigCameraTelescope; }
namespace MoleMole { class ConfigUIStoreCamera; }
namespace MoleMole { class UIStorePageConfig; }
namespace MoleMole { class UIVirtualCameraConfigs; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define PELFOHFAOPN_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x16FA2E00)
#define PELFOHFAOPN_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x16FA3320)
#define PELFOHFAOPN_FDEPKOAGAEK_OFFSET UNITYSDK_OFFSET(0x16FA2800)
#define PELFOHFAOPN_JMDEBELAGIN_OFFSET UNITYSDK_OFFSET(0x16FA3020)
#define PELFOHFAOPN_MFILKCPKKBN_OFFSET UNITYSDK_OFFSET(0x16FA3410)
#define PELFOHFAOPN_NMDHMNBNNNE_OFFSET UNITYSDK_OFFSET(0x16FA2B00)

inline static constexpr unsigned int PELFOHFAOPN_TypeDefinitionIndex = 91636;

class PELFOHFAOPN : public ::System::Object
{
public:
	static ::MoleMole::ConfigUIStoreCamera** StaticGet_FMHEEHBPOAJ()
	{
		return (::MoleMole::ConfigUIStoreCamera**)Il2CppClass::FromTypeDefinitionIndex(PELFOHFAOPN_TypeDefinitionIndex)->GetStaticField(0x45950);
	}

	static ::MoleMole::UIStorePageConfig* FDEPKOAGAEK(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::UIStorePageConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + PELFOHFAOPN_FDEPKOAGAEK_OFFSET))(MCOHLHMKLIP);
	}

	static ::MoleMole::ConfigCameraTelescope* NMDHMNBNNNE(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::ConfigCameraTelescope*(*)(::System::String*))((::PBYTE)hIl2Cpp + PELFOHFAOPN_NMDHMNBNNNE_OFFSET))(MCOHLHMKLIP);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + PELFOHFAOPN_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MoleMole::UIVirtualCameraConfigs* JMDEBELAGIN(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::UIVirtualCameraConfigs*(*)(::System::String*))((::PBYTE)hIl2Cpp + PELFOHFAOPN_JMDEBELAGIN_OFFSET))(MCOHLHMKLIP);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + PELFOHFAOPN_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::ConfigUIStoreCamera* MFILKCPKKBN()
	{
		return ((::MoleMole::ConfigUIStoreCamera*(*)())((::PBYTE)hIl2Cpp + PELFOHFAOPN_MFILKCPKKBN_OFFSET))();
	}
};
