#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightTrailblazeGoodsType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEBOUGHTGOOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3D4380)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEBOUGHTGOOD_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1D3D4540)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEBOUGHTGOOD_GET_FATHERGOODID_OFFSET UNITYSDK_OFFSET(0x1D3D46C0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEBOUGHTGOOD_GET_GOODID_OFFSET UNITYSDK_OFFSET(0x1D3D4520)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEBOUGHTGOOD_GET_GOODTYPE_OFFSET UNITYSDK_OFFSET(0x1D3D46A0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEBOUGHTGOOD_GET_ICON_OFFSET UNITYSDK_OFFSET(0x1D3D46E0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEBOUGHTGOOD_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D3D4700)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEBOUGHTGOOD_GET_SIMPLEDESC_OFFSET UNITYSDK_OFFSET(0x1D3D45F0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEBOUGHTGOOD_ISFATHEROFGOODID_OFFSET UNITYSDK_OFFSET(0x1D3D4450)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEBOUGHTGOOD_SET_FATHERGOODID_OFFSET UNITYSDK_OFFSET(0x1D3D46D0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEBOUGHTGOOD_SET_GOODID_OFFSET UNITYSDK_OFFSET(0x1D3D4530)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEBOUGHTGOOD_SET_GOODTYPE_OFFSET UNITYSDK_OFFSET(0x1D3D46B0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEBOUGHTGOOD_SET_ICON_OFFSET UNITYSDK_OFFSET(0x1D3D46F0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEBOUGHTGOOD_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1D3D4710)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTrailblazeBoughtGood_TypeDefinitionIndex = 67279;

	class GridFightTrailblazeBoughtGood : public ::System::Object
	{
	public:
		::System::String* _Icon_k__BackingField; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* _EffectParamList; // 0x18
		::System::String* _Name_k__BackingField; // 0x20
		::RPG::GameCore::GridFightTrailblazeGoodsType _GoodType_k__BackingField; // 0x28
		::System::UInt32 _FatherGoodID_k__BackingField; // 0x2C
		::RPG::Client::TextID _SimpleDescTextID; // 0x30
		::System::UInt32 _GoodID_k__BackingField; // 0x40
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _DescTextID; // 0x48
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEBOUGHTGOOD_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsFatherOfGoodID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEBOUGHTGOOD_ISFATHEROFGOODID_OFFSET))(this, a1);
		}

		::System::UInt32 get_GoodID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEBOUGHTGOOD_GET_GOODID_OFFSET))(this);
		}

		::System::Void set_GoodID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEBOUGHTGOOD_SET_GOODID_OFFSET))(this, a1);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEBOUGHTGOOD_GET_DESC_OFFSET))(this);
		}

		::System::String* get_SimpleDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEBOUGHTGOOD_GET_SIMPLEDESC_OFFSET))(this);
		}

		::RPG::GameCore::GridFightTrailblazeGoodsType get_GoodType()
		{
			return ((::RPG::GameCore::GridFightTrailblazeGoodsType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEBOUGHTGOOD_GET_GOODTYPE_OFFSET))(this);
		}

		::System::Void set_GoodType(::RPG::GameCore::GridFightTrailblazeGoodsType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightTrailblazeGoodsType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEBOUGHTGOOD_SET_GOODTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_FatherGoodID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEBOUGHTGOOD_GET_FATHERGOODID_OFFSET))(this);
		}

		::System::Void set_FatherGoodID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEBOUGHTGOOD_SET_FATHERGOODID_OFFSET))(this, a1);
		}

		::System::String* get_Icon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEBOUGHTGOOD_GET_ICON_OFFSET))(this);
		}

		::System::Void set_Icon(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEBOUGHTGOOD_SET_ICON_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEBOUGHTGOOD_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEBOUGHTGOOD_SET_NAME_OFFSET))(this, a1);
		}

	};
}
