#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIAnimationFunctionSet; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CIOJDGJGAJM_PNKNJLBPMAF_FBMPFHOBPHO_OFFSET UNITYSDK_OFFSET(0x15337AF0)
#define CIOJDGJGAJM_PNKNJLBPMAF__CTOR_OFFSET UNITYSDK_OFFSET(0x15337AE0)

inline static constexpr unsigned int CIOJDGJGAJM_PNKNJLBPMAF_TypeDefinitionIndex = 80595;

class CIOJDGJGAJM_PNKNJLBPMAF : public ::System::Object
{
public:
	::System::String* CJIFLIHGICG; // 0x10
	::System::Action_1<::MoleMole::Config::ConfigUIAnimationFunctionSet*>* IBNICCGMILF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIOJDGJGAJM_PNKNJLBPMAF__CTOR_OFFSET))(this);
	}

	::System::Void FBMPFHOBPHO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIOJDGJGAJM_PNKNJLBPMAF_FBMPFHOBPHO_OFFSET))(this);
	}
};
