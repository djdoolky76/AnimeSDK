#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigMultiplayerUI; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CMKLAOGKAHF_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x147ADF60)
#define CMKLAOGKAHF_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x147AE140)
#define CMKLAOGKAHF_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x147AE350)

inline static constexpr unsigned int CMKLAOGKAHF_TypeDefinitionIndex = 88832;

class CMKLAOGKAHF : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigMultiplayerUI** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigMultiplayerUI**)Il2CppClass::FromTypeDefinitionIndex(CMKLAOGKAHF_TypeDefinitionIndex)->GetStaticField(0x47C80);
	}

	static ::MoleMole::Config::ConfigMultiplayerUI* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigMultiplayerUI*(*)())((::PBYTE)hIl2Cpp + CMKLAOGKAHF_COPIDBEMEIE_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CMKLAOGKAHF_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CMKLAOGKAHF_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}
};
