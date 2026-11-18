#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS129_2__CTOR_OFFSET UNITYSDK_OFFSET(0x19C26660)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS129_2__PLAYSUBNARRATORNODE_B__6_OFFSET UNITYSDK_OFFSET(0x19C26670)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS129_2__PLAYSUBNARRATORNODE_B__7_OFFSET UNITYSDK_OFFSET(0x19C26750)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass129_2_TypeDefinitionIndex = 44815;

	template <typename T1, typename T2>
	class UIGalgamePageController___c__DisplayClass129_2 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals2; // 0x10
		::System::Int32 voiceLengthMs; // 0x18
		::System::Byte _padding0[0x4];
		::System::Int64 startTimeStampMs; // 0x20
		::System::Int64 stopTimeStampMs; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS129_2__CTOR_OFFSET))(this);
		}

		::System::Void _PlaySubNarratorNode_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS129_2__PLAYSUBNARRATORNODE_B__6_OFFSET))(this);
		}

		::System::Void _PlaySubNarratorNode_b__7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS129_2__PLAYSUBNARRATORNODE_B__7_OFFSET))(this);
		}
	};
}
