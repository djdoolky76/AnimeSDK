#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityFilmGrains; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_KPCDHOPMFHO_ADJGGKEOLHE_OFFSET UNITYSDK_OFFSET(0x17A37F30)
#define HCIFNBFMBFJ_KPCDHOPMFHO__CTOR_OFFSET UNITYSDK_OFFSET(0x17A37F20)

inline static constexpr unsigned int HCIFNBFMBFJ_KPCDHOPMFHO_TypeDefinitionIndex = 50159;

class HCIFNBFMBFJ_KPCDHOPMFHO : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigEntityFilmGrains*>* AMHGBGMOMLL; // 0x10
	::System::Action* IBNICCGMILF; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_KPCDHOPMFHO__CTOR_OFFSET))(this);
	}

	::System::Void ADJGGKEOLHE(::MoleMole::Config::ConfigEntityFilmGrains* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityFilmGrains*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_KPCDHOPMFHO_ADJGGKEOLHE_OFFSET))(this, NOJAMHPFFPG);
	}
};
