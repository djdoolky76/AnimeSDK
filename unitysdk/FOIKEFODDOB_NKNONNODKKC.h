#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

class FOIKEFODDOB;
namespace MoleMole::Config { class ConfigUIAnimationFunctionSet; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define FOIKEFODDOB_NKNONNODKKC_FBMPFHOBPHO_OFFSET UNITYSDK_OFFSET(0x156D1B90)
#define FOIKEFODDOB_NKNONNODKKC__CTOR_OFFSET UNITYSDK_OFFSET(0x156D1B80)

inline static constexpr unsigned int FOIKEFODDOB_NKNONNODKKC_TypeDefinitionIndex = 66541;

class FOIKEFODDOB_NKNONNODKKC : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigUIAnimationFunctionSet*>* IBNICCGMILF; // 0x10
	::FOIKEFODDOB* KLHPEBKNIFB; // 0x18
	::System::String* CJIFLIHGICG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOIKEFODDOB_NKNONNODKKC__CTOR_OFFSET))(this);
	}

	::System::Void FBMPFHOBPHO(::ConfigModuleLib::Runtime::LoadOpHandle PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadOpHandle))((::PBYTE)hIl2Cpp + FOIKEFODDOB_NKNONNODKKC_FBMPFHOBPHO_OFFSET))(this, PIIPCLCCOIG);
	}
};
