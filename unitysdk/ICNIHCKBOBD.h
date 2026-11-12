#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJPLLCFAIKH;
namespace RPG::GameCore { class BattleLineupData; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class LineUpCharacter; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ICNIHCKBOBD_CTOR_OFFSET UNITYSDK_OFFSET(0x16E0A570)
#define ICNIHCKBOBD_ILEAOHCKLJO_OFFSET UNITYSDK_OFFSET(0x16E09F40)
#define ICNIHCKBOBD_KJEGJEDFIPM_1_OFFSET UNITYSDK_OFFSET(0x16E0A170)
#define ICNIHCKBOBD_KJEGJEDFIPM_2_OFFSET UNITYSDK_OFFSET(0x16E0A510)
#define ICNIHCKBOBD_KJEGJEDFIPM_3_OFFSET UNITYSDK_OFFSET(0x16E0A290)
#define ICNIHCKBOBD_KJEGJEDFIPM_OFFSET UNITYSDK_OFFSET(0x16E0A1F0)
#define ICNIHCKBOBD_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x16E09EA0)
#define ICNIHCKBOBD_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x16E09EF0)

inline static constexpr unsigned int ICNIHCKBOBD_TypeDefinitionIndex = 57452;

	class ICNIHCKBOBD : public ::System::Object
	{
	public:
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AJPLLCFAIKH*>* MFDPDBCCBEE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICNIHCKBOBD_CTOR_OFFSET))(this);
		}

		::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + ICNIHCKBOBD_ONPLUGININIT_OFFSET))(this, a1);
		}

		::System::Void OnPluginUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICNIHCKBOBD_ONPLUGINUNINIT_OFFSET))(this);
		}

		::AJPLLCFAIKH* ILEAOHCKLJO(::System::UInt32 a1)
		{
			return ((::AJPLLCFAIKH*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ICNIHCKBOBD_ILEAOHCKLJO_OFFSET))(this, a1);
		}

		static ::RPG::GameCore::LineUpCharacter* KJEGJEDFIPM(::RPG::GameCore::GameWorld* a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::LineUpCharacter*(*)(::RPG::GameCore::GameWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + ICNIHCKBOBD_KJEGJEDFIPM_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::LineUpCharacter* KJEGJEDFIPM_1(::RPG::GameCore::GameWorld* a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::RPG::GameCore::LineUpCharacter*(*)(::RPG::GameCore::GameWorld*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + ICNIHCKBOBD_KJEGJEDFIPM_1_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::LineUpCharacter* KJEGJEDFIPM_2(::RPG::GameCore::BattleLineupData* a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::LineUpCharacter*(*)(::RPG::GameCore::BattleLineupData*, ::System::UInt32))((::PBYTE)hIl2Cpp + ICNIHCKBOBD_KJEGJEDFIPM_2_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::LineUpCharacter* KJEGJEDFIPM_3(::RPG::GameCore::BattleLineupData* a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::RPG::GameCore::LineUpCharacter*(*)(::RPG::GameCore::BattleLineupData*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + ICNIHCKBOBD_KJEGJEDFIPM_3_OFFSET))(a1, a2, a3);
		}

	};
