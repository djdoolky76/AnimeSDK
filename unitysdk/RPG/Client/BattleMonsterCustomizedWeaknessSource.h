#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KILLLKIAIDO;
class KLJLODIBPDF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATTLEMONSTERCUSTOMIZEDWEAKNESSSOURCE_CLEARHIGHLIGHTLIST_OFFSET UNITYSDK_OFFSET(0xD1A8D90)
#define RPG_CLIENT_BATTLEMONSTERCUSTOMIZEDWEAKNESSSOURCE_CTOR_OFFSET UNITYSDK_OFFSET(0xD1A8E30)
#define RPG_CLIENT_BATTLEMONSTERCUSTOMIZEDWEAKNESSSOURCE_GET_RATIO_OFFSET UNITYSDK_OFFSET(0xD1A8D30)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleMonsterCustomizedWeaknessSource_TypeDefinitionIndex = 73798;

	class BattleMonsterCustomizedWeaknessSource : public ::System::Object
	{
	public:
		::KLJLODIBPDF* ClickCommand; // 0x10
		::System::Collections::Generic::List_1<::KILLLKIAIDO*>* HighlightList; // 0x18
		::System::Collections::Generic::List_1<::KILLLKIAIDO*>* WeaknessList; // 0x20
		::System::Boolean IsActive; // 0x28
		::System::Byte _padding0[0x3];
		::System::Single Current; // 0x2C
		::System::Single Max; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERCUSTOMIZEDWEAKNESSSOURCE_CTOR_OFFSET))(this);
		}

		::System::Single get_Ratio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERCUSTOMIZEDWEAKNESSSOURCE_GET_RATIO_OFFSET))(this);
		}

		::System::Void ClearHighlightList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERCUSTOMIZEDWEAKNESSSOURCE_CLEARHIGHLIGHTLIST_OFFSET))(this);
		}

	};
}
