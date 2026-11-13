#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightCostContext; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTCOSTCONTEXT_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D59EDE0)
#define RPG_CLIENT_GRIDFIGHTCOSTCONTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D59E950)
#define RPG_CLIENT_GRIDFIGHTCOSTCONTEXT_FORGOLD_OFFSET UNITYSDK_OFFSET(0x1D59E970)
#define RPG_CLIENT_GRIDFIGHTCOSTCONTEXT_FORHP_OFFSET UNITYSDK_OFFSET(0x1D59EB70)
#define RPG_CLIENT_GRIDFIGHTCOSTCONTEXT_GET_COST_OFFSET UNITYSDK_OFFSET(0x1D59E8D0)
#define RPG_CLIENT_GRIDFIGHTCOSTCONTEXT_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1D59E8F0)
#define RPG_CLIENT_GRIDFIGHTCOSTCONTEXT_GET_ISENOUGH_OFFSET UNITYSDK_OFFSET(0x1D59E910)
#define RPG_CLIENT_GRIDFIGHTCOSTCONTEXT_GET_NOTENOUGHTEXTID_OFFSET UNITYSDK_OFFSET(0x1D59E930)
#define RPG_CLIENT_GRIDFIGHTCOSTCONTEXT_SET_COST_OFFSET UNITYSDK_OFFSET(0x1D59E8E0)
#define RPG_CLIENT_GRIDFIGHTCOSTCONTEXT_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1D59E900)
#define RPG_CLIENT_GRIDFIGHTCOSTCONTEXT_SET_ISENOUGH_OFFSET UNITYSDK_OFFSET(0x1D59E920)
#define RPG_CLIENT_GRIDFIGHTCOSTCONTEXT_SET_NOTENOUGHTEXTID_OFFSET UNITYSDK_OFFSET(0x1D59E940)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightCostContext_TypeDefinitionIndex = 66410;

	class GridFightCostContext : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::RPG::Client::TextID _NotEnoughTextID_k__BackingField; // 0x18
		::System::Boolean _IsEnough_k__BackingField; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 _Cost_k__BackingField; // 0x2C
		static ::RPG::Client::TextID* StaticGet__HPNotEnoughTextID()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("RPG.Client", "GridFightCostContext")->GetStaticField(0x158D0);
		}

		static ::RPG::Client::TextID* StaticGet__GoldNotEnoughTextID()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("RPG.Client", "GridFightCostContext")->GetStaticField(0x158E0);
		}

		::System::Void _ctor(::System::UInt32 a1, ::System::String* a2, ::System::Boolean a3, ::RPG::Client::TextID a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Boolean, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCOSTCONTEXT_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCOSTCONTEXT_CCTOR_OFFSET))();
		}

		::System::UInt32 get_Cost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCOSTCONTEXT_GET_COST_OFFSET))(this);
		}

		::System::Void set_Cost(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCOSTCONTEXT_SET_COST_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCOSTCONTEXT_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCOSTCONTEXT_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEnough()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCOSTCONTEXT_GET_ISENOUGH_OFFSET))(this);
		}

		::System::Void set_IsEnough(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCOSTCONTEXT_SET_ISENOUGH_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_NotEnoughTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCOSTCONTEXT_GET_NOTENOUGHTEXTID_OFFSET))(this);
		}

		::System::Void set_NotEnoughTextID(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCOSTCONTEXT_SET_NOTENOUGHTEXTID_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightCostContext* ForGold(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightCostContext*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCOSTCONTEXT_FORGOLD_OFFSET))(a1);
		}

		static ::RPG::Client::GridFightCostContext* ForHP(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightCostContext*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCOSTCONTEXT_FORHP_OFFSET))(a1);
		}

	};
}
