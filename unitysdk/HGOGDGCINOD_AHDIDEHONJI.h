#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HDBIKLMCCCK;
class LCDOMEFKJKM;

#define HGOGDGCINOD_AHDIDEHONJI_NEGNHMOIBKE_OFFSET UNITYSDK_OFFSET(0x17AF7030)
#define HGOGDGCINOD_AHDIDEHONJI__CTOR_OFFSET UNITYSDK_OFFSET(0x17AF7020)

inline static constexpr unsigned int HGOGDGCINOD_AHDIDEHONJI_TypeDefinitionIndex = 61648;

class HGOGDGCINOD_AHDIDEHONJI : public ::System::Object
{
public:
	::LCDOMEFKJKM* LOHHAFCFEBJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGOGDGCINOD_AHDIDEHONJI__CTOR_OFFSET))(this);
	}

	::HDBIKLMCCCK* NEGNHMOIBKE()
	{
		return ((::HDBIKLMCCCK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGOGDGCINOD_AHDIDEHONJI_NEGNHMOIBKE_OFFSET))(this);
	}
};
