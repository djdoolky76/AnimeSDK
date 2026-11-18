#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessEntity.h"

class BMMBLECDPPE;
namespace MoleMole::FlowCanvas { class HackShardedInfo; }

#define MOLEMOLE_HACKERGAMECHESSENTITY_ATTACHHACKSHARDEDINFO_OFFSET UNITYSDK_OFFSET(0x162D0DF0)
#define MOLEMOLE_HACKERGAMECHESSENTITY_GET_DAMAGEABLE_OFFSET UNITYSDK_OFFSET(0x162D0D50)
#define MOLEMOLE_HACKERGAMECHESSENTITY_ONATTACHHACKSHARDEDINFO_OFFSET UNITYSDK_OFFSET(0x162D0E50)
#define MOLEMOLE_HACKERGAMECHESSENTITY_ONUPDATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x162D0D70)
#define MOLEMOLE_HACKERGAMECHESSENTITY_SET_DAMAGEABLE_OFFSET UNITYSDK_OFFSET(0x162D0D60)
#define MOLEMOLE_HACKERGAMECHESSENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x162D0EA0)
#define MOLEMOLE_HACKERGAMECHESSENTITY___BASE_ONUPDATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x162D0EB0)

namespace MoleMole
{
	inline static constexpr unsigned int HackerGameChessEntity_TypeDefinitionIndex = 47471;

	class HackerGameChessEntity : public ::MoleMole::ChessEntity
	{
	public:
		::MoleMole::FlowCanvas::HackShardedInfo* ShardedInfo; // 0x40
		::BMMBLECDPPE* _Damageable_k__BackingField; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMECHESSENTITY__CTOR_OFFSET))(this);
		}

		::BMMBLECDPPE* get_Damageable()
		{
			return ((::BMMBLECDPPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMECHESSENTITY_GET_DAMAGEABLE_OFFSET))(this);
		}

		::System::Void set_Damageable(::BMMBLECDPPE* value)
		{
			return ((::System::Void(*)(::PVOID, ::BMMBLECDPPE*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMECHESSENTITY_SET_DAMAGEABLE_OFFSET))(this, value);
		}

		::System::Void OnUpdateInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMECHESSENTITY_ONUPDATEINTERNAL_OFFSET))(this);
		}

		::System::Void AttachHackShardedInfo(::MoleMole::FlowCanvas::HackShardedInfo* shardedInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::HackShardedInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMECHESSENTITY_ATTACHHACKSHARDEDINFO_OFFSET))(this, shardedInfo);
		}

		::System::Void OnAttachHackShardedInfo(::MoleMole::FlowCanvas::HackShardedInfo* shardedInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::HackShardedInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMECHESSENTITY_ONATTACHHACKSHARDEDINFO_OFFSET))(this, shardedInfo);
		}

		::System::Void __base_OnUpdateInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMECHESSENTITY___BASE_ONUPDATEINTERNAL_OFFSET))(this);
		}
	};
}
