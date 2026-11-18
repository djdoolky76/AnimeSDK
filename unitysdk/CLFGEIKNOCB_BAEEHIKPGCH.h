#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MIAKJIAIEDC;

#define CLFGEIKNOCB_BAEEHIKPGCH_MFLHKMHNBEP_OFFSET UNITYSDK_OFFSET(0x19A17CB0)
#define CLFGEIKNOCB_BAEEHIKPGCH__CTOR_OFFSET UNITYSDK_OFFSET(0x19A17CA0)

inline static constexpr unsigned int CLFGEIKNOCB_BAEEHIKPGCH_TypeDefinitionIndex = 39834;

class CLFGEIKNOCB_BAEEHIKPGCH : public ::System::Object
{
public:
	::System::Int32 OFBIMIABNEP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFGEIKNOCB_BAEEHIKPGCH__CTOR_OFFSET))(this);
	}

	::System::Boolean MFLHKMHNBEP(::MIAKJIAIEDC* AMJADGKJAPK)
	{
		return ((::System::Boolean(*)(::PVOID, ::MIAKJIAIEDC*))((::PBYTE)hIl2Cpp + CLFGEIKNOCB_BAEEHIKPGCH_MFLHKMHNBEP_OFFSET))(this, AMJADGKJAPK);
	}
};
