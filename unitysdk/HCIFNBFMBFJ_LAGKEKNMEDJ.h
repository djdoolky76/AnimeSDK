#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityVignettes; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_LAGKEKNMEDJ_BBDKIMIIGKI_OFFSET UNITYSDK_OFFSET(0x15B3BC20)
#define HCIFNBFMBFJ_LAGKEKNMEDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15B3BC10)

inline static constexpr unsigned int HCIFNBFMBFJ_LAGKEKNMEDJ_TypeDefinitionIndex = 50151;

class HCIFNBFMBFJ_LAGKEKNMEDJ : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigEntityVignettes*>* AMHGBGMOMLL; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_LAGKEKNMEDJ__CTOR_OFFSET))(this);
	}

	::System::Void BBDKIMIIGKI(::MoleMole::Config::ConfigEntityVignettes* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityVignettes*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_LAGKEKNMEDJ_BBDKIMIIGKI_OFFSET))(this, NOJAMHPFFPG);
	}
};
