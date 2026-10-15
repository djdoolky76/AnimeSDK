#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBEFMKBPJMB;
namespace RPG::Client { class GridFightFormationRole; }

#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS70_2_CTOR_OFFSET UNITYSDK_OFFSET(0xD140040)
#define RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS70_2___SYNCTEAM_B__4_OFFSET UNITYSDK_OFFSET(0xD142680)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFormationTeam___c__DisplayClass70_2_TypeDefinitionIndex = 64676;

	template <typename T1, typename T2>
	class GridFightFormationTeam___c__DisplayClass70_2 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightFormationRole* finalRole; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS70_2_CTOR_OFFSET))(this);
		}

		::System::Boolean __SyncTeam_b__4(::HBEFMKBPJMB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HBEFMKBPJMB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORMATIONTEAM___C__DISPLAYCLASS70_2___SYNCTEAM_B__4_OFFSET))(this, a1);
		}

	};
}
