#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class EOSParametersModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define B0841BDEB5574E08_EOSPARAMETERS__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B0841BDEB5574E08_EosParameters_TypeDefinitionIndex = 12388;

class B0841BDEB5574E08_EosParameters : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MiHoYo::SDK::EOSParametersModel*>* eos_parameters; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B0841BDEB5574E08_EOSPARAMETERS__CTOR_OFFSET))(this);
	}
};
