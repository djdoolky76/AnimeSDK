#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class PopImage; }

#define MIHOYO_SDK_POPIMAGE_A656F5788EF33ACA_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x393B8F0)
#define MIHOYO_SDK_POPIMAGE_A656F5788EF33ACA__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PopImage_A656F5788EF33ACA_TypeDefinitionIndex = 12356;

	class PopImage_A656F5788EF33ACA : public ::System::Object
	{
	public:
		::System::Boolean F3A9AE2CE6C68915; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPIMAGE_A656F5788EF33ACA__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::PopImage* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PopImage*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPIMAGE_A656F5788EF33ACA_BF3138F24160F012_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
