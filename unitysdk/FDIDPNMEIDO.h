#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WolfBroUseBulletHitTarget; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FDIDPNMEIDO_AABHECHJMAN_OFFSET UNITYSDK_OFFSET(0x156DA2D0)
#define FDIDPNMEIDO_CTOR_OFFSET UNITYSDK_OFFSET(0x156D9680)
#define FDIDPNMEIDO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156D96F0)
#define FDIDPNMEIDO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x156D9740)

	class FDIDPNMEIDO
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* OAAMJPPKGJP; // 0x28
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* KCNGIEMEGLH; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WolfBroUseBulletHitTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WolfBroUseBulletHitTarget*))((::PBYTE)hIl2Cpp + FDIDPNMEIDO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIDPNMEIDO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIDPNMEIDO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void AABHECHJMAN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FDIDPNMEIDO_AABHECHJMAN_OFFSET))(this, a1);
		}

	};
