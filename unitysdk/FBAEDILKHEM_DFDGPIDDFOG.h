#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define FBAEDILKHEM_DFDGPIDDFOG_PGEOHJLJHMG_OFFSET UNITYSDK_OFFSET(0xF9EEE50)
#define FBAEDILKHEM_DFDGPIDDFOG__CTOR_OFFSET UNITYSDK_OFFSET(0xF9EEE40)

inline static constexpr unsigned int FBAEDILKHEM_DFDGPIDDFOG_TypeDefinitionIndex = 72465;

class FBAEDILKHEM_DFDGPIDDFOG : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* KBAKDDFJCDL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAEDILKHEM_DFDGPIDDFOG__CTOR_OFFSET))(this);
	}

	::System::Void PGEOHJLJHMG(::System::Int32 PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FBAEDILKHEM_DFDGPIDDFOG_PGEOHJLJHMG_OFFSET))(this, PIIPCLCCOIG);
	}
};
