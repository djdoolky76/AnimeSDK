#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MEHIFLDPPBH_AOFDAHHLMLJ_OFFSET UNITYSDK_OFFSET(0x15929220)
#define MEHIFLDPPBH_CCKINFGEPIF_OFFSET UNITYSDK_OFFSET(0x15929340)
#define MEHIFLDPPBH__CTOR_OFFSET UNITYSDK_OFFSET(0x15929210)

inline static constexpr unsigned int MEHIFLDPPBH_TypeDefinitionIndex = 40701;

class MEHIFLDPPBH : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHIFLDPPBH__CTOR_OFFSET))(this);
	}

	static ::System::String* AOFDAHHLMLJ()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MEHIFLDPPBH_AOFDAHHLMLJ_OFFSET))();
	}

	static ::System::String* CCKINFGEPIF()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MEHIFLDPPBH_CCKINFGEPIF_OFFSET))();
	}
};
