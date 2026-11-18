#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigBubbleGroup; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MANJNNJOJFK_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x11F2B830)
#define MANJNNJOJFK_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x11F2BA50)
#define MANJNNJOJFK_JGBAEAFDKJB_OFFSET UNITYSDK_OFFSET(0x11F2BB40)

inline static constexpr unsigned int MANJNNJOJFK_TypeDefinitionIndex = 43560;

class MANJNNJOJFK : public ::System::Object
{
public:
	static ::MoleMole::ConfigBubbleGroup** StaticGet_IBMKDCBCDIJ()
	{
		return (::MoleMole::ConfigBubbleGroup**)Il2CppClass::FromTypeDefinitionIndex(MANJNNJOJFK_TypeDefinitionIndex)->GetStaticField(0x3E770);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MANJNNJOJFK_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MANJNNJOJFK_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::ConfigBubbleGroup* JGBAEAFDKJB()
	{
		return ((::MoleMole::ConfigBubbleGroup*(*)())((::PBYTE)hIl2Cpp + MANJNNJOJFK_JGBAEAFDKJB_OFFSET))();
	}
};
