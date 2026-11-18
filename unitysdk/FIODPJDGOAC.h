#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GCMHOKJFMMI;

#define FIODPJDGOAC_KNDMMHPDPIB_OFFSET UNITYSDK_OFFSET(0xBB48FC0)
#define FIODPJDGOAC__CTOR_OFFSET UNITYSDK_OFFSET(0xBB48FB0)

inline static constexpr unsigned int FIODPJDGOAC_TypeDefinitionIndex = 77335;

class FIODPJDGOAC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIODPJDGOAC__CTOR_OFFSET))(this);
	}

	static ::System::Void KNDMMHPDPIB(::GCMHOKJFMMI* DPPFJDCEIOO)
	{
		return ((::System::Void(*)(::GCMHOKJFMMI*))((::PBYTE)hIl2Cpp + FIODPJDGOAC_KNDMMHPDPIB_OFFSET))(DPPFJDCEIOO);
	}
};
