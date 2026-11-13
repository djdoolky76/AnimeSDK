#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PJDOLCFHBBN;
namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTGAMESESSION___C__DISPLAYCLASS49_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD620F0)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION___C__DISPLAYCLASS49_0__COMPAREWITHCURTEAM_B__0_OFFSET UNITYSDK_OFFSET(0x1CD64970)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameSession___c__DisplayClass49_0_TypeDefinitionIndex = 66415;

	class GridFightGameSession___c__DisplayClass49_0 : public ::System::Object
	{
	public:
		::PJDOLCFHBBN* modifier; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION___C__DISPLAYCLASS49_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _CompareWithCurTeam_b__0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION___C__DISPLAYCLASS49_0__COMPAREWITHCURTEAM_B__0_OFFSET))(this, a1);
		}

	};
}
