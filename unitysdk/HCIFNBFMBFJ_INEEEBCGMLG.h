#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityOldCRTEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HCIFNBFMBFJ_INEEEBCGMLG_MDJBJGDCEOC_OFFSET UNITYSDK_OFFSET(0x19DF8D40)
#define HCIFNBFMBFJ_INEEEBCGMLG__CTOR_OFFSET UNITYSDK_OFFSET(0x19DF8D30)

inline static constexpr unsigned int HCIFNBFMBFJ_INEEEBCGMLG_TypeDefinitionIndex = 50182;

class HCIFNBFMBFJ_INEEEBCGMLG : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigEntityOldCRTEffects*>* AMHGBGMOMLL; // 0x10
	::System::Action* IBNICCGMILF; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_INEEEBCGMLG__CTOR_OFFSET))(this);
	}

	::System::Void MDJBJGDCEOC(::MoleMole::Config::ConfigEntityOldCRTEffects* NOJAMHPFFPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityOldCRTEffects*))((::PBYTE)hIl2Cpp + HCIFNBFMBFJ_INEEEBCGMLG_MDJBJGDCEOC_OFFSET))(this, NOJAMHPFFPG);
	}
};
