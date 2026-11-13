#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitCoreSelectBase.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectEffType.h"
class MGBHKCMHDOK;
namespace RPG::Client { class GridFightTrait; }
namespace RPG::GameCore { class GridFightTraitEffectIdConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F43B0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_GETCOREROLEUIDS_OFFSET UNITYSDK_OFFSET(0x1D3F4A40)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_GETSHOWICON_OFFSET UNITYSDK_OFFSET(0x1D3F49B0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_GETSHOWMEMBERUIDS_OFFSET UNITYSDK_OFFSET(0x1D3F4A00)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_GET_COREMEMBERUIDS_OFFSET UNITYSDK_OFFSET(0x1D3F4A80)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_GET_EFFTYPE_OFFSET UNITYSDK_OFFSET(0x1D3F46A0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_GET_LASTCOREMEMBERUIDS_OFFSET UNITYSDK_OFFSET(0x1D3F4A90)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_GET_NEEDPLAYACTIVEEFFECT_OFFSET UNITYSDK_OFFSET(0x1D3F4710)
#define RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1D3F4750)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitCoreRoleByEquipEffect_TypeDefinitionIndex = 67235;

	class GridFightTraitCoreRoleByEquipEffect : public ::RPG::Client::GridFightTraitCoreSelectBase
	{
	public:
		::RPG::GameCore::GridFightTraitEffectIdConfigRow* _EffectRow; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _LastCoreMemberUIDs_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _CoreMemberUIDs_k__BackingField; // 0x40
		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightTraitEffectEffType get_EffType()
		{
			return ((::RPG::Client::GridFightTraitEffectEffType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_GET_EFFTYPE_OFFSET))(this);
		}

		::System::Boolean get_NeedPlayActiveEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_GET_NEEDPLAYACTIVEEFFECT_OFFSET))(this);
		}

		::System::Void OnUpdate(::MGBHKCMHDOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGBHKCMHDOK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_ONUPDATE_OFFSET))(this, a1);
		}

		::System::String* GetShowIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_GETSHOWICON_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetShowMemberUIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_GETSHOWMEMBERUIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetCoreRoleUIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_GETCOREROLEUIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_CoreMemberUIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_GET_COREMEMBERUIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_LastCoreMemberUIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOREROLEBYEQUIPEFFECT_GET_LASTCOREMEMBERUIDS_OFFSET))(this);
		}

	};
}
