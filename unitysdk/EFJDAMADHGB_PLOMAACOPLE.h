#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ELABNOEFDHI;
namespace System { class String; }

#define EFJDAMADHGB_PLOMAACOPLE_LFHIHIBALPN_OFFSET UNITYSDK_OFFSET(0x106348D0)
#define EFJDAMADHGB_PLOMAACOPLE__CTOR_OFFSET UNITYSDK_OFFSET(0x106348C0)

inline static constexpr unsigned int EFJDAMADHGB_PLOMAACOPLE_TypeDefinitionIndex = 54527;

class EFJDAMADHGB_PLOMAACOPLE : public ::System::Object
{
public:
	::System::String* HIAIKHDFCLN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJDAMADHGB_PLOMAACOPLE__CTOR_OFFSET))(this);
	}

	::ELABNOEFDHI* LFHIHIBALPN(::System::String* NIFBLFGAEOK)
	{
		return ((::ELABNOEFDHI*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EFJDAMADHGB_PLOMAACOPLE_LFHIHIBALPN_OFFSET))(this, NIFBLFGAEOK);
	}
};
