#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MEMPIHFBILL;
template <typename T> class EAMHGKMLJAF_1;

#define GIOACCCHJFL_MJIFJLLBNEN_OFFSET UNITYSDK_OFFSET(0x14CEB260)
#define GIOACCCHJFL__CTOR_OFFSET UNITYSDK_OFFSET(0x14CEB300)

inline static constexpr unsigned int GIOACCCHJFL_TypeDefinitionIndex = 91779;

class GIOACCCHJFL : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIOACCCHJFL__CTOR_OFFSET))(this);
	}

	::System::Void MJIFJLLBNEN(::EAMHGKMLJAF_1<::MEMPIHFBILL*>* GENNIFDPOAM)
	{
		return ((::System::Void(*)(::PVOID, ::EAMHGKMLJAF_1<::MEMPIHFBILL*>*))((::PBYTE)hIl2Cpp + GIOACCCHJFL_MJIFJLLBNEN_OFFSET))(this, GENNIFDPOAM);
	}
};
