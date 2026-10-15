#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
class FBCGFMLJMLM;
namespace RPG::Client::NavMap { class ICartographer; }

#define RPG_CLIENT_FINDCHESTMODULE___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD004490)
#define RPG_CLIENT_FINDCHESTMODULE___C__DISPLAYCLASS4_0__TRIGGERFINDCHEST_B__0_OFFSET UNITYSDK_OFFSET(0xD0044A0)

namespace RPG::Client
{
	inline static constexpr unsigned int FindChestModule___c__DisplayClass4_0_TypeDefinitionIndex = 64202;

	class FindChestModule___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::RPG::Client::NavMap::ICartographer* playerCartographer; // 0x10
		::RPG::MVector3 avatarWorldPos; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Int32 _TriggerFindChest_b__0(::FBCGFMLJMLM* a1, ::FBCGFMLJMLM* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::FBCGFMLJMLM*, ::FBCGFMLJMLM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE___C__DISPLAYCLASS4_0__TRIGGERFINDCHEST_B__0_OFFSET))(this, a1, a2);
		}

	};
}
