#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightBonfireEventOption.h"
namespace RPG::Client { class GridFightBonfireEventDialog; }
namespace RPG::Client { class GridFightBonfirePendingAction; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTBONFIRERESTHEALOPTION_CTOR_OFFSET UNITYSDK_OFFSET(0xDA80DE0)
#define RPG_CLIENT_GRIDFIGHTBONFIRERESTHEALOPTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0xDA84020)
#define RPG_CLIENT_GRIDFIGHTBONFIRERESTHEALOPTION_GETDESC_OFFSET UNITYSDK_OFFSET(0xDA83F90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBonfireRestHealOption_TypeDefinitionIndex = 65874;

	class GridFightBonfireRestHealOption : public ::RPG::Client::GridFightBonfireEventOption
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIRERESTHEALOPTION_CTOR_OFFSET))(this);
		}

		::System::String* GetDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIRERESTHEALOPTION_GETDESC_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::GridFightBonfireEventDialog*>* Execute(::RPG::Client::GridFightBonfirePendingAction* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::GridFightBonfireEventDialog*>*(*)(::PVOID, ::RPG::Client::GridFightBonfirePendingAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIRERESTHEALOPTION_EXECUTE_OFFSET))(this, a1);
		}

	};
}
