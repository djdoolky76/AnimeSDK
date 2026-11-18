#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigDigibooEffect; }
namespace MoleMole { class ConfigDigibooEffect_EffectGroup; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define EEOCFLIHFHC_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x17106580)
#define EEOCFLIHFHC_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x17106490)
#define EEOCFLIHFHC_IHBIGOGKFAH_OFFSET UNITYSDK_OFFSET(0x17106860)
#define EEOCFLIHFHC_JLCOOCOFIJE_OFFSET UNITYSDK_OFFSET(0x171069D0)

inline static constexpr unsigned int EEOCFLIHFHC_TypeDefinitionIndex = 49470;

class EEOCFLIHFHC : public ::System::Object
{
public:
	static ::MoleMole::ConfigDigibooEffect** StaticGet_ELJPMIIBJMK()
	{
		return (::MoleMole::ConfigDigibooEffect**)Il2CppClass::FromTypeDefinitionIndex(EEOCFLIHFHC_TypeDefinitionIndex)->GetStaticField(0x45F80);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + EEOCFLIHFHC_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::ConfigDigibooEffect* IHBIGOGKFAH()
	{
		return ((::MoleMole::ConfigDigibooEffect*(*)())((::PBYTE)hIl2Cpp + EEOCFLIHFHC_IHBIGOGKFAH_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF, ::System::Boolean KGHNCPCMBIJ)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + EEOCFLIHFHC_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF, KGHNCPCMBIJ);
	}

	static ::MoleMole::ConfigDigibooEffect_EffectGroup* JLCOOCOFIJE(::System::Int32 KCIECGOJMPG)
	{
		return ((::MoleMole::ConfigDigibooEffect_EffectGroup*(*)(::System::Int32))((::PBYTE)hIl2Cpp + EEOCFLIHFHC_JLCOOCOFIJE_OFFSET))(KCIECGOJMPG);
	}
};
