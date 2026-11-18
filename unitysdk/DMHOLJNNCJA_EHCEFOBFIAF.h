#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PNCGCMHIOGN;

#define DMHOLJNNCJA_EHCEFOBFIAF_BOBOIIJHKAM_OFFSET UNITYSDK_OFFSET(0x149BE820)
#define DMHOLJNNCJA_EHCEFOBFIAF__CTOR_OFFSET UNITYSDK_OFFSET(0x149BE810)

inline static constexpr unsigned int DMHOLJNNCJA_EHCEFOBFIAF_TypeDefinitionIndex = 46941;

class DMHOLJNNCJA_EHCEFOBFIAF : public ::System::Object
{
public:
	::System::UInt32 CDONJOHFOMM; // 0x10
	::System::UInt32 FIOCHBBFGLA; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHOLJNNCJA_EHCEFOBFIAF__CTOR_OFFSET))(this);
	}

	::System::Boolean BOBOIIJHKAM(::PNCGCMHIOGN* NOCCODBMGFP)
	{
		return ((::System::Boolean(*)(::PVOID, ::PNCGCMHIOGN*))((::PBYTE)hIl2Cpp + DMHOLJNNCJA_EHCEFOBFIAF_BOBOIIJHKAM_OFFSET))(this, NOCCODBMGFP);
	}
};
