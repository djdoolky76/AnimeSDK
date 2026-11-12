#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectBase.h"
#include "unitysdk/RPG/Client/PlayerPreparationState.h"
class MGBHKCMHDOK;
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGAINOTHERROLETRAITTRAITEFFECT_CANEDITINPREPARATIONSTATE_OFFSET UNITYSDK_OFFSET(0xDB04010)
#define RPG_CLIENT_GRIDFIGHTGAINOTHERROLETRAITTRAITEFFECT_CANEDIT_OFFSET UNITYSDK_OFFSET(0xDB03FA0)
#define RPG_CLIENT_GRIDFIGHTGAINOTHERROLETRAITTRAITEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0xDB03380)
#define RPG_CLIENT_GRIDFIGHTGAINOTHERROLETRAITTRAITEFFECT_GETEDITICON_OFFSET UNITYSDK_OFFSET(0xDB040C0)
#define RPG_CLIENT_GRIDFIGHTGAINOTHERROLETRAITTRAITEFFECT_GET_SELECTEDROLEID_OFFSET UNITYSDK_OFFSET(0xDB03390)
#define RPG_CLIENT_GRIDFIGHTGAINOTHERROLETRAITTRAITEFFECT_ONTRAITCHANGE_OFFSET UNITYSDK_OFFSET(0xDB03F10)
#define RPG_CLIENT_GRIDFIGHTGAINOTHERROLETRAITTRAITEFFECT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xDB03430)
#define RPG_CLIENT_GRIDFIGHTGAINOTHERROLETRAITTRAITEFFECT_STARTEDIT_OFFSET UNITYSDK_OFFSET(0xDB04240)
#define RPG_CLIENT_GRIDFIGHTGAINOTHERROLETRAITTRAITEFFECT__GETCANDIDATEROLES_OFFSET UNITYSDK_OFFSET(0xDB046E0)
#define RPG_CLIENT_GRIDFIGHTGAINOTHERROLETRAITTRAITEFFECT__UPDATEROLETRAITIDS_OFFSET UNITYSDK_OFFSET(0xDB03600)
#define RPG_CLIENT_GRIDFIGHTGAINOTHERROLETRAITTRAITEFFECT___GETCANDIDATEROLES_B__9_0_OFFSET UNITYSDK_OFFSET(0xDB049B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGainOtherRoleTraitTraitEffect_TypeDefinitionIndex = 67202;

	class GridFightGainOtherRoleTraitTraitEffect : public ::RPG::Client::GridFightTraitEffectBase
	{
	public:
		::MGBHKCMHDOK* _Proto; // 0x30
		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAINOTHERROLETRAITTRAITEFFECT_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_SelectedRoleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAINOTHERROLETRAITTRAITEFFECT_GET_SELECTEDROLEID_OFFSET))(this);
		}

		::System::Void OnUpdate(::MGBHKCMHDOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGBHKCMHDOK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAINOTHERROLETRAITTRAITEFFECT_ONUPDATE_OFFSET))(this, a1);
		}

		::System::Void OnTraitChange(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAINOTHERROLETRAITTRAITEFFECT_ONTRAITCHANGE_OFFSET))(this, a1, a2);
		}

		::System::Boolean CanEdit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAINOTHERROLETRAITTRAITEFFECT_CANEDIT_OFFSET))(this);
		}

		::System::Boolean CanEditInPreparationState(::RPG::Client::PlayerPreparationState a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlayerPreparationState))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAINOTHERROLETRAITTRAITEFFECT_CANEDITINPREPARATIONSTATE_OFFSET))(this, a1);
		}

		::System::String* GetEditIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAINOTHERROLETRAITTRAITEFFECT_GETEDITICON_OFFSET))(this);
		}

		::System::Void StartEdit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAINOTHERROLETRAITTRAITEFFECT_STARTEDIT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* _GetCandidateRoles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAINOTHERROLETRAITTRAITEFFECT__GETCANDIDATEROLES_OFFSET))(this);
		}

		::System::Void _UpdateRoleTraitIDs(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAINOTHERROLETRAITTRAITEFFECT__UPDATEROLETRAITIDS_OFFSET))(this, a1);
		}

		::System::Boolean __GetCandidateRoles_b__9_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAINOTHERROLETRAITTRAITEFFECT___GETCANDIDATEROLES_B__9_0_OFFSET))(this, a1);
		}

	};
}
