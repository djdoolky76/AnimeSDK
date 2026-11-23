#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RayFire/RFMeshExport_F91468406440F291.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RAYFIRE_RFMESHEXPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x29F78E0)

namespace RayFire
{
	inline static constexpr unsigned int RFMeshExport_TypeDefinitionIndex = 15799;

	class RFMeshExport : public ::System::Object
	{
	public:
		::RayFire::RFMeshExport_F91468406440F291 source; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* suffix; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFMESHEXPORT__CTOR_OFFSET))(this);
		}
	};
}
