#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigVentCrawl; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define LKHEPDOAOLB_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x1258DED0)
#define LKHEPDOAOLB_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x1258DDE0)
#define LKHEPDOAOLB_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1258E0E0)

inline static constexpr unsigned int LKHEPDOAOLB_TypeDefinitionIndex = 43349;

class LKHEPDOAOLB : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigVentCrawl** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigVentCrawl**)Il2CppClass::FromTypeDefinitionIndex(LKHEPDOAOLB_TypeDefinitionIndex)->GetStaticField(0x41710);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + LKHEPDOAOLB_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::Config::ConfigVentCrawl* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigVentCrawl*(*)())((::PBYTE)hIl2Cpp + LKHEPDOAOLB_KGNEJKNNODJ_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + LKHEPDOAOLB_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}
};
