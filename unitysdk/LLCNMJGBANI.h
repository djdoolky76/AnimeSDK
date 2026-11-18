#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigTurnBaseBattle; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define LLCNMJGBANI_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x184FEA20)
#define LLCNMJGBANI_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x184FE930)
#define LLCNMJGBANI_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x184FEC30)

inline static constexpr unsigned int LLCNMJGBANI_TypeDefinitionIndex = 50002;

class LLCNMJGBANI : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigTurnBaseBattle** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigTurnBaseBattle**)Il2CppClass::FromTypeDefinitionIndex(LLCNMJGBANI_TypeDefinitionIndex)->GetStaticField(0x4A290);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + LLCNMJGBANI_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + LLCNMJGBANI_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::MoleMole::Config::ConfigTurnBaseBattle* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigTurnBaseBattle*(*)())((::PBYTE)hIl2Cpp + LLCNMJGBANI_KGNEJKNNODJ_OFFSET))();
	}
};
