#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MBPEMPMEMGK_OKPEBKIPKDK_AELOOKBDJNG_OFFSET UNITYSDK_OFFSET(0x14D5EEE0)
#define MBPEMPMEMGK_OKPEBKIPKDK_MAHPCHDMFHM_OFFSET UNITYSDK_OFFSET(0x14D5EDF0)
#define MBPEMPMEMGK_OKPEBKIPKDK_NCFFJFIGJGH_OFFSET UNITYSDK_OFFSET(0x14D5EE90)
#define MBPEMPMEMGK_OKPEBKIPKDK__CTOR_OFFSET UNITYSDK_OFFSET(0x14D5EDE0)

inline static constexpr unsigned int MBPEMPMEMGK_OKPEBKIPKDK_TypeDefinitionIndex = 66016;

class MBPEMPMEMGK_OKPEBKIPKDK : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* CPCOBKCDFIF; // 0x10
	::System::Action* FFMGICPLKFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPEMPMEMGK_OKPEBKIPKDK__CTOR_OFFSET))(this);
	}

	::System::Void MAHPCHDMFHM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPEMPMEMGK_OKPEBKIPKDK_MAHPCHDMFHM_OFFSET))(this);
	}

	::System::Void NCFFJFIGJGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPEMPMEMGK_OKPEBKIPKDK_NCFFJFIGJGH_OFFSET))(this);
	}

	::System::Void AELOOKBDJNG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPEMPMEMGK_OKPEBKIPKDK_AELOOKBDJNG_OFFSET))(this);
	}
};
