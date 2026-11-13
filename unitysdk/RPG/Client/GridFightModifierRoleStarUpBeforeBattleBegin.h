#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;

#define RPG_CLIENT_GRIDFIGHTMODIFIERROLESTARUPBEFOREBATTLEBEGIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC36F20)
#define RPG_CLIENT_GRIDFIGHTMODIFIERROLESTARUPBEFOREBATTLEBEGIN_GET_SOURCEROLEID_OFFSET UNITYSDK_OFFSET(0x1CC36F80)
#define RPG_CLIENT_GRIDFIGHTMODIFIERROLESTARUPBEFOREBATTLEBEGIN_UPDATE_OFFSET UNITYSDK_OFFSET(0x1CC36F30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModifierRoleStarUpBeforeBattleBegin_TypeDefinitionIndex = 66657;

	class GridFightModifierRoleStarUpBeforeBattleBegin : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERROLESTARUPBEFOREBATTLEBEGIN_CTOR_OFFSET))(this, a1);
		}

		::System::Void Update(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERROLESTARUPBEFOREBATTLEBEGIN_UPDATE_OFFSET))(this, a1);
		}

		::System::UInt32 get_SourceRoleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODIFIERROLESTARUPBEFOREBATTLEBEGIN_GET_SOURCEROLEID_OFFSET))(this);
		}

	};
}
