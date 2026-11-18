#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUILight; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define KHHFCPJBADL_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x1994FBF0)
#define KHHFCPJBADL_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x1994FB00)
#define KHHFCPJBADL_PNABDGFDGED_OFFSET UNITYSDK_OFFSET(0x1994FE10)

inline static constexpr unsigned int KHHFCPJBADL_TypeDefinitionIndex = 81982;

class KHHFCPJBADL : public ::System::Object
{
public:
	static ::MoleMole::ConfigUILight** StaticGet_KLOKIKPFNJB()
	{
		return (::MoleMole::ConfigUILight**)Il2CppClass::FromTypeDefinitionIndex(KHHFCPJBADL_TypeDefinitionIndex)->GetStaticField(0x44570);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + KHHFCPJBADL_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::ConfigUILight* PNABDGFDGED()
	{
		return ((::MoleMole::ConfigUILight*(*)())((::PBYTE)hIl2Cpp + KHHFCPJBADL_PNABDGFDGED_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + KHHFCPJBADL_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}
};
