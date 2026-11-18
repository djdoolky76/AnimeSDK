#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CKADCAILBDC;
class EMGMHNMJLGG;
namespace System { class Action; }

#define EMGMHNMJLGG_KIFPLLGKHCL_HIIDMCBJHHP_OFFSET UNITYSDK_OFFSET(0x169B2920)
#define EMGMHNMJLGG_KIFPLLGKHCL_INHEFFONHPL_OFFSET UNITYSDK_OFFSET(0x169B2A40)
#define EMGMHNMJLGG_KIFPLLGKHCL__CTOR_OFFSET UNITYSDK_OFFSET(0x169B2910)

inline static constexpr unsigned int EMGMHNMJLGG_KIFPLLGKHCL_TypeDefinitionIndex = 50667;

class EMGMHNMJLGG_KIFPLLGKHCL : public ::System::Object
{
public:
	::CKADCAILBDC* JPGJONCDENL; // 0x10
	::EMGMHNMJLGG* KLHPEBKNIFB; // 0x18
	::System::Action* FFMGICPLKFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGMHNMJLGG_KIFPLLGKHCL__CTOR_OFFSET))(this);
	}

	::System::Void HIIDMCBJHHP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGMHNMJLGG_KIFPLLGKHCL_HIIDMCBJHHP_OFFSET))(this);
	}

	::System::Void INHEFFONHPL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGMHNMJLGG_KIFPLLGKHCL_INHEFFONHPL_OFFSET))(this);
	}
};
