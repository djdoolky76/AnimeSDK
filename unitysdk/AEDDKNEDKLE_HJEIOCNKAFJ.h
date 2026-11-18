#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GEILNPBJMFF;

#define AEDDKNEDKLE_HJEIOCNKAFJ_PBFPCEAEHGL_OFFSET UNITYSDK_OFFSET(0x12648420)
#define AEDDKNEDKLE_HJEIOCNKAFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x12648410)

inline static constexpr unsigned int AEDDKNEDKLE_HJEIOCNKAFJ_TypeDefinitionIndex = 56345;

class AEDDKNEDKLE_HJEIOCNKAFJ : public ::System::Object
{
public:
	::System::Int32 NACGJJKHEJE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEDDKNEDKLE_HJEIOCNKAFJ__CTOR_OFFSET))(this);
	}

	::System::Boolean PBFPCEAEHGL(::GEILNPBJMFF* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::GEILNPBJMFF*))((::PBYTE)hIl2Cpp + AEDDKNEDKLE_HJEIOCNKAFJ_PBFPCEAEHGL_OFFSET))(this, HAAEBCOBKFF);
	}
};
