#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OMPFICOEDFF;

#define NEKABGBGFCO_CDKFGFLKFGP_OFFSET UNITYSDK_OFFSET(0x1313F270)
#define NEKABGBGFCO_HHGIIPANAPB_OFFSET UNITYSDK_OFFSET(0x1313F260)
#define NEKABGBGFCO_JKHEAAJFGIE_OFFSET UNITYSDK_OFFSET(0x1313F250)
#define NEKABGBGFCO__CTOR_OFFSET UNITYSDK_OFFSET(0x1313F200)

inline static constexpr unsigned int NEKABGBGFCO_TypeDefinitionIndex = 68658;

class NEKABGBGFCO : public ::System::Object
{
public:
	::OMPFICOEDFF* AHMFPFACACD; // 0x10
	::System::Int32 _BOGIDFEABCK_k__BackingField; // 0x18

	::System::Void _ctor(::System::Int32 ALELNLLMKDE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEKABGBGFCO__CTOR_OFFSET))(this, ALELNLLMKDE);
	}

	::System::Boolean JKHEAAJFGIE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEKABGBGFCO_JKHEAAJFGIE_OFFSET))(this);
	}

	::System::Boolean HHGIIPANAPB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEKABGBGFCO_HHGIIPANAPB_OFFSET))(this);
	}

	::System::Int32 CDKFGFLKFGP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEKABGBGFCO_CDKFGFLKFGP_OFFSET))(this);
	}
};
