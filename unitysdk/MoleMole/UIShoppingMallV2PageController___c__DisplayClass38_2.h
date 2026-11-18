#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OBOPDFEMAFJ.h"

#define MOLEMOLE_UISHOPPINGMALLV2PAGECONTROLLER___C__DISPLAYCLASS38_2__CTOR_OFFSET UNITYSDK_OFFSET(0x164A9EE0)
#define MOLEMOLE_UISHOPPINGMALLV2PAGECONTROLLER___C__DISPLAYCLASS38_2__DOBUY_B__1_OFFSET UNITYSDK_OFFSET(0x164A9EF0)
#define MOLEMOLE_UISHOPPINGMALLV2PAGECONTROLLER___C__DISPLAYCLASS38_2__DOBUY_B__2_OFFSET UNITYSDK_OFFSET(0x164A9F90)

namespace MoleMole
{
	inline static constexpr unsigned int UIShoppingMallV2PageController___c__DisplayClass38_2_TypeDefinitionIndex = 77166;

	template <typename T1, typename T2>
	class UIShoppingMallV2PageController___c__DisplayClass38_2 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals2; // 0x10
		::System::UInt32 tabDataId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLV2PAGECONTROLLER___C__DISPLAYCLASS38_2__CTOR_OFFSET))(this);
		}

		::System::Void _DoBuy_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLV2PAGECONTROLLER___C__DISPLAYCLASS38_2__DOBUY_B__1_OFFSET))(this);
		}

		::System::Void _DoBuy_b__2(::OBOPDFEMAFJ e)
		{
			return ((::System::Void(*)(::PVOID, ::OBOPDFEMAFJ))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLV2PAGECONTROLLER___C__DISPLAYCLASS38_2__DOBUY_B__2_OFFSET))(this, e);
		}
	};
}
