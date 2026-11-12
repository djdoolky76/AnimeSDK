#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJHOBKCJPMB;
namespace RPG::Client { class GridFightEquipComponent; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightRole_GridFightRoleBuilder; }
namespace RPG::Client { class GridFightTraitComponent; }
namespace RPG::Client { class GridFightValueComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_CLEAR_OFFSET UNITYSDK_OFFSET(0xDC4B870)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_CREATEAVATARDATAPROVIDER_OFFSET UNITYSDK_OFFSET(0xDC4BF50)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_CREATEEQUIPCOMPONENT_OFFSET UNITYSDK_OFFSET(0xDC4BC30)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_CREATETRAITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xDC4BB10)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_CREATEVALUECOMPONENT_OFFSET UNITYSDK_OFFSET(0xDC4BDB0)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_CREATEVALUEMAP_OFFSET UNITYSDK_OFFSET(0xDC4BA60)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_CTOR_OFFSET UNITYSDK_OFFSET(0xDC4C070)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_FORCEUSETRIALAVATAR_OFFSET UNITYSDK_OFFSET(0xDC47D70)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_FORCEUSEUPGRADEAVATAR_OFFSET UNITYSDK_OFFSET(0xDC4BA10)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_GETROLE_OFFSET UNITYSDK_OFFSET(0xDC47DC0)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_GET_ID_OFFSET UNITYSDK_OFFSET(0xDC4BFF0)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_GET_POSINDEX_OFFSET UNITYSDK_OFFSET(0xDC4C050)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_GET_STAR_OFFSET UNITYSDK_OFFSET(0xDC4C010)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_GET_UID_OFFSET UNITYSDK_OFFSET(0xDC4C030)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_SET_ID_OFFSET UNITYSDK_OFFSET(0xDC4C000)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_SET_POSINDEX_OFFSET UNITYSDK_OFFSET(0xDC4C060)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_SET_STAR_OFFSET UNITYSDK_OFFSET(0xDC4C020)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_SET_UID_OFFSET UNITYSDK_OFFSET(0xDC4C040)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_WITHID_OFFSET UNITYSDK_OFFSET(0xDC4B8D0)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_WITHPOSINDEX_OFFSET UNITYSDK_OFFSET(0xDC4B9C0)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_WITHSTAR_OFFSET UNITYSDK_OFFSET(0xDC4B920)
#define RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_WITHUID_OFFSET UNITYSDK_OFFSET(0xDC4B970)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRole_GridFightRoleBuilder_TypeDefinitionIndex = 66788;

	class GridFightRole_GridFightRoleBuilder : public ::System::Object
	{
	public:
		::System::UInt32 _Star_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x14
		::System::Boolean _ForceUseUpgradeAvatar; // 0x18
		::System::Boolean _ForceUseTrialAvatar; // 0x19
		::System::Byte _padding0[0x2];
		::System::UInt32 _UID_k__BackingField; // 0x1C
		::System::UInt32 _PosIndex_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* GetRole()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_GETROLE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_CLEAR_OFFSET))(this);
		}

		::RPG::Client::GridFightRole_GridFightRoleBuilder* WithID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightRole_GridFightRoleBuilder*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_WITHID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRole_GridFightRoleBuilder* WithStar(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightRole_GridFightRoleBuilder*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_WITHSTAR_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRole_GridFightRoleBuilder* WithUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightRole_GridFightRoleBuilder*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_WITHUID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRole_GridFightRoleBuilder* WithPosIndex(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightRole_GridFightRoleBuilder*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_WITHPOSINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRole_GridFightRoleBuilder* ForceUseTrialAvatar(::System::Boolean a1)
		{
			return ((::RPG::Client::GridFightRole_GridFightRoleBuilder*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_FORCEUSETRIALAVATAR_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRole_GridFightRoleBuilder* ForceUseUpgradeAvatar(::System::Boolean a1)
		{
			return ((::RPG::Client::GridFightRole_GridFightRoleBuilder*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_FORCEUSEUPGRADEAVATAR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IDictionary_2<::System::String*, ::System::UInt32>* CreateValueMap(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::String*, ::System::UInt32>*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_CREATEVALUEMAP_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTraitComponent* CreateTraitComponent(::RPG::Client::GridFightRole* a1)
		{
			return ((::RPG::Client::GridFightTraitComponent*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_CREATETRAITCOMPONENT_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipComponent* CreateEquipComponent(::RPG::Client::GridFightRole* a1)
		{
			return ((::RPG::Client::GridFightEquipComponent*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_CREATEEQUIPCOMPONENT_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightValueComponent* CreateValueComponent(::RPG::Client::GridFightRole* a1)
		{
			return ((::RPG::Client::GridFightValueComponent*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_CREATEVALUECOMPONENT_OFFSET))(this, a1);
		}

		::KJHOBKCJPMB* CreateAvatarDataProvider(::RPG::Client::GridFightRole* a1)
		{
			return ((::KJHOBKCJPMB*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_CREATEAVATARDATAPROVIDER_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Star()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_GET_STAR_OFFSET))(this);
		}

		::System::Void set_Star(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_SET_STAR_OFFSET))(this, a1);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_GET_UID_OFFSET))(this);
		}

		::System::Void set_UID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_SET_UID_OFFSET))(this, a1);
		}

		::System::UInt32 get_PosIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_GET_POSINDEX_OFFSET))(this);
		}

		::System::Void set_PosIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GRIDFIGHTROLEBUILDER_SET_POSINDEX_OFFSET))(this, a1);
		}

	};
}
