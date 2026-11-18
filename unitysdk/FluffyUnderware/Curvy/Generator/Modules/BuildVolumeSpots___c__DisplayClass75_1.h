#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::Generator { class CGBounds; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS___C__DISPLAYCLASS75_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2094B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS___C__DISPLAYCLASS75_1__REFRESH_B__0_OFFSET UNITYSDK_OFFSET(0x1F20B1B0)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int BuildVolumeSpots___c__DisplayClass75_1_TypeDefinitionIndex = 37603;

	template <typename T>
	class BuildVolumeSpots___c__DisplayClass75_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Single availableSpace; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS___C__DISPLAYCLASS75_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _Refresh_b__0(::FluffyUnderware::Curvy::Generator::CGBounds* i)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGBounds*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS___C__DISPLAYCLASS75_1__REFRESH_B__0_OFFSET))(this, i);
		}
	};
}
