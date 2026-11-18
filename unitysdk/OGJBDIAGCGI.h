#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class CharacterAimModeConfig; }
namespace MoleMole::Config { class CharacterAimModeConstant; }
namespace MoleMole::Config { class ConfigCharacterAimMode; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define OGJBDIAGCGI_CCGLEFMABEA_OFFSET UNITYSDK_OFFSET(0xF190860)
#define OGJBDIAGCGI_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0xF1908B0)
#define OGJBDIAGCGI_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0xF190D80)
#define OGJBDIAGCGI_HDLGEDBNEIP_OFFSET UNITYSDK_OFFSET(0xF190AE0)
#define OGJBDIAGCGI_JDIHLJGKAKG_OFFSET UNITYSDK_OFFSET(0xF190E70)
#define OGJBDIAGCGI_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0xF190B30)
#define OGJBDIAGCGI__CTOR_OFFSET UNITYSDK_OFFSET(0xF190850)

inline static constexpr unsigned int OGJBDIAGCGI_TypeDefinitionIndex = 65655;

class OGJBDIAGCGI : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigCharacterAimMode** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigCharacterAimMode**)Il2CppClass::FromTypeDefinitionIndex(OGJBDIAGCGI_TypeDefinitionIndex)->GetStaticField(0x477F0);
	}
	static ::System::Boolean* StaticGet_IGEBMMPDKJI()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OGJBDIAGCGI_TypeDefinitionIndex)->GetStaticField(0x107B0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGJBDIAGCGI__CTOR_OFFSET))(this);
	}

	static ::System::Void CCGLEFMABEA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGJBDIAGCGI_CCGLEFMABEA_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + OGJBDIAGCGI_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void HDLGEDBNEIP()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGJBDIAGCGI_HDLGEDBNEIP_OFFSET))();
	}

	static ::MoleMole::Config::CharacterAimModeConfig* KGNEJKNNODJ(::System::String* MGMDLMBEDJF)
	{
		return ((::MoleMole::Config::CharacterAimModeConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + OGJBDIAGCGI_KGNEJKNNODJ_OFFSET))(MGMDLMBEDJF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + OGJBDIAGCGI_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::Config::CharacterAimModeConstant* JDIHLJGKAKG()
	{
		return ((::MoleMole::Config::CharacterAimModeConstant*(*)())((::PBYTE)hIl2Cpp + OGJBDIAGCGI_JDIHLJGKAKG_OFFSET))();
	}
};
