#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPendingSelectableBaseAction.h"
#include "unitysdk/RPG/Client/TextID.h"
class CJLEJIGIKOF;
class FGLLAJMCPKM;
namespace RPG::Client { class GridFightForgeRoleAwardData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_CTOR_OFFSET UNITYSDK_OFFSET(0xD13B480)
#define RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_GET_FORGEID_OFFSET UNITYSDK_OFFSET(0xD13B1C0)
#define RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_GET_FORGENAME_OFFSET UNITYSDK_OFFSET(0xD13B1E0)
#define RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xD13B140)
#define RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_ONAVATARDATACHANGED_OFFSET UNITYSDK_OFFSET(0xD13B2C0)
#define RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_SELECT_OFFSET UNITYSDK_OFFSET(0xD13BE60)
#define RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_SET_FORGEID_OFFSET UNITYSDK_OFFSET(0xD13B1D0)
#define RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_SYNCHANDLERSP_OFFSET UNITYSDK_OFFSET(0xD13BDF0)
#define RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0xD13B940)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightForgeRoleSelectionAction_TypeDefinitionIndex = 65105;

	class GridFightForgeRoleSelectionAction : public ::RPG::Client::GridFightPendingSelectableBaseAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightForgeRoleAwardData*>* Selections; // 0x18
		::System::Int32 PendingSelectID; // 0x20
		::System::Boolean _IsSelected; // 0x24
		::System::Byte _padding0[0x3];
		::System::UInt32 _ForgeID_k__BackingField; // 0x28
		::System::Void _ctor(::FGLLAJMCPKM* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::FGLLAJMCPKM*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightForgeRoleAwardData* get_Item(::System::Int32 a1)
		{
			return ((::RPG::Client::GridFightForgeRoleAwardData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_GET_ITEM_OFFSET))(this, a1);
		}

		::System::UInt32 get_ForgeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_GET_FORGEID_OFFSET))(this);
		}

		::System::Void set_ForgeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_SET_FORGEID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_ForgeName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_GET_FORGENAME_OFFSET))(this);
		}

		::System::Void OnAvatarDataChanged(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_ONAVATARDATACHANGED_OFFSET))(this, a1);
		}

		::System::Void Update(::FGLLAJMCPKM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGLLAJMCPKM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_UPDATE_OFFSET))(this, a1);
		}

		::System::Void SyncHandleRsp(::CJLEJIGIKOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJLEJIGIKOF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_SYNCHANDLERSP_OFFSET))(this, a1);
		}

		::System::Void Select(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEROLESELECTIONACTION_SELECT_OFFSET))(this, a1);
		}

	};
}
