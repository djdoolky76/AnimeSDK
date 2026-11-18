#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGamepadTriggerEffect; }
namespace MoleMole::Config { class GamepadTriggerEffectEntryBase; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define BCEJKPONNMF_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x169E03C0)
#define BCEJKPONNMF_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x169E05D0)
#define BCEJKPONNMF_FNKNJEOCHKP_OFFSET UNITYSDK_OFFSET(0x169E08A0)
#define BCEJKPONNMF_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x169E06C0)

inline static constexpr unsigned int BCEJKPONNMF_TypeDefinitionIndex = 44173;

class BCEJKPONNMF : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigGamepadTriggerEffect** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigGamepadTriggerEffect**)Il2CppClass::FromTypeDefinitionIndex(BCEJKPONNMF_TypeDefinitionIndex)->GetStaticField(0x45C50);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + BCEJKPONNMF_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + BCEJKPONNMF_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::Config::ConfigGamepadTriggerEffect* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigGamepadTriggerEffect*(*)())((::PBYTE)hIl2Cpp + BCEJKPONNMF_KGNEJKNNODJ_OFFSET))();
	}

	static ::MoleMole::Config::GamepadTriggerEffectEntryBase* FNKNJEOCHKP(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::Config::GamepadTriggerEffectEntryBase*(*)(::System::String*))((::PBYTE)hIl2Cpp + BCEJKPONNMF_FNKNJEOCHKP_OFFSET))(MCOHLHMKLIP);
	}
};
