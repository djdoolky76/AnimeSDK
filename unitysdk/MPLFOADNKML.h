#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUICamera; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MPLFOADNKML_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x11E4A100)
#define MPLFOADNKML_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x11E4A010)
#define MPLFOADNKML_EHEMAJCJFFH_OFFSET UNITYSDK_OFFSET(0x11E4A320)

inline static constexpr unsigned int MPLFOADNKML_TypeDefinitionIndex = 61167;

class MPLFOADNKML : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigUICamera** StaticGet_DNAHKBPIKJC()
	{
		return (::MoleMole::Config::ConfigUICamera**)Il2CppClass::FromTypeDefinitionIndex(MPLFOADNKML_TypeDefinitionIndex)->GetStaticField(0x485B0);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MPLFOADNKML_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::Config::ConfigUICamera* EHEMAJCJFFH()
	{
		return ((::MoleMole::Config::ConfigUICamera*(*)())((::PBYTE)hIl2Cpp + MPLFOADNKML_EHEMAJCJFFH_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MPLFOADNKML_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}
};
