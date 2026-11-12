#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectBase.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class MGBHKCMHDOK;
namespace RPG::Client { class GridFightGameSession; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightXingChaEquipScore; }
namespace RPG::GameCore { class GridFightTraitRemarkRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTXINGCHAEQUIPSCORE_CTOR_OFFSET UNITYSDK_OFFSET(0xDD0D020)
#define RPG_CLIENT_GRIDFIGHTXINGCHAEQUIPSCORE_GETREACHEDSTAGEREMARK_OFFSET UNITYSDK_OFFSET(0xDD0D6B0)
#define RPG_CLIENT_GRIDFIGHTXINGCHAEQUIPSCORE_GETSTAGERANK_OFFSET UNITYSDK_OFFSET(0xDD0DE90)
#define RPG_CLIENT_GRIDFIGHTXINGCHAEQUIPSCORE_GET_TOTALEQUIPNUM_OFFSET UNITYSDK_OFFSET(0xDD0D060)
#define RPG_CLIENT_GRIDFIGHTXINGCHAEQUIPSCORE_HASCROSSEDSTAGETHRESHOLD_OFFSET UNITYSDK_OFFSET(0xDD0DB70)
#define RPG_CLIENT_GRIDFIGHTXINGCHAEQUIPSCORE_NOTIFYSTAGEUPGRADE_OFFSET UNITYSDK_OFFSET(0xDD0D820)
#define RPG_CLIENT_GRIDFIGHTXINGCHAEQUIPSCORE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xDD0D3F0)
#define RPG_CLIENT_GRIDFIGHTXINGCHAEQUIPSCORE_SET_TOTALEQUIPNUM_OFFSET UNITYSDK_OFFSET(0xDD0D360)
#define RPG_CLIENT_GRIDFIGHTXINGCHAEQUIPSCORE__GETSESSIONEQUIPSCORE_OFFSET UNITYSDK_OFFSET(0xDD0D0C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightXingChaEquipScore_TypeDefinitionIndex = 67249;

	class GridFightXingChaEquipScore : public ::RPG::Client::GridFightTraitEffectBase
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GridFightTraitRemarkRow*>* _FrontRemarks; // 0x30
		::System::UInt32 _TotalEquipNum; // 0x38
		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTXINGCHAEQUIPSCORE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_TotalEquipNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTXINGCHAEQUIPSCORE_GET_TOTALEQUIPNUM_OFFSET))(this);
		}

		::System::Void set_TotalEquipNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTXINGCHAEQUIPSCORE_SET_TOTALEQUIPNUM_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightXingChaEquipScore* _GetSessionEquipScore()
		{
			return ((::RPG::Client::GridFightXingChaEquipScore*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTXINGCHAEQUIPSCORE__GETSESSIONEQUIPSCORE_OFFSET))(this);
		}

		::System::Void OnUpdate(::MGBHKCMHDOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGBHKCMHDOK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTXINGCHAEQUIPSCORE_ONUPDATE_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightTraitRemarkRow* GetReachedStageRemark(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightTraitRemarkRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTXINGCHAEQUIPSCORE_GETREACHEDSTAGEREMARK_OFFSET))(this, a1);
		}

		::System::Boolean HasCrossedStageThreshold(::Il2CppArray<::RPG::GameCore::FixPoint>* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTXINGCHAEQUIPSCORE_HASCROSSEDSTAGETHRESHOLD_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetStageRank(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTXINGCHAEQUIPSCORE_GETSTAGERANK_OFFSET))(this, a1);
		}

		::System::Void NotifyStageUpgrade(::RPG::GameCore::GridFightTraitRemarkRow* a1, ::RPG::Client::GridFightGameSession* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightTraitRemarkRow*, ::RPG::Client::GridFightGameSession*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTXINGCHAEQUIPSCORE_NOTIFYSTAGEUPGRADE_OFFSET))(this, a1, a2);
		}

	};
}
