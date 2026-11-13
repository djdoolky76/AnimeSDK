#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG___C__DISPLAYCLASS49_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9F0710)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG___C__DISPLAYCLASS49_0__ISLAYERINCLUDED_B__0_OFFSET UNITYSDK_OFFSET(0x1C9F0A90)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG___C__DISPLAYCLASS49_0__ISLAYERINCLUDED_B__1_OFFSET UNITYSDK_OFFSET(0x1C9F0AA0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitRemarkLineConfig___c__DisplayClass49_0_TypeDefinitionIndex = 67384;

	class GridFightTraitRemarkLineConfig___c__DisplayClass49_0 : public ::System::Object
	{
	public:
		::System::UInt32 layer; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG___C__DISPLAYCLASS49_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _IsLayerIncluded_b__0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG___C__DISPLAYCLASS49_0__ISLAYERINCLUDED_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _IsLayerIncluded_b__1(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG___C__DISPLAYCLASS49_0__ISLAYERINCLUDED_B__1_OFFSET))(this, a1);
		}

	};
}
