#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MMKKGCAMKCK;
namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTGAMESESSION___C__DISPLAYCLASS49_1_CTOR_OFFSET UNITYSDK_OFFSET(0xDB4EF50)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION___C__DISPLAYCLASS49_1__COMPAREWITHCURTEAM_B__1_OFFSET UNITYSDK_OFFSET(0xDB50650)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameSession___c__DisplayClass49_1_TypeDefinitionIndex = 66416;

	template <typename T>
	class GridFightGameSession___c__DisplayClass49_1 : public ::System::Object
	{
	public:
		::MMKKGCAMKCK* fakeRemoveModifier; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION___C__DISPLAYCLASS49_1_CTOR_OFFSET))(this);
		}

		::System::Boolean _CompareWithCurTeam_b__1(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION___C__DISPLAYCLASS49_1__COMPAREWITHCURTEAM_B__1_OFFSET))(this, a1);
		}

	};
}
