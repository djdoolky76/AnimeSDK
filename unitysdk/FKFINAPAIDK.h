#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FKFINAPAIDK_CTOR_OFFSET UNITYSDK_OFFSET(0x157E3930)
#define FKFINAPAIDK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157E39B0)
#define FKFINAPAIDK_KGIIEOBJHLF_OFFSET UNITYSDK_OFFSET(0x157E3FC0)
#define FKFINAPAIDK_MGIILEHMCJK_OFFSET UNITYSDK_OFFSET(0x157E3A60)
#define FKFINAPAIDK_NDIDKJKOEJB_OFFSET UNITYSDK_OFFSET(0x157E3D70)

inline static constexpr unsigned int FKFINAPAIDK_TypeDefinitionIndex = 55954;

	class FKFINAPAIDK : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::RPG::PoolList_1<::RPG::GameCore::GameEntity*>*>* MFEJOOBOJBF; // 0x10
		::RPG::GameCore::TurnBasedGameMode* JADHLODNADK; // 0x18
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + FKFINAPAIDK_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFINAPAIDK_DISPOSE_OFFSET))(this);
		}

		::System::Void MGIILEHMCJK(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + FKFINAPAIDK_MGIILEHMCJK_OFFSET))(this, a1, a2);
		}

		::System::Void NDIDKJKOEJB(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + FKFINAPAIDK_NDIDKJKOEJB_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* KGIIEOBJHLF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FKFINAPAIDK_KGIIEOBJHLF_OFFSET))(this, a1);
		}

	};
