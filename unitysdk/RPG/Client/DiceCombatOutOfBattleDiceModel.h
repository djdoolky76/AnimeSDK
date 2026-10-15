#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDPCDGOJKNK;
namespace RPG::Client { class DiceCombatOutOfBattleDiceModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_DICECOMBATOUTOFBATTLEDICEMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xCCC6130)
#define RPG_CLIENT_DICECOMBATOUTOFBATTLEDICEMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCCC64D0)
#define RPG_CLIENT_DICECOMBATOUTOFBATTLEDICEMODEL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xCCC6520)

namespace RPG::Client
{
	class DiceCombatOutOfBattleDiceModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::FDPCDGOJKNK*>* _Faces; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATOUTOFBATTLEDICEMODEL_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombatOutOfBattleDiceModel* Create(::System::UInt32 a1, ::UnityEngine::Transform* a2)
		{
			return ((::RPG::Client::DiceCombatOutOfBattleDiceModel*(*)(::System::UInt32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATOUTOFBATTLEDICEMODEL_CREATE_OFFSET))(a1, a2);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATOUTOFBATTLEDICEMODEL_ONDESTROY_OFFSET))(this);
		}

	};
}
