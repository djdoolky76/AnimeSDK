#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CustomizedMonsterStanceBarType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
class KILLLKIAIDO;
class NILMOLIGDGM;
namespace RPG::Client { class BattleSingleMonsterCustomizedWeaknessData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATTLEMONSTERCUSTOMIZEDWEAKNESSDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B1E4C80)
#define RPG_CLIENT_BATTLEMONSTERCUSTOMIZEDWEAKNESSDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1B1E5470)
#define RPG_CLIENT_BATTLEMONSTERCUSTOMIZEDWEAKNESSDATA_GETCUSTOMIZEDWEAKNESSDATA_OFFSET UNITYSDK_OFFSET(0x1B1E4BF0)
#define RPG_CLIENT_BATTLEMONSTERCUSTOMIZEDWEAKNESSDATA_INIT_OFFSET UNITYSDK_OFFSET(0x1B1E4D10)
#define RPG_CLIENT_BATTLEMONSTERCUSTOMIZEDWEAKNESSDATA_SET_OFFSET UNITYSDK_OFFSET(0x1B1E5010)
#define RPG_CLIENT_BATTLEMONSTERCUSTOMIZEDWEAKNESSDATA__APPLYSET_OFFSET UNITYSDK_OFFSET(0x1B1E5260)
#define RPG_CLIENT_BATTLEMONSTERCUSTOMIZEDWEAKNESSDATA__NOTIFY_OFFSET UNITYSDK_OFFSET(0x1B1E4FB0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleMonsterCustomizedWeaknessData_TypeDefinitionIndex = 73798;

	class BattleMonsterCustomizedWeaknessData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::BattleSingleMonsterCustomizedWeaknessData*>* _MonsterCustomizedWeaknessDataDict; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERCUSTOMIZEDWEAKNESSDATA_CTOR_OFFSET))(this);
		}

		::RPG::Client::BattleSingleMonsterCustomizedWeaknessData* GetCustomizedWeaknessData(::System::UInt32 a1)
		{
			return ((::RPG::Client::BattleSingleMonsterCustomizedWeaknessData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERCUSTOMIZEDWEAKNESSDATA_GETCUSTOMIZEDWEAKNESSDATA_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERCUSTOMIZEDWEAKNESSDATA_CLEAR_OFFSET))(this);
		}

		::System::Void Init(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::RPG::GameCore::CustomizedMonsterStanceBarType a3, ::NILMOLIGDGM* a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::RPG::GameCore::CustomizedMonsterStanceBarType, ::NILMOLIGDGM*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERCUSTOMIZEDWEAKNESSDATA_INIT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Set(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::NILMOLIGDGM* a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Nullable_1<::System::Single> a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::NILMOLIGDGM*, ::System::Boolean, ::System::Boolean, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERCUSTOMIZEDWEAKNESSDATA_SET_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _ApplySet(::System::UInt32 a1, ::RPG::Client::BattleSingleMonsterCustomizedWeaknessData* a2, ::System::String* a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Nullable_1<::System::Single> a6, ::System::Boolean a7, ::System::Collections::Generic::List_1<::KILLLKIAIDO*>* a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::BattleSingleMonsterCustomizedWeaknessData*, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Nullable_1<::System::Single>, ::System::Boolean, ::System::Collections::Generic::List_1<::KILLLKIAIDO*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERCUSTOMIZEDWEAKNESSDATA__APPLYSET_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void _Notify(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERCUSTOMIZEDWEAKNESSDATA__NOTIFY_OFFSET))(a1);
		}

	};
}
