#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS136_1__CTOR_OFFSET UNITYSDK_OFFSET(0x184C8A20)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS136_1__PLAYNOAVATARSTORYNODE_B__4_OFFSET UNITYSDK_OFFSET(0x184C8A30)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS136_1__PLAYNOAVATARSTORYNODE_B__5_OFFSET UNITYSDK_OFFSET(0x184C8B10)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass136_1_TypeDefinitionIndex = 44741;

	template <typename T>
	class UIGalgamePageController___c__DisplayClass136_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Int32 voiceLengthMs; // 0x18
		::System::Byte _padding0[0x4];
		::System::Int64 startTimeStampMs; // 0x20
		::System::Int64 stopTimeStampMs; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS136_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayNoAvatarStoryNode_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS136_1__PLAYNOAVATARSTORYNODE_B__4_OFFSET))(this);
		}

		::System::Void _PlayNoAvatarStoryNode_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS136_1__PLAYNOAVATARSTORYNODE_B__5_OFFSET))(this);
		}
	};
}
