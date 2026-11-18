#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class GamifiedPropConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CNLPHAKMBCB_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x193E9C60)
#define CNLPHAKMBCB_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x193E9B70)
#define CNLPHAKMBCB_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x193E9E70)

inline static constexpr unsigned int CNLPHAKMBCB_TypeDefinitionIndex = 47559;

class CNLPHAKMBCB : public ::System::Object
{
public:
	static ::MoleMole::Config::GamifiedPropConfig** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::GamifiedPropConfig**)Il2CppClass::FromTypeDefinitionIndex(CNLPHAKMBCB_TypeDefinitionIndex)->GetStaticField(0x312C0);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CNLPHAKMBCB_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CNLPHAKMBCB_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::MoleMole::Config::GamifiedPropConfig* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::GamifiedPropConfig*(*)())((::PBYTE)hIl2Cpp + CNLPHAKMBCB_KGNEJKNNODJ_OFFSET))();
	}
};
