#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightCostContext; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTCOSTCONTEXT_CCTOR_OFFSET UNITYSDK_OFFSET(0xDAA0320)
#define RPG_CLIENT_GRIDFIGHTCOSTCONTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0xDA9FE90)
#define RPG_CLIENT_GRIDFIGHTCOSTCONTEXT_FORGOLD_OFFSET UNITYSDK_OFFSET(0xDA9FEB0)
#define RPG_CLIENT_GRIDFIGHTCOSTCONTEXT_FORHP_OFFSET UNITYSDK_OFFSET(0xDAA00B0)
#define RPG_CLIENT_GRIDFIGHTCOSTCONTEXT_GET_COST_OFFSET UNITYSDK_OFFSET(0xDA9FE10)
#define RPG_CLIENT_GRIDFIGHTCOSTCONTEXT_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xDA9FE30)
#define RPG_CLIENT_GRIDFIGHTCOSTCONTEXT_GET_ISENOUGH_OFFSET UNITYSDK_OFFSET(0xDA9FE50)
#define RPG_CLIENT_GRIDFIGHTCOSTCONTEXT_GET_NOTENOUGHTEXTID_OFFSET UNITYSDK_OFFSET(0xDA9FE70)
#define RPG_CLIENT_GRIDFIGHTCOSTCONTEXT_SET_COST_OFFSET UNITYSDK_OFFSET(0xDA9FE20)
#define RPG_CLIENT_GRIDFIGHTCOSTCONTEXT_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xDA9FE40)
#define RPG_CLIENT_GRIDFIGHTCOSTCONTEXT_SET_ISENOUGH_OFFSET UNITYSDK_OFFSET(0xDA9FE60)
#define RPG_CLIENT_GRIDFIGHTCOSTCONTEXT_SET_NOTENOUGHTEXTID_OFFSET UNITYSDK_OFFSET(0xDA9FE80)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightCostContext_TypeDefinitionIndex = 66410;

	class GridFightCostContext : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::System::UInt32 _Cost_k__BackingField; // 0x18
		::System::Boolean _IsEnough_k__BackingField; // 0x1C
		::System::Byte _padding0[0x3];
		::RPG::Client::TextID _NotEnoughTextID_k__BackingField; // 0x20
		static ::RPG::Client::TextID* StaticGet__HPNotEnoughTextID()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("RPG.Client", "GridFightCostContext")->GetStaticField(0x15950);
		}

		static ::RPG::Client::TextID* StaticGet__GoldNotEnoughTextID()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("RPG.Client", "GridFightCostContext")->GetStaticField(0x15960);
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
