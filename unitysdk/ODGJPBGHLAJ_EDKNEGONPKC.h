#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IEBELKKFPDK;
namespace System { class Action; }

#define ODGJPBGHLAJ_EDKNEGONPKC_KJLGOCGOKFP_OFFSET UNITYSDK_OFFSET(0x12922090)
#define ODGJPBGHLAJ_EDKNEGONPKC__CTOR_OFFSET UNITYSDK_OFFSET(0x12922080)

inline static constexpr unsigned int ODGJPBGHLAJ_EDKNEGONPKC_TypeDefinitionIndex = 83789;

class ODGJPBGHLAJ_EDKNEGONPKC : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGJPBGHLAJ_EDKNEGONPKC__CTOR_OFFSET))(this);
	}

	::System::Void KJLGOCGOKFP(::IEBELKKFPDK* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::IEBELKKFPDK*))((::PBYTE)hIl2Cpp + ODGJPBGHLAJ_EDKNEGONPKC_KJLGOCGOKFP_OFFSET))(this, DJCNCELJPOM);
	}
};
