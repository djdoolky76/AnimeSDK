#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightDamageStatisticInfo.h"
#include "unitysdk/System/Nullable_1.h"
class PLFKMENCDMM;
namespace RPG::Client { class GridFightSeasonRole; }

#define RPG_CLIENT_GRIDFIGHTROLEDAMAGESTATISTICINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xD1F9000)
#define RPG_CLIENT_GRIDFIGHTROLEDAMAGESTATISTICINFO_GET_ROLE_OFFSET UNITYSDK_OFFSET(0xD1F9340)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleDamageStatisticInfo_TypeDefinitionIndex = 64415;

	class GridFightRoleDamageStatisticInfo : public ::RPG::Client::GridFightDamageStatisticInfo
	{
	public:
		::System::Void _ctor(::PLFKMENCDMM* a1, ::System::Double a2, ::System::Nullable_1<::System::UInt32> a3)
		{
			return ((::System::Void(*)(::PVOID, ::PLFKMENCDMM*, ::System::Double, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEDAMAGESTATISTICINFO_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::GridFightSeasonRole* get_Role()
		{
			return ((::RPG::Client::GridFightSeasonRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEDAMAGESTATISTICINFO_GET_ROLE_OFFSET))(this);
		}

	};
}
