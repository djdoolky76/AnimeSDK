#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigZipLineSubSystem; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define LKJCMDAPPGE_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x12A63E10)
#define LKJCMDAPPGE_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x12A63D20)
#define LKJCMDAPPGE_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x12A63B40)

inline static constexpr unsigned int LKJCMDAPPGE_TypeDefinitionIndex = 78007;

class LKJCMDAPPGE : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigZipLineSubSystem** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigZipLineSubSystem**)Il2CppClass::FromTypeDefinitionIndex(LKJCMDAPPGE_TypeDefinitionIndex)->GetStaticField(0x44780);
	}

	static ::MoleMole::Config::ConfigZipLineSubSystem* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigZipLineSubSystem*(*)())((::PBYTE)hIl2Cpp + LKJCMDAPPGE_KGNEJKNNODJ_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + LKJCMDAPPGE_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + LKJCMDAPPGE_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}
};
