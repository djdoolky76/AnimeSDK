#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MHLOCKICGOJ;
namespace System { class String; }

#define HANBKJKMAIL_BBKFMIIOMGM_LFHIHIBALPN_OFFSET UNITYSDK_OFFSET(0x15B39A10)
#define HANBKJKMAIL_BBKFMIIOMGM__CTOR_OFFSET UNITYSDK_OFFSET(0x15B39A00)

inline static constexpr unsigned int HANBKJKMAIL_BBKFMIIOMGM_TypeDefinitionIndex = 46754;

class HANBKJKMAIL_BBKFMIIOMGM : public ::System::Object
{
public:
	::System::String* HIAIKHDFCLN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HANBKJKMAIL_BBKFMIIOMGM__CTOR_OFFSET))(this);
	}

	::MHLOCKICGOJ* LFHIHIBALPN(::System::String* NIFBLFGAEOK)
	{
		return ((::MHLOCKICGOJ*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HANBKJKMAIL_BBKFMIIOMGM_LFHIHIBALPN_OFFSET))(this, NIFBLFGAEOK);
	}
};
