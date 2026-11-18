#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSummerTideTreasure; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CIFLPADDBND_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x1154CCF0)
#define CIFLPADDBND_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x1154CF00)
#define CIFLPADDBND_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1154CB10)

inline static constexpr unsigned int CIFLPADDBND_TypeDefinitionIndex = 87914;

class CIFLPADDBND : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigSummerTideTreasure** StaticGet_NNMEBCCADJK()
	{
		return (::MoleMole::Config::ConfigSummerTideTreasure**)Il2CppClass::FromTypeDefinitionIndex(CIFLPADDBND_TypeDefinitionIndex)->GetStaticField(0x43070);
	}

	static ::MoleMole::Config::ConfigSummerTideTreasure* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigSummerTideTreasure*(*)())((::PBYTE)hIl2Cpp + CIFLPADDBND_KGNEJKNNODJ_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CIFLPADDBND_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CIFLPADDBND_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}
};
