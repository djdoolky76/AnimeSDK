#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MatAnimation;
class NDGCMMKJPAN;
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__DISPLAYCLASS50_3__CTOR_OFFSET UNITYSDK_OFFSET(0x15994520)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__DISPLAYCLASS50_3__ONCLICKEQUIPLEVELBTN_B__3_OFFSET UNITYSDK_OFFSET(0x15994530)
#define MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__DISPLAYCLASS50_3__ONCLICKEQUIPLEVELBTN_B__4_OFFSET UNITYSDK_OFFSET(0x159945D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIEquipDevelopPopWindowController___c__DisplayClass50_3_TypeDefinitionIndex = 43341;

	template <typename T1, typename T2, typename T3>
	class UIEquipDevelopPopWindowController___c__DisplayClass50_3 : public ::System::Object
	{
	public:
		::UnityEngine::Animation* anim; // 0x10
		::NDGCMMKJPAN* newInfo; // 0x18
		::System::Object* CS___8__locals1; // 0x20
		::MatAnimation* matAnim; // 0x28
		::System::Int32 canMaxLevel; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__DISPLAYCLASS50_3__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickEquipLevelBtn_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__DISPLAYCLASS50_3__ONCLICKEQUIPLEVELBTN_B__3_OFFSET))(this);
		}

		::System::Void _OnClickEquipLevelBtn_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPDEVELOPPOPWINDOWCONTROLLER___C__DISPLAYCLASS50_3__ONCLICKEQUIPLEVELBTN_B__4_OFFSET))(this);
		}
	};
}
