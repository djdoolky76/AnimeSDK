#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIPinballStoryPreparePageController; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIPINBALLSTORYPREPAREPAGECONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x168D75B0)
#define MOLEMOLE_UIPINBALLSTORYPREPAREPAGECONTROLLER___C__DISPLAYCLASS10_0__INITTABBTN_B__1_OFFSET UNITYSDK_OFFSET(0x168D75C0)
#define MOLEMOLE_UIPINBALLSTORYPREPAREPAGECONTROLLER___C__DISPLAYCLASS10_0__INITTABBTN_G__RESOLVEDEFAULTTABINDEX_0_OFFSET UNITYSDK_OFFSET(0x168D75E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPinballStoryPreparePageController___c__DisplayClass10_0_TypeDefinitionIndex = 64441;

	class UIPinballStoryPreparePageController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::Func_2<::System::Int32, ::System::Boolean>* __9__1; // 0x10
		::MoleMole::UIPinballStoryPreparePageController* __4__this; // 0x18
		::System::Int32 unlockIndex; // 0x20
		::System::Int32 newIndex; // 0x24
		::System::Int32 trackIndex; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLSTORYPREPAREPAGECONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitTabBtn_b__1(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLSTORYPREPAREPAGECONTROLLER___C__DISPLAYCLASS10_0__INITTABBTN_B__1_OFFSET))(this, index);
		}

		::System::Int32 _InitTabBtn_g__ResolveDefaultTabIndex_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLSTORYPREPAREPAGECONTROLLER___C__DISPLAYCLASS10_0__INITTABBTN_G__RESOLVEDEFAULTTABINDEX_0_OFFSET))(this);
		}
	};
}
