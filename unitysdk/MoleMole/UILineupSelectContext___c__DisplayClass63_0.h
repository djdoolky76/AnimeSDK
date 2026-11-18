#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AIEGLDMFMMF;
class ALDOKCCIFNB;

#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS63_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18D00340)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS63_0__SETARCHIVEBATTLEQUESTCONTEXT_B__0_OFFSET UNITYSDK_OFFSET(0x18D00350)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectContext___c__DisplayClass63_0_TypeDefinitionIndex = 81291;

	class UILineupSelectContext___c__DisplayClass63_0 : public ::System::Object
	{
	public:
		::AIEGLDMFMMF* questTemp; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS63_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetArchiveBattleQuestContext_b__0(::ALDOKCCIFNB* data)
		{
			return ((::System::Void(*)(::PVOID, ::ALDOKCCIFNB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS63_0__SETARCHIVEBATTLEQUESTCONTEXT_B__0_OFFSET))(this, data);
		}
	};
}
