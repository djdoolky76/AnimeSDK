#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGaussianBlurEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_LKMIOFOCDDE_NLOLPHNCHDL_OFFSET UNITYSDK_OFFSET(0x17AEBC70)
#define HCIFNBFMBFJ_LKMIOFOCDDE__CTOR_OFFSET UNITYSDK_OFFSET(0x17AEBC60)

inline static constexpr unsigned int HCIFNBFMBFJ_LKMIOFOCDDE_TypeDefinitionIndex = 50142;

class HCIFNBFMBFJ_LKMIOFOCDDE : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigGaussianBlurEffects*>* AMHGBGMOMLL; // 0x10
	::System::Action* IBNICCGMILF; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_LKMIOFOCDDE__CTOR_OFFSET))(this);
	}

	::System::Void NLOLPHNCHDL(::MoleMole::Config::ConfigGaussianBlurEffects* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGaussianBlurEffects*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_LKMIOFOCDDE_NLOLPHNCHDL_OFFSET))(this, NOJAMHPFFPG);
	}
};
