#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NJIEOECLNOM;
namespace System { class String; }

#define DONGCBIGJJL_DEFOPGLDGGP_DGLLICGIELP_OFFSET UNITYSDK_OFFSET(0x13E65440)
#define DONGCBIGJJL_DEFOPGLDGGP__CTOR_OFFSET UNITYSDK_OFFSET(0x13E65430)

inline static constexpr unsigned int DONGCBIGJJL_DEFOPGLDGGP_TypeDefinitionIndex = 70485;

class DONGCBIGJJL_DEFOPGLDGGP : public ::System::Object
{
public:
	::NJIEOECLNOM* HFDHDEMENPC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONGCBIGJJL_DEFOPGLDGGP__CTOR_OFFSET))(this);
	}

	::System::String* DGLLICGIELP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DONGCBIGJJL_DEFOPGLDGGP_DGLLICGIELP_OFFSET))(this);
	}
};
