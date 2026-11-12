#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectBase.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectEffType.h"
class MGBHKCMHDOK;
namespace RPG::Client { class GridFightTrait; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTBANDROLETRAITEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0xDA6A040)
#define RPG_CLIENT_GRIDFIGHTBANDROLETRAITEFFECT_GETSHOWICON_OFFSET UNITYSDK_OFFSET(0xDA6A160)
#define RPG_CLIENT_GRIDFIGHTBANDROLETRAITEFFECT_GETSHOWMEMBERUIDS_OFFSET UNITYSDK_OFFSET(0xDA69DF0)
#define RPG_CLIENT_GRIDFIGHTBANDROLETRAITEFFECT_GET_BANDROLEUID_OFFSET UNITYSDK_OFFSET(0xDA6A320)
#define RPG_CLIENT_GRIDFIGHTBANDROLETRAITEFFECT_GET_EFFTYPE_OFFSET UNITYSDK_OFFSET(0xDA6A050)
#define RPG_CLIENT_GRIDFIGHTBANDROLETRAITEFFECT_GET_NEEDPLAYACTIVEEFFECT_OFFSET UNITYSDK_OFFSET(0xDA6A2E0)
#define RPG_CLIENT_GRIDFIGHTBANDROLETRAITEFFECT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xDA6A090)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBandRoleTraitEffect_TypeDefinitionIndex = 67145;

	class GridFightBandRoleTraitEffect : public ::RPG::Client::GridFightTraitEffectBase
	{
	public:
		::System::UInt32 _BandRoleUID; // 0x30
		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBANDROLETRAITEFFECT_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightTraitEffectEffType get_EffType()
		{
			return ((::RPG::Client::GridFightTraitEffectEffType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBANDROLETRAITEFFECT_GET_EFFTYPE_OFFSET))(this);
		}

		::System::Void OnUpdate(::MGBHKCMHDOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGBHKCMHDOK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBANDROLETRAITEFFECT_ONUPDATE_OFFSET))(this, a1);
		}

		::System::String* GetShowIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBANDROLETRAITEFFECT_GETSHOWICON_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetShowMemberUIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBANDROLETRAITEFFECT_GETSHOWMEMBERUIDS_OFFSET))(this);
		}

		::System::Boolean get_NeedPlayActiveEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBANDROLETRAITEFFECT_GET_NEEDPLAYACTIVEEFFECT_OFFSET))(this);
		}

		::System::UInt32 get_BandRoleUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBANDROLETRAITEFFECT_GET_BANDROLEUID_OFFSET))(this);
		}

	};
}
