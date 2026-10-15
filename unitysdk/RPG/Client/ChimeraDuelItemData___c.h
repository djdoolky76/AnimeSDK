#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IChimeraDuelSkillData; }
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_CHIMERADUELITEMDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCB2C810)
#define RPG_CLIENT_CHIMERADUELITEMDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCB2C850)
#define RPG_CLIENT_CHIMERADUELITEMDATA___C__TRYGETBATTLESKILLDATA_B__38_0_OFFSET UNITYSDK_OFFSET(0xCB2C910)
#define RPG_CLIENT_CHIMERADUELITEMDATA___C__TRYGETSHOPSKILLDATA_B__37_0_OFFSET UNITYSDK_OFFSET(0xCB2C860)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelItemData___c_TypeDefinitionIndex = 63365;

	class ChimeraDuelItemData___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::Client::IChimeraDuelSkillData*>** StaticGet___9__38_0()
		{
			return (::System::Predicate_1<::RPG::Client::IChimeraDuelSkillData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x11840);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x11848);
		}

		static ::System::Predicate_1<::RPG::Client::IChimeraDuelSkillData*>** StaticGet___9__37_0()
		{
			return (::System::Predicate_1<::RPG::Client::IChimeraDuelSkillData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x11850);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _TryGetShopSkillData_b__37_0(::RPG::Client::IChimeraDuelSkillData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IChimeraDuelSkillData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA___C__TRYGETSHOPSKILLDATA_B__37_0_OFFSET))(this, a1);
		}

		::System::Boolean _TryGetBattleSkillData_b__38_0(::RPG::Client::IChimeraDuelSkillData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IChimeraDuelSkillData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMDATA___C__TRYGETBATTLESKILLDATA_B__38_0_OFFSET))(this, a1);
		}

	};
}
