#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_PARTNERAVATARDYNAMICLOADSUBSYSTEM___C__DISPLAYCLASS7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x135C7B20)
#define MOLEMOLE_PARTNERAVATARDYNAMICLOADSUBSYSTEM___C__DISPLAYCLASS7_1__SYNCBYROBOTIDS_B__0_OFFSET UNITYSDK_OFFSET(0x135C7B30)

namespace MoleMole
{
	inline static constexpr unsigned int PartnerAvatarDynamicLoadSubSystem___c__DisplayClass7_1_TypeDefinitionIndex = 68988;

	template <typename T>
	class PartnerAvatarDynamicLoadSubSystem___c__DisplayClass7_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Action_1<::MoleMole::Battle::Entity*>* __9__0; // 0x18
		::System::Int32 pendingCount; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PARTNERAVATARDYNAMICLOADSUBSYSTEM___C__DISPLAYCLASS7_1__CTOR_OFFSET))(this);
		}

		::System::Void _SyncByRobotIDs_b__0(::MoleMole::Battle::Entity* _)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_PARTNERAVATARDYNAMICLOADSUBSYSTEM___C__DISPLAYCLASS7_1__SYNCBYROBOTIDS_B__0_OFFSET))(this, _);
		}
	};
}
