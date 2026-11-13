#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPFBIPPLJAP;
namespace RPG::Client { class GridFightGameRefData; }
namespace RPG::Client { template <typename T> class GridFightGameRefHttpRspBody_1; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS107_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69DCA0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS107_0__REQSHARECODEINFO_B__0_OFFSET UNITYSDK_OFFSET(0x1D69EC70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRef___c__DisplayClass107_0_TypeDefinitionIndex = 66247;

	class GridFightGameRef___c__DisplayClass107_0 : public ::System::Object
	{
	public:
		::System::Action_1<::RPG::Client::GridFightGameRefData*>* callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS107_0_CTOR_OFFSET))(this);
		}

		::System::Void _ReqShareCodeInfo_b__0(::RPG::Client::GridFightGameRefHttpRspBody_1<::DPFBIPPLJAP*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefHttpRspBody_1<::DPFBIPPLJAP*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS107_0__REQSHARECODEINFO_B__0_OFFSET))(this, a1);
		}

	};
}
