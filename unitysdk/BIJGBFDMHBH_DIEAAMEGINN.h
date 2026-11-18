#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DynamicBoneConfigMap;
namespace System { class Action; }

#define BIJGBFDMHBH_DIEAAMEGINN_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x13968340)
#define BIJGBFDMHBH_DIEAAMEGINN__CTOR_OFFSET UNITYSDK_OFFSET(0x13968330)

inline static constexpr unsigned int BIJGBFDMHBH_DIEAAMEGINN_TypeDefinitionIndex = 71849;

class BIJGBFDMHBH_DIEAAMEGINN : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIJGBFDMHBH_DIEAAMEGINN__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::DynamicBoneConfigMap* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::DynamicBoneConfigMap*))((::PBYTE)hIl2Cpp + BIJGBFDMHBH_DIEAAMEGINN_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
