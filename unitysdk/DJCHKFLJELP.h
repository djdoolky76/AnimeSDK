#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigZipLine; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define DJCHKFLJELP_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x7FBDED0)
#define DJCHKFLJELP_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x7FBE2D0)
#define DJCHKFLJELP_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x7FBE0F0)

inline static constexpr unsigned int DJCHKFLJELP_TypeDefinitionIndex = 77576;

class DJCHKFLJELP : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigZipLine** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigZipLine**)Il2CppClass::FromTypeDefinitionIndex(DJCHKFLJELP_TypeDefinitionIndex)->GetStaticField(0x31490);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + DJCHKFLJELP_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::MoleMole::Config::ConfigZipLine* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigZipLine*(*)())((::PBYTE)hIl2Cpp + DJCHKFLJELP_KGNEJKNNODJ_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + DJCHKFLJELP_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}
};
