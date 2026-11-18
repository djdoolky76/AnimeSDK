#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define KCJKEOHFDKL_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x13C53750)
#define KCJKEOHFDKL_ILEEFLAOOOM_OFFSET UNITYSDK_OFFSET(0x13C537A0)
#define KCJKEOHFDKL__CTOR_OFFSET UNITYSDK_OFFSET(0x13C53810)

inline static constexpr unsigned int KCJKEOHFDKL_TypeDefinitionIndex = 63938;

class KCJKEOHFDKL : public ::System::Object
{
public:
	::System::String* KEAHEADHMBI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCJKEOHFDKL__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCJKEOHFDKL_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 ILEEFLAOOOM()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCJKEOHFDKL_ILEEFLAOOOM_OFFSET))(this);
	}
};
