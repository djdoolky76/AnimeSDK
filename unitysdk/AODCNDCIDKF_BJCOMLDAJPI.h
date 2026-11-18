#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AODCNDCIDKF;
namespace System { class String; }

#define AODCNDCIDKF_BJCOMLDAJPI_CBIPLPOMHEM_OFFSET UNITYSDK_OFFSET(0x113C3D90)
#define AODCNDCIDKF_BJCOMLDAJPI__CTOR_OFFSET UNITYSDK_OFFSET(0x113C3D80)

inline static constexpr unsigned int AODCNDCIDKF_BJCOMLDAJPI_TypeDefinitionIndex = 79602;

class AODCNDCIDKF_BJCOMLDAJPI : public ::System::Object
{
public:
	::AODCNDCIDKF* KLHPEBKNIFB; // 0x10
	::System::String* OLOMNNBBHPJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODCNDCIDKF_BJCOMLDAJPI__CTOR_OFFSET))(this);
	}

	::System::Void CBIPLPOMHEM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODCNDCIDKF_BJCOMLDAJPI_CBIPLPOMHEM_OFFSET))(this);
	}
};
