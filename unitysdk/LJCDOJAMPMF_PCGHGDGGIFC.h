#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define LJCDOJAMPMF_PCGHGDGGIFC_CKEMNJODHCH_OFFSET UNITYSDK_OFFSET(0x1A60DC20)
#define LJCDOJAMPMF_PCGHGDGGIFC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A60DC10)

inline static constexpr unsigned int LJCDOJAMPMF_PCGHGDGGIFC_TypeDefinitionIndex = 71950;

class LJCDOJAMPMF_PCGHGDGGIFC : public ::System::Object
{
public:
	::HOCDHMEPPEG ECLGGGCDNKC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJCDOJAMPMF_PCGHGDGGIFC__CTOR_OFFSET))(this);
	}

	::System::Void CKEMNJODHCH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJCDOJAMPMF_PCGHGDGGIFC_CKEMNJODHCH_OFFSET))(this);
	}
};
