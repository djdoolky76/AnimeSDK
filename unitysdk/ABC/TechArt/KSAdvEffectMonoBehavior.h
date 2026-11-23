#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/TechArt/EffectMonoBehavior.h"

#define ABC_TECHART_KSADVEFFECTMONOBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x285E4B0)

namespace ABC::TechArt
{
	inline static constexpr unsigned int KSAdvEffectMonoBehavior_TypeDefinitionIndex = 16064;

	class KSAdvEffectMonoBehavior : public ::ABC::TechArt::EffectMonoBehavior
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_KSADVEFFECTMONOBEHAVIOR__CTOR_OFFSET))(this);
		}
	};
}
