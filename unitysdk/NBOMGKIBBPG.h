#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUICoopTeam3D; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define NBOMGKIBBPG_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x113BB850)
#define NBOMGKIBBPG_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x113BBA80)
#define NBOMGKIBBPG_HIKJBGJBGBP_OFFSET UNITYSDK_OFFSET(0x113BBB70)

inline static constexpr unsigned int NBOMGKIBBPG_TypeDefinitionIndex = 93020;

class NBOMGKIBBPG : public ::System::Object
{
public:
	static ::MoleMole::ConfigUICoopTeam3D** StaticGet_EEDBDDDNMPC()
	{
		return (::MoleMole::ConfigUICoopTeam3D**)Il2CppClass::FromTypeDefinitionIndex(NBOMGKIBBPG_TypeDefinitionIndex)->GetStaticField(0x3F580);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + NBOMGKIBBPG_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + NBOMGKIBBPG_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::ConfigUICoopTeam3D* HIKJBGJBGBP()
	{
		return ((::MoleMole::ConfigUICoopTeam3D*(*)())((::PBYTE)hIl2Cpp + NBOMGKIBBPG_HIKJBGJBGBP_OFFSET))();
	}
};
