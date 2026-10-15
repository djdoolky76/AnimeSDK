#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"
class DLNGPHPNPAN;
namespace RPG::GameCore { class GameWorld; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ALJMGGJLOEE_CLDGDEAJKMN_OFFSET UNITYSDK_OFFSET(0x15564030)
#define ALJMGGJLOEE_CTOR_OFFSET UNITYSDK_OFFSET(0x15563960)
#define ALJMGGJLOEE_GHONNAKAGDB_OFFSET UNITYSDK_OFFSET(0x15563B60)
#define ALJMGGJLOEE_LOCK_OFFSET UNITYSDK_OFFSET(0x15563970)
#define ALJMGGJLOEE_UNLOCK_OFFSET UNITYSDK_OFFSET(0x15563DF0)

inline static constexpr unsigned int ALJMGGJLOEE_TypeDefinitionIndex = 74772;

	class ALJMGGJLOEE : public ::RPG::Client::GamePlayLockTargetFunc
	{
	public:
		::System::Void _ctor(::System::Collections::Generic::List_1<::DLNGPHPNPAN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DLNGPHPNPAN*>*))((::PBYTE)hIl2Cpp + ALJMGGJLOEE_CTOR_OFFSET))(this, a1);
		}

		::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + ALJMGGJLOEE_LOCK_OFFSET))(this, a1);
		}

		::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + ALJMGGJLOEE_UNLOCK_OFFSET))(this, a1);
		}

		::System::Void CLDGDEAJKMN(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + ALJMGGJLOEE_CLDGDEAJKMN_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameWorld* GHONNAKAGDB()
		{
			return ((::RPG::GameCore::GameWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALJMGGJLOEE_GHONNAKAGDB_OFFSET))(this);
		}

	};
