#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CEDFIOLFMKI;
namespace System { class String; }

#define CEDFIOLFMKI_MHDHFNJALBJ_MLFLMNOEGFB_OFFSET UNITYSDK_OFFSET(0x13255110)
#define CEDFIOLFMKI_MHDHFNJALBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13255100)

inline static constexpr unsigned int CEDFIOLFMKI_MHDHFNJALBJ_TypeDefinitionIndex = 87523;

class CEDFIOLFMKI_MHDHFNJALBJ : public ::System::Object
{
public:
	::CEDFIOLFMKI* KLHPEBKNIFB; // 0x10
	::System::Int32 OOEOHNBJMGD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDFIOLFMKI_MHDHFNJALBJ__CTOR_OFFSET))(this);
	}

	::System::String* MLFLMNOEGFB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDFIOLFMKI_MHDHFNJALBJ_MLFLMNOEGFB_OFFSET))(this);
	}
};
