#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OABDFLPEHDO;
namespace RPG::Client { class GridFightGameRefTrait; }

#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR___C__DISPLAYCLASS5_1_CTOR_OFFSET UNITYSDK_OFFSET(0xDC44290)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR___C__DISPLAYCLASS5_1___CTOR_B__1_OFFSET UNITYSDK_OFFSET(0xDC44B00)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR___C__DISPLAYCLASS5_1___CTOR_B__2_OFFSET UNITYSDK_OFFSET(0xDC44B30)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR___C__DISPLAYCLASS5_1___CTOR_B__3_OFFSET UNITYSDK_OFFSET(0xDC44B70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRefTraitLayerCalculator___c__DisplayClass5_1_TypeDefinitionIndex = 66366;

	template <typename T>
	class GridFightRefTraitLayerCalculator___c__DisplayClass5_1 : public ::System::Object
	{
	public:
		::OABDFLPEHDO* rule; // 0x10
		::System::UInt32 rid; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR___C__DISPLAYCLASS5_1_CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__1(::OABDFLPEHDO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OABDFLPEHDO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR___C__DISPLAYCLASS5_1___CTOR_B__1_OFFSET))(this, a1);
		}

		::System::Boolean __ctor_b__2(::RPG::Client::GridFightGameRefTrait* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameRefTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR___C__DISPLAYCLASS5_1___CTOR_B__2_OFFSET))(this, a1);
		}

		::System::Boolean __ctor_b__3(::RPG::Client::GridFightGameRefTrait* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameRefTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR___C__DISPLAYCLASS5_1___CTOR_B__3_OFFSET))(this, a1);
		}

	};
}
