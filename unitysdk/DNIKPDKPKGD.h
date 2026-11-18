#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigIndicatedLight; }
namespace MoleMole::Config { class ConfigIndicatedLights; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define DNIKPDKPKGD_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x7FD3BB0)
#define DNIKPDKPKGD_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x7FD3DA0)
#define DNIKPDKPKGD_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x7FD3F60)
#define DNIKPDKPKGD_MIFODGBNCOB_OFFSET UNITYSDK_OFFSET(0x7FD3820)
#define DNIKPDKPKGD_OPIAMPMCMFA_OFFSET UNITYSDK_OFFSET(0x7FD3D90)

inline static constexpr unsigned int DNIKPDKPKGD_TypeDefinitionIndex = 39905;

class DNIKPDKPKGD : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigIndicatedLights** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigIndicatedLights**)Il2CppClass::FromTypeDefinitionIndex(DNIKPDKPKGD_TypeDefinitionIndex)->GetStaticField(0x42BF0);
	}

	static ::MoleMole::Config::ConfigIndicatedLight* MIFODGBNCOB(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::Config::ConfigIndicatedLight*(*)(::System::String*))((::PBYTE)hIl2Cpp + DNIKPDKPKGD_MIFODGBNCOB_OFFSET))(MCOHLHMKLIP);
	}

	static ::System::Void OPIAMPMCMFA(::MoleMole::Config::ConfigIndicatedLights* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigIndicatedLights*))((::PBYTE)hIl2Cpp + DNIKPDKPKGD_OPIAMPMCMFA_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + DNIKPDKPKGD_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + DNIKPDKPKGD_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::Config::ConfigIndicatedLights* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigIndicatedLights*(*)())((::PBYTE)hIl2Cpp + DNIKPDKPKGD_COPIDBEMEIE_OFFSET))();
	}
};
