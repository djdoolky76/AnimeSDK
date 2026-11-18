#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS144_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19C26860)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS144_1__PLAYSTORYNODE_B__8_OFFSET UNITYSDK_OFFSET(0x19C26870)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS144_1__PLAYSTORYNODE_B__9_OFFSET UNITYSDK_OFFSET(0x19C26950)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass144_1_TypeDefinitionIndex = 44768;

	template <typename T>
	class UIGalgamePageController___c__DisplayClass144_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Int64 stopTimeStampMs; // 0x18
		::System::Int32 voiceLengthMs; // 0x20
		::System::Byte _padding0[0x4];
		::System::Int64 startTimeStampMs; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS144_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayStoryNode_b__8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS144_1__PLAYSTORYNODE_B__8_OFFSET))(this);
		}

		::System::Void _PlayStoryNode_b__9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS144_1__PLAYSTORYNODE_B__9_OFFSET))(this);
		}
	};
}
