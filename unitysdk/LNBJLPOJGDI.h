#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigLinkZone; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define LNBJLPOJGDI_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x14036420)
#define LNBJLPOJGDI_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x14036330)
#define LNBJLPOJGDI_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x14036630)

inline static constexpr unsigned int LNBJLPOJGDI_TypeDefinitionIndex = 43181;

class LNBJLPOJGDI : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigLinkZone** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigLinkZone**)Il2CppClass::FromTypeDefinitionIndex(LNBJLPOJGDI_TypeDefinitionIndex)->GetStaticField(0x3BBD0);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + LNBJLPOJGDI_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + LNBJLPOJGDI_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::MoleMole::Config::ConfigLinkZone* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigLinkZone*(*)())((::PBYTE)hIl2Cpp + LNBJLPOJGDI_KGNEJKNNODJ_OFFSET))();
	}
};
