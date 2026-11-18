#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IFOHGNLIAKH;

#define FFFKJJDELEJ_CAEKGPMKAMP_CAFPJCHDEHG_OFFSET UNITYSDK_OFFSET(0x140EE510)
#define FFFKJJDELEJ_CAEKGPMKAMP__CTOR_OFFSET UNITYSDK_OFFSET(0x140EE500)

inline static constexpr unsigned int FFFKJJDELEJ_CAEKGPMKAMP_TypeDefinitionIndex = 79296;

class FFFKJJDELEJ_CAEKGPMKAMP : public ::System::Object
{
public:
	::System::Int32 KCNOHOOPNAH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFFKJJDELEJ_CAEKGPMKAMP__CTOR_OFFSET))(this);
	}

	::System::Void CAFPJCHDEHG(::IFOHGNLIAKH* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::IFOHGNLIAKH*))((::PBYTE)hIl2Cpp + FFFKJJDELEJ_CAEKGPMKAMP_CAFPJCHDEHG_OFFSET))(this, JOLDOMEIKEF);
	}
};
