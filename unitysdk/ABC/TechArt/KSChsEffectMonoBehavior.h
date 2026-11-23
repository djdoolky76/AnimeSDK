#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/TechArt/EffectMonoBehavior.h"

#define ABC_TECHART_KSCHSEFFECTMONOBEHAVIOR_E37E569E4B7B49B8_OFFSET UNITYSDK_OFFSET(0x28C9780)
#define ABC_TECHART_KSCHSEFFECTMONOBEHAVIOR_F93298AF0E97A0C2_OFFSET UNITYSDK_OFFSET(0x28C9770)
#define ABC_TECHART_KSCHSEFFECTMONOBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x28C9890)

namespace ABC::TechArt
{
	inline static constexpr unsigned int KSChsEffectMonoBehavior_TypeDefinitionIndex = 16326;

	class KSChsEffectMonoBehavior : public ::ABC::TechArt::EffectMonoBehavior
	{
	public:
		::System::Single OutlineWidth; // 0x28

		::System::Void F93298AF0E97A0C2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_KSCHSEFFECTMONOBEHAVIOR_F93298AF0E97A0C2_OFFSET))(this);
		}

		::System::Void E37E569E4B7B49B8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_KSCHSEFFECTMONOBEHAVIOR_E37E569E4B7B49B8_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_KSCHSEFFECTMONOBEHAVIOR__CTOR_OFFSET))(this);
		}
	};
}
