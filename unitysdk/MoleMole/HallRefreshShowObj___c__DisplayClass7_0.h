#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GDEJGKHDNBG;
class JGPGPIFEMCI;
class OBGAOILIIFG;
namespace MoleMole { class HallRefreshShowObj; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_HALLREFRESHSHOWOBJ___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12466C60)
#define MOLEMOLE_HALLREFRESHSHOWOBJ___C__DISPLAYCLASS7_0__ONPROCESS_B__7_OFFSET UNITYSDK_OFFSET(0x12466E30)
#define MOLEMOLE_HALLREFRESHSHOWOBJ___C__DISPLAYCLASS7_0__ONPROCESS_G__ALLOCATELIST_4_OFFSET UNITYSDK_OFFSET(0x12466EA0)
#define MOLEMOLE_HALLREFRESHSHOWOBJ___C__DISPLAYCLASS7_0__ONPROCESS_G__CHANGETIME_2_OFFSET UNITYSDK_OFFSET(0x12469320)
#define MOLEMOLE_HALLREFRESHSHOWOBJ___C__DISPLAYCLASS7_0__ONPROCESS_G__CHANGE_1_OFFSET UNITYSDK_OFFSET(0x12466F40)
#define MOLEMOLE_HALLREFRESHSHOWOBJ___C__DISPLAYCLASS7_0__ONPROCESS_G__DEALLOCATELIST_5_OFFSET UNITYSDK_OFFSET(0x12469500)
#define MOLEMOLE_HALLREFRESHSHOWOBJ___C__DISPLAYCLASS7_0__ONPROCESS_G__REGISTERAVATARSETPOSITION_0_OFFSET UNITYSDK_OFFSET(0x12466C70)

namespace MoleMole
{
	inline static constexpr unsigned int HallRefreshShowObj___c__DisplayClass7_0_TypeDefinitionIndex = 65510;

	class HallRefreshShowObj___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::OBGAOILIIFG* localHallScene; // 0x10
		::MoleMole::HallRefreshShowObj* __4__this; // 0x18
		::System::Collections::Generic::List_1<::JGPGPIFEMCI*>* addList; // 0x20
		::System::Collections::Generic::List_1<::JGPGPIFEMCI*>* hideList; // 0x28
		::GDEJGKHDNBG* hallScene; // 0x30
		::System::Collections::Generic::List_1<::JGPGPIFEMCI*>* delList; // 0x38
		::System::Collections::Generic::List_1<::JGPGPIFEMCI*>* interactList; // 0x40
		::System::Collections::Generic::List_1<::JGPGPIFEMCI*>* showList; // 0x48
		::System::Boolean timeChanged; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HALLREFRESHSHOWOBJ___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnProcess_g__RegisterAvatarSetPosition_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HALLREFRESHSHOWOBJ___C__DISPLAYCLASS7_0__ONPROCESS_G__REGISTERAVATARSETPOSITION_0_OFFSET))(this);
		}

		::System::Void _OnProcess_b__7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HALLREFRESHSHOWOBJ___C__DISPLAYCLASS7_0__ONPROCESS_B__7_OFFSET))(this);
		}

		::System::Void _OnProcess_g__Change_1(::System::Boolean isNeedLoading)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HALLREFRESHSHOWOBJ___C__DISPLAYCLASS7_0__ONPROCESS_G__CHANGE_1_OFFSET))(this, isNeedLoading);
		}

		::System::Void _OnProcess_g__ChangeTime_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HALLREFRESHSHOWOBJ___C__DISPLAYCLASS7_0__ONPROCESS_G__CHANGETIME_2_OFFSET))(this);
		}

		::System::Void _OnProcess_g__AllocateList_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HALLREFRESHSHOWOBJ___C__DISPLAYCLASS7_0__ONPROCESS_G__ALLOCATELIST_4_OFFSET))(this);
		}

		::System::Void _OnProcess_g__DeallocateList_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HALLREFRESHSHOWOBJ___C__DISPLAYCLASS7_0__ONPROCESS_G__DEALLOCATELIST_5_OFFSET))(this);
		}
	};
}
