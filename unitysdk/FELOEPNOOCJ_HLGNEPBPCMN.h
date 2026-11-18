#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigBigSceneCommonSkill; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FELOEPNOOCJ_HLGNEPBPCMN_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x156B7980)
#define FELOEPNOOCJ_HLGNEPBPCMN__CTOR_OFFSET UNITYSDK_OFFSET(0x156B7970)

inline static constexpr unsigned int FELOEPNOOCJ_HLGNEPBPCMN_TypeDefinitionIndex = 63572;

class FELOEPNOOCJ_HLGNEPBPCMN : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::ConfigBigSceneCommonSkill*>* AMHGBGMOMLL; // 0x10
	::System::Action* IBNICCGMILF; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::ConfigBigSceneCommonSkill*>* AKAKKIGOCNO; // 0x20
	::System::Int32 HBINAGPODHA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FELOEPNOOCJ_HLGNEPBPCMN__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::ConfigBigSceneCommonSkill* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigBigSceneCommonSkill*))((::PBYTE)hIl2Cpp + FELOEPNOOCJ_HLGNEPBPCMN_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
