#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIGachaPortrait; }
namespace MoleMole::Config { class ConfigUIGachaRoleConfig; }
namespace MoleMole::Config { class ConfigUIPortraitItem; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define NGLLLPIMOLB_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x131467A0)
#define NGLLLPIMOLB_DAJBJAHAOJI_OFFSET UNITYSDK_OFFSET(0x13146FF0)
#define NGLLLPIMOLB_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x131466B0)
#define NGLLLPIMOLB_FLLIFAHOELG_OFFSET UNITYSDK_OFFSET(0x13146CD0)
#define NGLLLPIMOLB_JBIADCMHNKC_OFFSET UNITYSDK_OFFSET(0x131469C0)

inline static constexpr unsigned int NGLLLPIMOLB_TypeDefinitionIndex = 50824;

class NGLLLPIMOLB : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigUIGachaPortrait** StaticGet_HIAEOGGNBAK()
	{
		return (::MoleMole::Config::ConfigUIGachaPortrait**)Il2CppClass::FromTypeDefinitionIndex(NGLLLPIMOLB_TypeDefinitionIndex)->GetStaticField(0x42520);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + NGLLLPIMOLB_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + NGLLLPIMOLB_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MoleMole::Config::ConfigUIPortraitItem* JBIADCMHNKC(::System::String* JBPIHLFAFFG, ::System::String* OKGKPMGCDMJ)
	{
		return ((::MoleMole::Config::ConfigUIPortraitItem*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NGLLLPIMOLB_JBIADCMHNKC_OFFSET))(JBPIHLFAFFG, OKGKPMGCDMJ);
	}

	static ::MoleMole::Config::ConfigUIGachaRoleConfig* FLLIFAHOELG(::System::String* FLALCACMFJJ, ::System::String* JBPIHLFAFFG, ::System::String* MPMLNDENDFO)
	{
		return ((::MoleMole::Config::ConfigUIGachaRoleConfig*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NGLLLPIMOLB_FLLIFAHOELG_OFFSET))(FLALCACMFJJ, JBPIHLFAFFG, MPMLNDENDFO);
	}

	static ::MoleMole::Config::ConfigUIGachaPortrait* DAJBJAHAOJI()
	{
		return ((::MoleMole::Config::ConfigUIGachaPortrait*(*)())((::PBYTE)hIl2Cpp + NGLLLPIMOLB_DAJBJAHAOJI_OFFSET))();
	}
};
