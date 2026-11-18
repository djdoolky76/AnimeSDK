#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALDOKCCIFNB;
class BLNGLIBJBID;
class EHDGBEIJAAE;

#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS63_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18D00570)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS63_1__SETARCHIVEBATTLEQUESTCONTEXT_B__1_OFFSET UNITYSDK_OFFSET(0x18D00580)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS63_1__SETARCHIVEBATTLEQUESTCONTEXT_B__2_OFFSET UNITYSDK_OFFSET(0x18D005E0)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectContext___c__DisplayClass63_1_TypeDefinitionIndex = 81295;

	template <typename T>
	class UILineupSelectContext___c__DisplayClass63_1 : public ::System::Object
	{
	public:
		::ALDOKCCIFNB* data; // 0x10
		::System::Object* CS___8__locals1; // 0x18
		::EHDGBEIJAAE* mainStoryModel; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS63_1__CTOR_OFFSET))(this);
		}

		::System::Void _SetArchiveBattleQuestContext_b__1(::BLNGLIBJBID* ret)
		{
			return ((::System::Void(*)(::PVOID, ::BLNGLIBJBID*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS63_1__SETARCHIVEBATTLEQUESTCONTEXT_B__1_OFFSET))(this, ret);
		}

		::System::Void _SetArchiveBattleQuestContext_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS63_1__SETARCHIVEBATTLEQUESTCONTEXT_B__2_OFFSET))(this);
		}
	};
}
