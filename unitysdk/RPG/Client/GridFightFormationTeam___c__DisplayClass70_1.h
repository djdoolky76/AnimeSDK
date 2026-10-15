#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBEFMKBPJMB;
namespace RPG::Client { class GridFightFormationRole; }

#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS70_1_CTOR_OFFSET UNITYSDK_OFFSET(0xD13A1D0)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS70_1___SYNCTEAM_B__2_OFFSET UNITYSDK_OFFSET(0xD13A1E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFormationTeam___c__DisplayClass70_1_TypeDefinitionIndex = 64675;

	template <typename T>
	class GridFightFormationTeam___c__DisplayClass70_1 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightFormationRole* role; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS70_1_CTOR_OFFSET))(this);
		}

		::System::Boolean __SyncTeam_b__2(::HBEFMKBPJMB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HBEFMKBPJMB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS70_1___SYNCTEAM_B__2_OFFSET))(this, a1);
		}

	};
}
