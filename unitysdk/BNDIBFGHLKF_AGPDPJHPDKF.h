#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ConfigMainCityObject;
namespace System { class Action; }

#define BNDIBFGHLKF_AGPDPJHPDKF_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x128B5340)
#define BNDIBFGHLKF_AGPDPJHPDKF__CTOR_OFFSET UNITYSDK_OFFSET(0x128B5330)

inline static constexpr unsigned int BNDIBFGHLKF_AGPDPJHPDKF_TypeDefinitionIndex = 77906;

class BNDIBFGHLKF_AGPDPJHPDKF : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNDIBFGHLKF_AGPDPJHPDKF__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::ConfigMainCityObject* NGLKIKLLLFL)
	{
		return ((::System::Void(*)(::PVOID, ::ConfigMainCityObject*))((::PBYTE)hIl2Cpp + BNDIBFGHLKF_AGPDPJHPDKF_OKKMJKOAIKG_OFFSET))(this, NGLKIKLLLFL);
	}
};
