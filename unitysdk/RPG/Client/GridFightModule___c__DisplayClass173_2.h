#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightTraitConfig; }
namespace RPG::Client { class GridFightTraitConfigBase; }

#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS173_2_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC3FE60)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS173_2__GETDIFFNAMESINHANDBOOK_B__2_OFFSET UNITYSDK_OFFSET(0x1CC557E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModule___c__DisplayClass173_2_TypeDefinitionIndex = 66422;

	template <typename T1, typename T2>
	class GridFightModule___c__DisplayClass173_2 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTraitConfig* trait; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS173_2_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetDiffNamesInHandBook_b__2(::RPG::Client::GridFightTraitConfigBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitConfigBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS173_2__GETDIFFNAMESINHANDBOOK_B__2_OFFSET))(this, a1);
		}

	};
}
