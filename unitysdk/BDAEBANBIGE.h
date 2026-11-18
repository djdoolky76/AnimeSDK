#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define BDAEBANBIGE_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1854B1B0)
#define BDAEBANBIGE_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1854B120)
#define BDAEBANBIGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1854B0A0)
#define BDAEBANBIGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1854B110)

inline static constexpr unsigned int BDAEBANBIGE_TypeDefinitionIndex = 74315;

class BDAEBANBIGE : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x11A; // 0x0
	::System::String* LCPALAHMDML; // 0x20
	::System::String* IMMPCBJMEGF; // 0x28
	::System::Boolean HPJBOBMFNMM; // 0x30
	::System::Byte _padding0[0x3];
	::System::UInt32 GCFDHEFHCAJ; // 0x34

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDAEBANBIGE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDAEBANBIGE__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDAEBANBIGE_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDAEBANBIGE_FIGPAOKNJLN_OFFSET))(this);
	}
};
