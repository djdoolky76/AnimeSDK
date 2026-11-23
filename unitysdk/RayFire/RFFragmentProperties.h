#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E33DBE3D45A5731A/FAA1550E94DEA92B.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RAYFIRE_RFFRAGMENTPROPERTIES_COPYFROM_OFFSET UNITYSDK_OFFSET(0x29F7840)
#define RAYFIRE_RFFRAGMENTPROPERTIES__CTOR_OFFSET UNITYSDK_OFFSET(0x29F7880)

namespace RayFire
{
	inline static constexpr unsigned int RFFragmentProperties_TypeDefinitionIndex = 15768;

	class RFFragmentProperties : public ::System::Object
	{
	public:
		::E33DBE3D45A5731A::FAA1550E94DEA92B colliderType; // 0x10
		::System::Single sizeFilter; // 0x14
		::System::Boolean decompose; // 0x18
		::System::Boolean removeCollinear; // 0x19
		::System::Byte _padding0[0x6];
		::System::String* layer; // 0x20

		::System::Void CopyFrom(::RayFire::RFFragmentProperties* AA992716D02BBA65)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RFFragmentProperties*))((::PBYTE)hIl2Cpp + RAYFIRE_RFFRAGMENTPROPERTIES_COPYFROM_OFFSET))(this, AA992716D02BBA65);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFFRAGMENTPROPERTIES__CTOR_OFFSET))(this);
		}
	};
}
