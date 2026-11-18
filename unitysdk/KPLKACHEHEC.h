#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowTimeRewind; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define KPLKACHEHEC_AJLPIKPDAOJ_OFFSET UNITYSDK_OFFSET(0x126BC9C0)
#define KPLKACHEHEC_BLINLECJGPA_OFFSET UNITYSDK_OFFSET(0x126BC330)
#define KPLKACHEHEC_CCGLEFMABEA_OFFSET UNITYSDK_OFFSET(0x126BC6A0)
#define KPLKACHEHEC_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x126BC840)
#define KPLKACHEHEC_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x126BC890)

inline static constexpr unsigned int KPLKACHEHEC_TypeDefinitionIndex = 78198;

class KPLKACHEHEC : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigHollowTimeRewind** StaticGet_HAONPJFIAFN()
	{
		return (::MoleMole::Config::ConfigHollowTimeRewind**)Il2CppClass::FromTypeDefinitionIndex(KPLKACHEHEC_TypeDefinitionIndex)->GetStaticField(0x3B910);
	}

	static ::System::Void BLINLECJGPA(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + KPLKACHEHEC_BLINLECJGPA_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void CCGLEFMABEA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPLKACHEHEC_CCGLEFMABEA_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + KPLKACHEHEC_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + KPLKACHEHEC_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::Config::ConfigHollowTimeRewind* AJLPIKPDAOJ()
	{
		return ((::MoleMole::Config::ConfigHollowTimeRewind*(*)())((::PBYTE)hIl2Cpp + KPLKACHEHEC_AJLPIKPDAOJ_OFFSET))();
	}
};
