#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INMMPMDELKE;
class MHIHPODNPMO;
namespace RPG::GameCore { class FourRotateVoxelPortalConfig; }

#define MHIHPODNPMO___C__DISPLAYCLASS11_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB938B40)
#define MHIHPODNPMO___C__DISPLAYCLASS11_0__INITIALIZE_B__0_OFFSET UNITYSDK_OFFSET(0xB93D0A0)

inline static constexpr unsigned int MHIHPODNPMO___c__DisplayClass11_0_TypeDefinitionIndex = 76778;

	class MHIHPODNPMO___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::MHIHPODNPMO* __4__this; // 0x10
		::RPG::GameCore::FourRotateVoxelPortalConfig* config; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHIHPODNPMO___C__DISPLAYCLASS11_0_CTOR_OFFSET))(this);
		}

		::System::Void _Initialize_b__0(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + MHIHPODNPMO___C__DISPLAYCLASS11_0__INITIALIZE_B__0_OFFSET))(this, a1);
		}

	};
