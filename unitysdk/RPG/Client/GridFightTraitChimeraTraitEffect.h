#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
class MGBHKCMHDOK;
class MLGNKOCLDCO;
namespace RPG::Client { class GridFightChimera; }
namespace RPG::Client { class GridFightChimeraStarUpData; }
namespace RPG::Client { class GridFightPreparationTraitEffectIndicator; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitChimeraIndicator; }
namespace RPG::Client { class GridFightTraitChimeraTraitEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITCHIMERATRAITEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3E86C0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHIMERATRAITEFFECT_FIND_OFFSET UNITYSDK_OFFSET(0x1D3E8920)
#define RPG_CLIENT_GRIDFIGHTTRAITCHIMERATRAITEFFECT_GETCONSUMABLETARGETCHIMERAS_OFFSET UNITYSDK_OFFSET(0x1D3EA890)
#define RPG_CLIENT_GRIDFIGHTTRAITCHIMERATRAITEFFECT_GETPREPARATIONINDICATOR_OFFSET UNITYSDK_OFFSET(0x1D3E9680)
#define RPG_CLIENT_GRIDFIGHTTRAITCHIMERATRAITEFFECT_GETPREVIEWSTARAFTERBUY_OFFSET UNITYSDK_OFFSET(0x1D3EAE40)
#define RPG_CLIENT_GRIDFIGHTTRAITCHIMERATRAITEFFECT_GET_CHIMERAS_OFFSET UNITYSDK_OFFSET(0x1D3EA6A0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHIMERATRAITEFFECT_GET_ROUNDNUM_OFFSET UNITYSDK_OFFSET(0x1D3EA6B0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHIMERATRAITEFFECT_GET_SPECIALDESCTEXT_OFFSET UNITYSDK_OFFSET(0x1D3EA6D0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHIMERATRAITEFFECT_ISCHIMERABUFFACTIVE_OFFSET UNITYSDK_OFFSET(0x1D3E8F90)
#define RPG_CLIENT_GRIDFIGHTTRAITCHIMERATRAITEFFECT_ONTRAITCHANGE_OFFSET UNITYSDK_OFFSET(0x1D3EA600)
#define RPG_CLIENT_GRIDFIGHTTRAITCHIMERATRAITEFFECT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1D3E9740)
#define RPG_CLIENT_GRIDFIGHTTRAITCHIMERATRAITEFFECT_SET_ROUNDNUM_OFFSET UNITYSDK_OFFSET(0x1D3EA6C0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHIMERATRAITEFFECT__SYNCCHIMERAS_OFFSET UNITYSDK_OFFSET(0x1D3E9A50)
#define RPG_CLIENT_GRIDFIGHTTRAITCHIMERATRAITEFFECT__SYNCROUNDNUM_OFFSET UNITYSDK_OFFSET(0x1D3EA480)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitChimeraTraitEffect_TypeDefinitionIndex = 67153;

	class GridFightTraitChimeraTraitEffect : public ::RPG::Client::GridFightTraitEffectBase
	{
	public:
		::RPG::Client::GridFightTraitChimeraIndicator* _PreparationIndicator; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::GridFightChimera*>* _Chimeras_k__BackingField; // 0x38
		::UnityEngine::Vector3 PendingSelectGoldFlyStartPos; // 0x40
		::System::Boolean _GainAllNotified; // 0x4C
		::System::Boolean InSelectPurchase; // 0x4D
		::System::Byte _padding0[0x2];
		::System::UInt32 _RoundNum_k__BackingField; // 0x50
		::UnityEngine::Vector3 SelectPurchaseStartPos; // 0x54
		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHIMERATRAITEFFECT_CTOR_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::GridFightTraitChimeraTraitEffect* Find(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightTraitChimeraTraitEffect*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHIMERATRAITEFFECT_FIND_OFFSET))(a1);
		}

		static ::System::Boolean IsChimeraBuffActive(::RPG::Client::GridFightChimera* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::GridFightChimera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHIMERATRAITEFFECT_ISCHIMERABUFFACTIVE_OFFSET))(a1);
		}

		::RPG::Client::GridFightPreparationTraitEffectIndicator* GetPreparationIndicator()
		{
			return ((::RPG::Client::GridFightPreparationTraitEffectIndicator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHIMERATRAITEFFECT_GETPREPARATIONINDICATOR_OFFSET))(this);
		}

		::System::Void OnUpdate(::MGBHKCMHDOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGBHKCMHDOK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHIMERATRAITEFFECT_ONUPDATE_OFFSET))(this, a1);
		}

		::System::Void OnTraitChange(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHIMERATRAITEFFECT_ONTRAITCHANGE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightChimera*>* get_Chimeras()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightChimera*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHIMERATRAITEFFECT_GET_CHIMERAS_OFFSET))(this);
		}

		::System::UInt32 get_RoundNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHIMERATRAITEFFECT_GET_ROUNDNUM_OFFSET))(this);
		}

		::System::Void set_RoundNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHIMERATRAITEFFECT_SET_ROUNDNUM_OFFSET))(this, a1);
		}

		::System::String* get_SpecialDescText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHIMERATRAITEFFECT_GET_SPECIALDESCTEXT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightChimera*>* GetConsumableTargetChimeras()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightChimera*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHIMERATRAITEFFECT_GETCONSUMABLETARGETCHIMERAS_OFFSET))(this);
		}

		::System::UInt32 GetPreviewStarAfterBuy(::RPG::Client::GridFightChimera* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightChimera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHIMERATRAITEFFECT_GETPREVIEWSTARAFTERBUY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightChimeraStarUpData*>* _SyncChimeras(::System::Collections::Generic::IReadOnlyList_1<::MLGNKOCLDCO*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightChimeraStarUpData*>*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::MLGNKOCLDCO*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHIMERATRAITEFFECT__SYNCCHIMERAS_OFFSET))(this, a1);
		}

		::System::UInt32 _SyncRoundNum(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHIMERATRAITEFFECT__SYNCROUNDNUM_OFFSET))(this, a1);
		}

	};
}
