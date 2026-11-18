#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDBDJENIDEO_CHHONDACICG.h"
#include "unitysdk/System/Object.h"

#define EDBDJENIDEO_CKAOBNPKNLH_EBCFFKOBAGD_OFFSET UNITYSDK_OFFSET(0x15497620)
#define EDBDJENIDEO_CKAOBNPKNLH__CTOR_OFFSET UNITYSDK_OFFSET(0x15497610)

inline static constexpr unsigned int EDBDJENIDEO_CKAOBNPKNLH_TypeDefinitionIndex = 90363;

class EDBDJENIDEO_CKAOBNPKNLH : public ::System::Object
{
public:
	::EDBDJENIDEO_CHHONDACICG PGANALDOPOG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBDJENIDEO_CKAOBNPKNLH__CTOR_OFFSET))(this);
	}

	::System::Boolean EBCFFKOBAGD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBDJENIDEO_CKAOBNPKNLH_EBCFFKOBAGD_OFFSET))(this);
	}
};
