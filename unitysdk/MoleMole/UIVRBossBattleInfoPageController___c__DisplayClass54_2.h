#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALDOKCCIFNB;
class BOJBNJKFGMN;
class KDFEBFHFCHO;

#define MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS54_2__CTOR_OFFSET UNITYSDK_OFFSET(0x10561B80)
#define MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS54_2__GOSINGLEPLAYREAL_B__3_OFFSET UNITYSDK_OFFSET(0x10561B90)

namespace MoleMole
{
	inline static constexpr unsigned int UIVRBossBattleInfoPageController___c__DisplayClass54_2_TypeDefinitionIndex = 50395;

	template <typename T1, typename T2>
	class UIVRBossBattleInfoPageController___c__DisplayClass54_2 : public ::System::Object
	{
	public:
		::BOJBNJKFGMN* difficulty; // 0x10
		::KDFEBFHFCHO* questData; // 0x18
		::System::Object* CS___8__locals2; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS54_2__CTOR_OFFSET))(this);
		}

		::System::Void _GoSinglePlayReal_b__3(::ALDOKCCIFNB* data)
		{
			return ((::System::Void(*)(::PVOID, ::ALDOKCCIFNB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEINFOPAGECONTROLLER___C__DISPLAYCLASS54_2__GOSINGLEPLAYREAL_B__3_OFFSET))(this, data);
		}
	};
}
