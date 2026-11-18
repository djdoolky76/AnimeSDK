#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_RESERVEDOBJECTPOOL___C__DISPLAYCLASS28_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15E83E70)
#define FOUNDATION_RESERVEDOBJECTPOOL___C__DISPLAYCLASS28_1__INIT_B__2_OFFSET UNITYSDK_OFFSET(0x15E83E80)

namespace Foundation
{
	inline static constexpr unsigned int ReservedObjectPool___c__DisplayClass28_1_TypeDefinitionIndex = 90631;

	template <typename T>
	class ReservedObjectPool___c__DisplayClass28_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::Foundation::AssetRequestHandle handle; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOL___C__DISPLAYCLASS28_1__CTOR_OFFSET))(this);
		}

		::System::Void _Init_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOL___C__DISPLAYCLASS28_1__INIT_B__2_OFFSET))(this);
		}
	};
}
