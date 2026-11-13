#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectBase.h"
class MGBHKCMHDOK;
namespace RPG::Client { class GridFightPhanionUniqueData; }
namespace RPG::Client { class GridFightPhanionUniqueTraitEffect; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::GameCore { class GridFightTraitEffectIdConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTPHANIONUNIQUETRAITEFFECT_CONSUMEROLE_OFFSET UNITYSDK_OFFSET(0x1DF24880)
#define RPG_CLIENT_GRIDFIGHTPHANIONUNIQUETRAITEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF24510)
#define RPG_CLIENT_GRIDFIGHTPHANIONUNIQUETRAITEFFECT_FIND_OFFSET UNITYSDK_OFFSET(0x1DF24C60)
#define RPG_CLIENT_GRIDFIGHTPHANIONUNIQUETRAITEFFECT_GETEATSAVEDVALUEADD_OFFSET UNITYSDK_OFFSET(0x1DF250F0)
#define RPG_CLIENT_GRIDFIGHTPHANIONUNIQUETRAITEFFECT_GETSHOWICON_OFFSET UNITYSDK_OFFSET(0x1DF24A90)
#define RPG_CLIENT_GRIDFIGHTPHANIONUNIQUETRAITEFFECT_GETSHOWMEMBERUIDS_OFFSET UNITYSDK_OFFSET(0x1DF24AE0)
#define RPG_CLIENT_GRIDFIGHTPHANIONUNIQUETRAITEFFECT_GET_NEEDPLAYACTIVEEFFECT_OFFSET UNITYSDK_OFFSET(0x1DF24A50)
#define RPG_CLIENT_GRIDFIGHTPHANIONUNIQUETRAITEFFECT_GET_PHANIONDATA_OFFSET UNITYSDK_OFFSET(0x1DF24A40)
#define RPG_CLIENT_GRIDFIGHTPHANIONUNIQUETRAITEFFECT_ISSPECIALROLE_OFFSET UNITYSDK_OFFSET(0x1DF24EF0)
#define RPG_CLIENT_GRIDFIGHTPHANIONUNIQUETRAITEFFECT_ONTRAITUPDATERSP_OFFSET UNITYSDK_OFFSET(0x1DF249B0)
#define RPG_CLIENT_GRIDFIGHTPHANIONUNIQUETRAITEFFECT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1DF24690)
#define RPG_CLIENT_GRIDFIGHTPHANIONUNIQUETRAITEFFECT_SHOULDSHOWROLECARDBONUS_OFFSET UNITYSDK_OFFSET(0x1DF24D10)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPhanionUniqueTraitEffect_TypeDefinitionIndex = 67223;

	class GridFightPhanionUniqueTraitEffect : public ::RPG::Client::GridFightTraitEffectBase
	{
	public:
		::RPG::GameCore::GridFightTraitEffectIdConfigRow* _EffectRow; // 0x30
		::RPG::Client::GridFightPhanionUniqueData* _PhanionData_k__BackingField; // 0x38
		::System::UInt32 _PendingConsumeUID; // 0x40
		static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet__SpecialRoleIDs()
		{
			return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)UnitySDK::FromName("RPG.Client", "GridFightPhanionUniqueTraitEffect")->GetStaticField(0x72BE0);
		}

		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPHANIONUNIQUETRAITEFFECT_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnUpdate(::MGBHKCMHDOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGBHKCMHDOK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPHANIONUNIQUETRAITEFFECT_ONUPDATE_OFFSET))(this, a1);
		}

		::System::Void ConsumeRole(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPHANIONUNIQUETRAITEFFECT_CONSUMEROLE_OFFSET))(this, a1);
		}

		::System::Void OnTraitUpdateRsp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPHANIONUNIQUETRAITEFFECT_ONTRAITUPDATERSP_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightPhanionUniqueData* get_PhanionData()
		{
			return ((::RPG::Client::GridFightPhanionUniqueData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPHANIONUNIQUETRAITEFFECT_GET_PHANIONDATA_OFFSET))(this);
		}

		::System::Boolean get_NeedPlayActiveEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPHANIONUNIQUETRAITEFFECT_GET_NEEDPLAYACTIVEEFFECT_OFFSET))(this);
		}

		::System::String* GetShowIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPHANIONUNIQUETRAITEFFECT_GETSHOWICON_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetShowMemberUIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPHANIONUNIQUETRAITEFFECT_GETSHOWMEMBERUIDS_OFFSET))(this);
		}

		static ::RPG::Client::GridFightPhanionUniqueTraitEffect* Find()
		{
			return ((::RPG::Client::GridFightPhanionUniqueTraitEffect*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPHANIONUNIQUETRAITEFFECT_FIND_OFFSET))();
		}

		static ::System::Boolean ShouldShowRoleCardBonus(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPHANIONUNIQUETRAITEFFECT_SHOULDSHOWROLECARDBONUS_OFFSET))(a1);
		}

		static ::System::Boolean IsSpecialRole(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPHANIONUNIQUETRAITEFFECT_ISSPECIALROLE_OFFSET))(a1);
		}

		static ::System::UInt32 GetEatSavedValueAdd(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPHANIONUNIQUETRAITEFFECT_GETEATSAVEDVALUEADD_OFFSET))(a1);
		}

	};
}
