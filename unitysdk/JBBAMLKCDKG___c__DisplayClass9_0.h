#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOACJPEHDKO;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentPointViewModel; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define JBBAMLKCDKG___C__DISPLAYCLASS9_0_CTOR_OFFSET UNITYSDK_OFFSET(0x16560530)
#define JBBAMLKCDKG___C__DISPLAYCLASS9_0___FINDPATH_B__0_OFFSET UNITYSDK_OFFSET(0x16560580)
#define JBBAMLKCDKG___C__DISPLAYCLASS9_0___FINDPATH_B__1_OFFSET UNITYSDK_OFFSET(0x16560720)

	class JBBAMLKCDKG___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::Func_2<::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*, ::System::Boolean>* __9__1; // 0x10
		::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* point; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBBAMLKCDKG___C__DISPLAYCLASS9_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __FindPath_b__0(::FOACJPEHDKO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FOACJPEHDKO*))((::PBYTE)hIl2Cpp + JBBAMLKCDKG___C__DISPLAYCLASS9_0___FINDPATH_B__0_OFFSET))(this, a1);
		}

		::System::Boolean __FindPath_b__1(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*))((::PBYTE)hIl2Cpp + JBBAMLKCDKG___C__DISPLAYCLASS9_0___FINDPATH_B__1_OFFSET))(this, a1);
		}

	};
