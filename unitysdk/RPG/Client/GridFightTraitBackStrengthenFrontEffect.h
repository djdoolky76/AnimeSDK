#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectBase.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectEffType.h"
namespace RPG::Client { class GridFightTrait; }
namespace RPG::GameCore { class GridFightTraitEffectIdConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITBACKSTRENGTHENFRONTEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3E4AA0)
#define RPG_CLIENT_GRIDFIGHTTRAITBACKSTRENGTHENFRONTEFFECT_GETSHOWICON_OFFSET UNITYSDK_OFFSET(0x1D3E4CD0)
#define RPG_CLIENT_GRIDFIGHTTRAITBACKSTRENGTHENFRONTEFFECT_GETSHOWMEMBERUIDS_OFFSET UNITYSDK_OFFSET(0x1D3E4D20)
#define RPG_CLIENT_GRIDFIGHTTRAITBACKSTRENGTHENFRONTEFFECT_GET_EFFTYPE_OFFSET UNITYSDK_OFFSET(0x1D3E4C80)
#define RPG_CLIENT_GRIDFIGHTTRAITBACKSTRENGTHENFRONTEFFECT_GET_NEEDPLAYACTIVEEFFECT_OFFSET UNITYSDK_OFFSET(0x1D3E4C40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitBackStrengthenFrontEffect_TypeDefinitionIndex = 67231;

	class GridFightTraitBackStrengthenFrontEffect : public ::RPG::Client::GridFightTraitEffectBase
	{
	public:
		::RPG::GameCore::GridFightTraitEffectIdConfigRow* _EffectRow; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _CoreMemberUIDs; // 0x38
		// static const ::System::Object _RequiredLayer; // 0x0
		// static const ::System::Object _TeamLeaderRoleID; // 0x0
		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITBACKSTRENGTHENFRONTEFFECT_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_NeedPlayActiveEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITBACKSTRENGTHENFRONTEFFECT_GET_NEEDPLAYACTIVEEFFECT_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitEffectEffType get_EffType()
		{
			return ((::RPG::Client::GridFightTraitEffectEffType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITBACKSTRENGTHENFRONTEFFECT_GET_EFFTYPE_OFFSET))(this);
		}

		::System::String* GetShowIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITBACKSTRENGTHENFRONTEFFECT_GETSHOWICON_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetShowMemberUIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITBACKSTRENGTHENFRONTEFFECT_GETSHOWMEMBERUIDS_OFFSET))(this);
		}

	};
}
