#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIFish; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define GJFMIAIJIFM_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x11DB3D90)
#define GJFMIAIJIFM_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x11DB3CA0)
#define GJFMIAIJIFM_OHMIEELKGFG_OFFSET UNITYSDK_OFFSET(0x11DB3FC0)

inline static constexpr unsigned int GJFMIAIJIFM_TypeDefinitionIndex = 41650;

class GJFMIAIJIFM : public ::System::Object
{
public:
	static ::MoleMole::ConfigUIFish** StaticGet_ELFPJBCPFCJ()
	{
		return (::MoleMole::ConfigUIFish**)Il2CppClass::FromTypeDefinitionIndex(GJFMIAIJIFM_TypeDefinitionIndex)->GetStaticField(0x50850);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + GJFMIAIJIFM_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + GJFMIAIJIFM_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MoleMole::ConfigUIFish* OHMIEELKGFG()
	{
		return ((::MoleMole::ConfigUIFish*(*)())((::PBYTE)hIl2Cpp + GJFMIAIJIFM_OHMIEELKGFG_OFFSET))();
	}
};
