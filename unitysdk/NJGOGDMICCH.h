#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class GamepadRumbleEntry; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NJGOGDMICCH_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0xE0A0D80)
#define NJGOGDMICCH_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0xE0A1580)
#define NJGOGDMICCH_OFPDNNGPLGI_OFFSET UNITYSDK_OFFSET(0xE0A12D0)
#define NJGOGDMICCH__CCTOR_OFFSET UNITYSDK_OFFSET(0xE0A0CE0)

inline static constexpr unsigned int NJGOGDMICCH_TypeDefinitionIndex = 55581;

class NJGOGDMICCH : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::GamepadRumbleEntry*>** StaticGet_JHDDEOAMIDB()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::GamepadRumbleEntry*>**)Il2CppClass::FromTypeDefinitionIndex(NJGOGDMICCH_TypeDefinitionIndex)->GetStaticField(0x3C970);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJGOGDMICCH__CCTOR_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + NJGOGDMICCH_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::MoleMole::Config::GamepadRumbleEntry* OFPDNNGPLGI(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::Config::GamepadRumbleEntry*(*)(::System::String*))((::PBYTE)hIl2Cpp + NJGOGDMICCH_OFPDNNGPLGI_OFFSET))(MCOHLHMKLIP);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + NJGOGDMICCH_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}
};
