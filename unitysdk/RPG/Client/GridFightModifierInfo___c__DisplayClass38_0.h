#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightPrayQuestFinishType; }

#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS38_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDBE4000)
#define RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS38_0__ISPRAYQUESTACTIVITED_B__0_OFFSET UNITYSDK_OFFSET(0xDBE46A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModifierInfo___c__DisplayClass38_0_TypeDefinitionIndex = 66678;

	class GridFightModifierInfo___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::System::UInt32 questID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS38_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _IsPrayQuestActivited_b__0(::RPG::Client::GridFightPrayQuestFinishType* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightPrayQuestFinishType*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERINFO___C__DISPLAYCLASS38_0__ISPRAYQUESTACTIVITED_B__0_OFFSET))(this, a1);
		}

	};
}
