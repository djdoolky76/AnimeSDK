#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAbilityTargetData; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GLPENGNBNIK_FKPNNGFMHEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1814E800)

inline static constexpr unsigned int GLPENGNBNIK_FKPNNGFMHEM_TypeDefinitionIndex = 86954;

class GLPENGNBNIK_FKPNNGFMHEM : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigAbilityTargetData*>* PIHFNNBDCHP; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPENGNBNIK_FKPNNGFMHEM__CTOR_OFFSET))(this);
	}
};
