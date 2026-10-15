#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MiniMapIconType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class MapAnchorDef; }
namespace System { class Nullable; }
namespace System { class String; }

#define NABNKDDBMFP_CTOR_OFFSET UNITYSDK_OFFSET(0xBA548E0)
#define NABNKDDBMFP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA54BA0)
#define NABNKDDBMFP_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0xBA54A20)
#define NABNKDDBMFP_EIEALGBCKCL_OFFSET UNITYSDK_OFFSET(0xBA553E0)
#define NABNKDDBMFP_EKIFBFNOMIJ_OFFSET UNITYSDK_OFFSET(0xBA55680)
#define NABNKDDBMFP_ELNPLONBPDG_OFFSET UNITYSDK_OFFSET(0xBA552E0)
#define NABNKDDBMFP_EPGNEMEKKCB_OFFSET UNITYSDK_OFFSET(0xBA553F0)
#define NABNKDDBMFP_FLDDPPHHDEJ_OFFSET UNITYSDK_OFFSET(0xBA55070)
#define NABNKDDBMFP_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xBA54FF0)
#define NABNKDDBMFP_GET_CIRCLECOLOR_OFFSET UNITYSDK_OFFSET(0xBA54CD0)
#define NABNKDDBMFP_GET_HASH_OFFSET UNITYSDK_OFFSET(0xBA54C10)
#define NABNKDDBMFP_GET_ICONID_OFFSET UNITYSDK_OFFSET(0xBA54C30)
#define NABNKDDBMFP_GET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0xBA54D50)
#define NABNKDDBMFP_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xBA54C50)
#define NABNKDDBMFP_GET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0xBA54D30)
#define NABNKDDBMFP_GET_ISTRACKINGMAPPINGINFO_OFFSET UNITYSDK_OFFSET(0xBA54D10)
#define NABNKDDBMFP_GET_ISTRACKINGMISSION_OFFSET UNITYSDK_OFFSET(0xBA54CF0)
#define NABNKDDBMFP_GET_RANGERADIUS_OFFSET UNITYSDK_OFFSET(0xBA54C70)
#define NABNKDDBMFP_GET_TARGET_OFFSET UNITYSDK_OFFSET(0xBA54BF0)
#define NABNKDDBMFP_GET_WAYPOINTSHOWRANGEMAX_OFFSET UNITYSDK_OFFSET(0xBA54CB0)
#define NABNKDDBMFP_GET_WAYPOINTSHOWRANGEMIN_OFFSET UNITYSDK_OFFSET(0xBA54C90)
#define NABNKDDBMFP_IAAGIFNAGLP_OFFSET UNITYSDK_OFFSET(0xBA54AD0)
#define NABNKDDBMFP_IIDNGLDLPBM_OFFSET UNITYSDK_OFFSET(0xBA55570)
#define NABNKDDBMFP_JNCBEGFKCHF_OFFSET UNITYSDK_OFFSET(0xBA54D70)
#define NABNKDDBMFP_KOBMNMJMDFG_OFFSET UNITYSDK_OFFSET(0xBA55670)
#define NABNKDDBMFP_LCKMECPJCHL_OFFSET UNITYSDK_OFFSET(0xBA55640)
#define NABNKDDBMFP_LJJCDDOALNO_OFFSET UNITYSDK_OFFSET(0xBA554C0)
#define NABNKDDBMFP_LPGJLLJAGDN_OFFSET UNITYSDK_OFFSET(0xBA548F0)
#define NABNKDDBMFP_MFIIBKKHLGH_OFFSET UNITYSDK_OFFSET(0xBA556A0)
#define NABNKDDBMFP_NODIHBKJDJE_OFFSET UNITYSDK_OFFSET(0xBA55580)
#define NABNKDDBMFP_OHEOKPOKDFG_OFFSET UNITYSDK_OFFSET(0xBA55550)
#define NABNKDDBMFP_OIAKLGHBJBO_OFFSET UNITYSDK_OFFSET(0xBA54EE0)
#define NABNKDDBMFP_PAOFPBGKLFH_OFFSET UNITYSDK_OFFSET(0xBA55690)
#define NABNKDDBMFP_PEBPPBJPKFN_OFFSET UNITYSDK_OFFSET(0xBA55560)
#define NABNKDDBMFP_SET_CIRCLECOLOR_OFFSET UNITYSDK_OFFSET(0xBA54CE0)
#define NABNKDDBMFP_SET_HASH_OFFSET UNITYSDK_OFFSET(0xBA54C20)
#define NABNKDDBMFP_SET_ICONID_OFFSET UNITYSDK_OFFSET(0xBA54C40)
#define NABNKDDBMFP_SET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0xBA54D60)
#define NABNKDDBMFP_SET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xBA54C60)
#define NABNKDDBMFP_SET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0xBA54D40)
#define NABNKDDBMFP_SET_ISTRACKINGMAPPINGINFO_OFFSET UNITYSDK_OFFSET(0xBA54D20)
#define NABNKDDBMFP_SET_ISTRACKINGMISSION_OFFSET UNITYSDK_OFFSET(0xBA54D00)
#define NABNKDDBMFP_SET_RANGERADIUS_OFFSET UNITYSDK_OFFSET(0xBA54C80)
#define NABNKDDBMFP_SET_TARGET_OFFSET UNITYSDK_OFFSET(0xBA54C00)
#define NABNKDDBMFP_SET_WAYPOINTSHOWRANGEMAX_OFFSET UNITYSDK_OFFSET(0xBA54CC0)
#define NABNKDDBMFP_SET_WAYPOINTSHOWRANGEMIN_OFFSET UNITYSDK_OFFSET(0xBA54CA0)
#define NABNKDDBMFP_TOSTRING_OFFSET UNITYSDK_OFFSET(0xBA558A0)

	class NABNKDDBMFP : public ::System::Object
	{
	public:
		::RPG::Client::MapAnchorDef* _Target_k__BackingField; // 0x10
		::System::Int32 BOCOKNFLKID; // 0x18
		::System::Single _RangeRadius_k__BackingField; // 0x1C
		::System::Int32 _Hash_k__BackingField; // 0x20
		::System::Single _WayPointShowRangeMin_k__BackingField; // 0x24
		::System::Single _WayPointShowRangeMax_k__BackingField; // 0x28
		::UnityEngine::Color _CircleColor_k__BackingField; // 0x2C
		::RPG::Client::MiniMapIconType _IconType_k__BackingField; // 0x3C
		::System::Int32 _Identifier_k__BackingField; // 0x40
		::System::UInt32 _IconID_k__BackingField; // 0x44
		::System::Int32 DEJLEBHFJGB; // 0x48
		::System::Boolean _IsTrackingMappingInfo_k__BackingField; // 0x4C
		::System::Nullable* IECPJFBLBLB; // 0x4D
		::System::Boolean _IsStatic_k__BackingField; // 0x4F
		::System::Boolean _IsTrackingMission_k__BackingField; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NABNKDDBMFP_CTOR_OFFSET))(this);
		}

		static ::System::Int32 LPGJLLJAGDN(::RPG::Client::MapAnchorDef* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Int32(*)(::RPG::Client::MapAnchorDef*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NABNKDDBMFP_LPGJLLJAGDN_OFFSET))(a1, a2, a3);
		}

		::System::Void DLAILGNMFGI(::RPG::Client::MapAnchorDef* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapAnchorDef*, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + NABNKDDBMFP_DLAILGNMFGI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void IAAGIFNAGLP(::System::Boolean a1, ::System::Single a2, ::UnityEngine::Color a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::UnityEngine::Color, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NABNKDDBMFP_IAAGIFNAGLP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NABNKDDBMFP_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::MapAnchorDef* get_Target()
		{
			return ((::RPG::Client::MapAnchorDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + NABNKDDBMFP_GET_TARGET_OFFSET))(this);
		}

		::System::Void set_Target(::RPG::Client::MapAnchorDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapAnchorDef*))((::PBYTE)hIl2Cpp + NABNKDDBMFP_SET_TARGET_OFFSET))(this, a1);
		}

		::System::Int32 get_Hash()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NABNKDDBMFP_GET_HASH_OFFSET))(this);
		}

		::System::Void set_Hash(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NABNKDDBMFP_SET_HASH_OFFSET))(this, a1);
		}

		::System::UInt32 get_IconID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NABNKDDBMFP_GET_ICONID_OFFSET))(this);
		}

		::System::Void set_IconID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NABNKDDBMFP_SET_ICONID_OFFSET))(this, a1);
		}

		::System::Int32 get_Identifier()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NABNKDDBMFP_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::Void set_Identifier(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NABNKDDBMFP_SET_IDENTIFIER_OFFSET))(this, a1);
		}

		::System::Single get_RangeRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NABNKDDBMFP_GET_RANGERADIUS_OFFSET))(this);
		}

		::System::Void set_RangeRadius(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NABNKDDBMFP_SET_RANGERADIUS_OFFSET))(this, a1);
		}

		::System::Single get_WayPointShowRangeMin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NABNKDDBMFP_GET_WAYPOINTSHOWRANGEMIN_OFFSET))(this);
		}

		::System::Void set_WayPointShowRangeMin(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NABNKDDBMFP_SET_WAYPOINTSHOWRANGEMIN_OFFSET))(this, a1);
		}

		::System::Single get_WayPointShowRangeMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NABNKDDBMFP_GET_WAYPOINTSHOWRANGEMAX_OFFSET))(this);
		}

		::System::Void set_WayPointShowRangeMax(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NABNKDDBMFP_SET_WAYPOINTSHOWRANGEMAX_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_CircleColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + NABNKDDBMFP_GET_CIRCLECOLOR_OFFSET))(this);
		}

		::System::Void set_CircleColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + NABNKDDBMFP_SET_CIRCLECOLOR_OFFSET))(this, a1);
		}

		::System::Boolean get_IsTrackingMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NABNKDDBMFP_GET_ISTRACKINGMISSION_OFFSET))(this);
		}

		::System::Void set_IsTrackingMission(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NABNKDDBMFP_SET_ISTRACKINGMISSION_OFFSET))(this, a1);
		}

		::System::Boolean get_IsTrackingMappingInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NABNKDDBMFP_GET_ISTRACKINGMAPPINGINFO_OFFSET))(this);
		}

		::System::Void set_IsTrackingMappingInfo(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NABNKDDBMFP_SET_ISTRACKINGMAPPINGINFO_OFFSET))(this, a1);
		}

		::System::Boolean get_IsStatic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NABNKDDBMFP_GET_ISSTATIC_OFFSET))(this);
		}

		::System::Void set_IsStatic(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NABNKDDBMFP_SET_ISSTATIC_OFFSET))(this, a1);
		}

		::RPG::Client::MiniMapIconType get_IconType()
		{
			return ((::RPG::Client::MiniMapIconType(*)(::PVOID))((::PBYTE)hIl2Cpp + NABNKDDBMFP_GET_ICONTYPE_OFFSET))(this);
		}

		::System::Void set_IconType(::RPG::Client::MiniMapIconType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MiniMapIconType))((::PBYTE)hIl2Cpp + NABNKDDBMFP_SET_ICONTYPE_OFFSET))(this, a1);
		}

		::System::Int32 JNCBEGFKCHF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NABNKDDBMFP_JNCBEGFKCHF_OFFSET))(this);
		}

		::System::Boolean OIAKLGHBJBO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NABNKDDBMFP_OIAKLGHBJBO_OFFSET))(this);
		}

		::System::Int32 get_AreaID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NABNKDDBMFP_GET_AREAID_OFFSET))(this);
		}

		::System::Boolean FLDDPPHHDEJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NABNKDDBMFP_FLDDPPHHDEJ_OFFSET))(this);
		}

		::System::Boolean ELNPLONBPDG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NABNKDDBMFP_ELNPLONBPDG_OFFSET))(this);
		}

		::System::Boolean EIEALGBCKCL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NABNKDDBMFP_EIEALGBCKCL_OFFSET))(this);
		}

		::System::Single EPGNEMEKKCB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NABNKDDBMFP_EPGNEMEKKCB_OFFSET))(this);
		}

		::UnityEngine::Vector3 LJJCDDOALNO()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NABNKDDBMFP_LJJCDDOALNO_OFFSET))(this);
		}

		::UnityEngine::Color OHEOKPOKDFG()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + NABNKDDBMFP_OHEOKPOKDFG_OFFSET))(this);
		}

		::System::Boolean PEBPPBJPKFN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NABNKDDBMFP_PEBPPBJPKFN_OFFSET))(this);
		}

		::System::Int32 IIDNGLDLPBM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NABNKDDBMFP_IIDNGLDLPBM_OFFSET))(this);
		}

		::System::Single NODIHBKJDJE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NABNKDDBMFP_NODIHBKJDJE_OFFSET))(this);
		}

		::UnityEngine::Vector3 LCKMECPJCHL()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NABNKDDBMFP_LCKMECPJCHL_OFFSET))(this);
		}

		::System::Int32 KOBMNMJMDFG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NABNKDDBMFP_KOBMNMJMDFG_OFFSET))(this);
		}

		::System::Boolean EKIFBFNOMIJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NABNKDDBMFP_EKIFBFNOMIJ_OFFSET))(this);
		}

		::UnityEngine::Vector2 PAOFPBGKLFH()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + NABNKDDBMFP_PAOFPBGKLFH_OFFSET))(this);
		}

		::UnityEngine::Vector2 MFIIBKKHLGH()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + NABNKDDBMFP_MFIIBKKHLGH_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NABNKDDBMFP_TOSTRING_OFFSET))(this);
		}

	};
