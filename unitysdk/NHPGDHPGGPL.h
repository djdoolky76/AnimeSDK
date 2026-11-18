#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigStealthMonster; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define NHPGDHPGGPL_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x1375A500)
#define NHPGDHPGGPL_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x1375A6E0)
#define NHPGDHPGGPL_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x1375A8A0)
#define NHPGDHPGGPL_OPIAMPMCMFA_OFFSET UNITYSDK_OFFSET(0x1375A4F0)

inline static constexpr unsigned int NHPGDHPGGPL_TypeDefinitionIndex = 57610;

class NHPGDHPGGPL : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigStealthMonster** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigStealthMonster**)Il2CppClass::FromTypeDefinitionIndex(NHPGDHPGGPL_TypeDefinitionIndex)->GetStaticField(0x48EF0);
	}

	static ::System::Void OPIAMPMCMFA(::MoleMole::Config::ConfigStealthMonster* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigStealthMonster*))((::PBYTE)hIl2Cpp + NHPGDHPGGPL_OPIAMPMCMFA_OFFSET))(EGEGIMGMJHN);
	}

	static ::MoleMole::Config::ConfigStealthMonster* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigStealthMonster*(*)())((::PBYTE)hIl2Cpp + NHPGDHPGGPL_COPIDBEMEIE_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + NHPGDHPGGPL_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + NHPGDHPGGPL_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}
};
