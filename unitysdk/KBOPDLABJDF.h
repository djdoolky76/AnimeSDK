#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MiniMapIconType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace RPG::Client { class MapAnchorDef; }
namespace RPG::Client { class MapEntityDef; }
namespace System { class Object; }

#define KBOPDLABJDF_CEELKMGHHLJ_OFFSET UNITYSDK_OFFSET(0x1A470390)
#define KBOPDLABJDF_CTOR_OFFSET UNITYSDK_OFFSET(0x1A470E90)
#define KBOPDLABJDF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A4703E0)
#define KBOPDLABJDF_DLAILGNMFGI_1_OFFSET UNITYSDK_OFFSET(0x1A470100)
#define KBOPDLABJDF_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0x1A46FC00)
#define KBOPDLABJDF_EKIFBFNOMIJ_OFFSET UNITYSDK_OFFSET(0x1A470D20)
#define KBOPDLABJDF_ELNPLONBPDG_OFFSET UNITYSDK_OFFSET(0x1A470BF0)
#define KBOPDLABJDF_FLDDPPHHDEJ_OFFSET UNITYSDK_OFFSET(0x1A4709D0)
#define KBOPDLABJDF_GET_ANCHORDEF_OFFSET UNITYSDK_OFFSET(0x1A470450)
#define KBOPDLABJDF_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x1A470910)
#define KBOPDLABJDF_GET_CANTINT_OFFSET UNITYSDK_OFFSET(0x1A470510)
#define KBOPDLABJDF_GET_CIRCLECOLOR_OFFSET UNITYSDK_OFFSET(0x1A470670)
#define KBOPDLABJDF_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x1A4704F0)
#define KBOPDLABJDF_GET_ENTITYDEF_OFFSET UNITYSDK_OFFSET(0x1A470430)
#define KBOPDLABJDF_GET_HASH_OFFSET UNITYSDK_OFFSET(0x1A470490)
#define KBOPDLABJDF_GET_ICONID_OFFSET UNITYSDK_OFFSET(0x1A4704D0)
#define KBOPDLABJDF_GET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0x1A4706C0)
#define KBOPDLABJDF_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1A470470)
#define KBOPDLABJDF_GET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0x1A470590)
#define KBOPDLABJDF_GET_ISTRACKINGMAPPINGINFO_OFFSET UNITYSDK_OFFSET(0x1A4705D0)
#define KBOPDLABJDF_GET_ISTRACKINGMISSION_OFFSET UNITYSDK_OFFSET(0x1A4705B0)
#define KBOPDLABJDF_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1A470690)
#define KBOPDLABJDF_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1A4704B0)
#define KBOPDLABJDF_GET_RANGERADIUS_OFFSET UNITYSDK_OFFSET(0x1A470610)
#define KBOPDLABJDF_GET_RAWPOSITION_OFFSET UNITYSDK_OFFSET(0x1A470BC0)
#define KBOPDLABJDF_GET_RAWROTATION_OFFSET UNITYSDK_OFFSET(0x1A470BA0)
#define KBOPDLABJDF_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1A4705F0)
#define KBOPDLABJDF_GET_WAYPOINTSHOWRANGEMAX_OFFSET UNITYSDK_OFFSET(0x1A470650)
#define KBOPDLABJDF_GET_WAYPOINTSHOWRANGEMIN_OFFSET UNITYSDK_OFFSET(0x1A470630)
#define KBOPDLABJDF_IAAGIFNAGLP_OFFSET UNITYSDK_OFFSET(0x1A4702C0)
#define KBOPDLABJDF_JNCBEGFKCHF_OFFSET UNITYSDK_OFFSET(0x1A4706E0)
#define KBOPDLABJDF_KOBMNMJMDFG_OFFSET UNITYSDK_OFFSET(0x1A470D10)
#define KBOPDLABJDF_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x1A470530)
#define KBOPDLABJDF_LPGJLLJAGDN_OFFSET UNITYSDK_OFFSET(0x1A46FF50)
#define KBOPDLABJDF_MFIIBKKHLGH_OFFSET UNITYSDK_OFFSET(0x1A470D40)
#define KBOPDLABJDF_OIAKLGHBJBO_OFFSET UNITYSDK_OFFSET(0x1A470850)
#define KBOPDLABJDF_PAOFPBGKLFH_OFFSET UNITYSDK_OFFSET(0x1A470D30)
#define KBOPDLABJDF_SET_ANCHORDEF_OFFSET UNITYSDK_OFFSET(0x1A470460)
#define KBOPDLABJDF_SET_CANTINT_OFFSET UNITYSDK_OFFSET(0x1A470520)
#define KBOPDLABJDF_SET_CIRCLECOLOR_OFFSET UNITYSDK_OFFSET(0x1A470680)
#define KBOPDLABJDF_SET_COLOR_OFFSET UNITYSDK_OFFSET(0x1A470500)
#define KBOPDLABJDF_SET_ENTITYDEF_OFFSET UNITYSDK_OFFSET(0x1A470440)
#define KBOPDLABJDF_SET_HASH_OFFSET UNITYSDK_OFFSET(0x1A4704A0)
#define KBOPDLABJDF_SET_ICONID_OFFSET UNITYSDK_OFFSET(0x1A4704E0)
#define KBOPDLABJDF_SET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0x1A4706D0)
#define KBOPDLABJDF_SET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1A470480)
#define KBOPDLABJDF_SET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0x1A4705A0)
#define KBOPDLABJDF_SET_ISTRACKINGMAPPINGINFO_OFFSET UNITYSDK_OFFSET(0x1A4705E0)
#define KBOPDLABJDF_SET_ISTRACKINGMISSION_OFFSET UNITYSDK_OFFSET(0x1A4705C0)
#define KBOPDLABJDF_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1A4706B0)
#define KBOPDLABJDF_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1A4704C0)
#define KBOPDLABJDF_SET_RANGERADIUS_OFFSET UNITYSDK_OFFSET(0x1A470620)
#define KBOPDLABJDF_SET_RAWPOSITION_OFFSET UNITYSDK_OFFSET(0x1A470BE0)
#define KBOPDLABJDF_SET_RAWROTATION_OFFSET UNITYSDK_OFFSET(0x1A470BB0)
#define KBOPDLABJDF_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1A470600)
#define KBOPDLABJDF_SET_WAYPOINTSHOWRANGEMAX_OFFSET UNITYSDK_OFFSET(0x1A470660)
#define KBOPDLABJDF_SET_WAYPOINTSHOWRANGEMIN_OFFSET UNITYSDK_OFFSET(0x1A470640)

inline static constexpr unsigned int KBOPDLABJDF_TypeDefinitionIndex = 62018;

	class KBOPDLABJDF : public ::System::Object
	{
	public:
		::RPG::Client::MapEntityDef* _EntityDef_k__BackingField; // 0x10
		::RPG::Client::MapAnchorDef* _AnchorDef_k__BackingField; // 0x18
		::UnityEngine::Color _CircleColor_k__BackingField; // 0x20
		::System::Boolean _CanTint_k__BackingField; // 0x30
		::System::Nullable_1<::System::Boolean> IECPJFBLBLB; // 0x31
		::System::Int32 _Priority_k__BackingField; // 0x34
		::System::Int32 _Hash_k__BackingField; // 0x38
		::System::Single _WayPointShowRangeMin_k__BackingField; // 0x3C
		::System::Single _RawRotation_k__BackingField; // 0x40
		::System::Boolean _IsTrackingMappingInfo_k__BackingField; // 0x44
		::System::Boolean _IsTrackingMission_k__BackingField; // 0x45
		::System::Boolean _IsStatic_k__BackingField; // 0x46
		::System::Boolean LKAIKOLJPDO; // 0x47
		::System::Single _Rotation_k__BackingField; // 0x48
		::UnityEngine::Vector3 _RawPosition_k__BackingField; // 0x4C
		::UnityEngine::Vector3 _Position_k__BackingField; // 0x58
		::System::Int32 _Identifier_k__BackingField; // 0x64
		::System::Single _WayPointShowRangeMax_k__BackingField; // 0x68
		::RPG::Client::MiniMapIconType _IconType_k__BackingField; // 0x6C
		::System::Single _RangeRadius_k__BackingField; // 0x70
		::UnityEngine::Color _Color_k__BackingField; // 0x74
		::System::UInt32 _IconID_k__BackingField; // 0x84
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOPDLABJDF_CTOR_OFFSET))(this);
		}

		::System::Void DLAILGNMFGI(::RPG::Client::MapEntityDef* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityDef*, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + KBOPDLABJDF_DLAILGNMFGI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DLAILGNMFGI_1(::RPG::Client::MapAnchorDef* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapAnchorDef*, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + KBOPDLABJDF_DLAILGNMFGI_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void IAAGIFNAGLP(::System::Boolean a1, ::System::Single a2, ::UnityEngine::Color a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::UnityEngine::Color, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KBOPDLABJDF_IAAGIFNAGLP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void CEELKMGHHLJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KBOPDLABJDF_CEELKMGHHLJ_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOPDLABJDF_DISPOSE_OFFSET))(this);
		}

		static ::System::Int32 LPGJLLJAGDN(::System::Object* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Int32(*)(::System::Object*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KBOPDLABJDF_LPGJLLJAGDN_OFFSET))(a1, a2, a3);
		}

		::RPG::Client::MapEntityDef* get_EntityDef()
		{
			return ((::RPG::Client::MapEntityDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOPDLABJDF_GET_ENTITYDEF_OFFSET))(this);
		}

		::System::Void set_EntityDef(::RPG::Client::MapEntityDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + KBOPDLABJDF_SET_ENTITYDEF_OFFSET))(this, a1);
		}

		::RPG::Client::MapAnchorDef* get_AnchorDef()
		{
			return ((::RPG::Client::MapAnchorDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOPDLABJDF_GET_ANCHORDEF_OFFSET))(this);
		}

		::System::Void set_AnchorDef(::RPG::Client::MapAnchorDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapAnchorDef*))((::PBYTE)hIl2Cpp + KBOPDLABJDF_SET_ANCHORDEF_OFFSET))(this, a1);
		}

		::System::Int32 get_Identifier()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOPDLABJDF_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::Void set_Identifier(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KBOPDLABJDF_SET_IDENTIFIER_OFFSET))(this, a1);
		}

		::System::Int32 get_Hash()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOPDLABJDF_GET_HASH_OFFSET))(this);
		}

		::System::Void set_Hash(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KBOPDLABJDF_SET_HASH_OFFSET))(this, a1);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOPDLABJDF_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void set_Priority(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KBOPDLABJDF_SET_PRIORITY_OFFSET))(this, a1);
		}

		::System::UInt32 get_IconID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOPDLABJDF_GET_ICONID_OFFSET))(this);
		}

		::System::Void set_IconID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KBOPDLABJDF_SET_ICONID_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_Color()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOPDLABJDF_GET_COLOR_OFFSET))(this);
		}

		::System::Void set_Color(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + KBOPDLABJDF_SET_COLOR_OFFSET))(this, a1);
		}

		::System::Boolean get_CanTint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOPDLABJDF_GET_CANTINT_OFFSET))(this);
		}

		::System::Void set_CanTint(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KBOPDLABJDF_SET_CANTINT_OFFSET))(this, a1);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOPDLABJDF_LDAMHBBILAD_OFFSET))(this);
		}

		::System::Boolean get_IsStatic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOPDLABJDF_GET_ISSTATIC_OFFSET))(this);
		}

		::System::Void set_IsStatic(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KBOPDLABJDF_SET_ISSTATIC_OFFSET))(this, a1);
		}

		::System::Boolean get_IsTrackingMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOPDLABJDF_GET_ISTRACKINGMISSION_OFFSET))(this);
		}

		::System::Void set_IsTrackingMission(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KBOPDLABJDF_SET_ISTRACKINGMISSION_OFFSET))(this, a1);
		}

		::System::Boolean get_IsTrackingMappingInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOPDLABJDF_GET_ISTRACKINGMAPPINGINFO_OFFSET))(this);
		}

		::System::Void set_IsTrackingMappingInfo(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KBOPDLABJDF_SET_ISTRACKINGMAPPINGINFO_OFFSET))(this, a1);
		}

		::System::Single get_Rotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOPDLABJDF_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_Rotation(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KBOPDLABJDF_SET_ROTATION_OFFSET))(this, a1);
		}

		::System::Single get_RangeRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOPDLABJDF_GET_RANGERADIUS_OFFSET))(this);
		}

		::System::Void set_RangeRadius(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KBOPDLABJDF_SET_RANGERADIUS_OFFSET))(this, a1);
		}

		::System::Single get_WayPointShowRangeMin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOPDLABJDF_GET_WAYPOINTSHOWRANGEMIN_OFFSET))(this);
		}

		::System::Void set_WayPointShowRangeMin(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KBOPDLABJDF_SET_WAYPOINTSHOWRANGEMIN_OFFSET))(this, a1);
		}

		::System::Single get_WayPointShowRangeMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOPDLABJDF_GET_WAYPOINTSHOWRANGEMAX_OFFSET))(this);
		}

		::System::Void set_WayPointShowRangeMax(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KBOPDLABJDF_SET_WAYPOINTSHOWRANGEMAX_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_CircleColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOPDLABJDF_GET_CIRCLECOLOR_OFFSET))(this);
		}

		::System::Void set_CircleColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + KBOPDLABJDF_SET_CIRCLECOLOR_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOPDLABJDF_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KBOPDLABJDF_SET_POSITION_OFFSET))(this, a1);
		}

		::RPG::Client::MiniMapIconType get_IconType()
		{
			return ((::RPG::Client::MiniMapIconType(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOPDLABJDF_GET_ICONTYPE_OFFSET))(this);
		}

		::System::Void set_IconType(::RPG::Client::MiniMapIconType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MiniMapIconType))((::PBYTE)hIl2Cpp + KBOPDLABJDF_SET_ICONTYPE_OFFSET))(this, a1);
		}

		::System::Int32 JNCBEGFKCHF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOPDLABJDF_JNCBEGFKCHF_OFFSET))(this);
		}

		::System::Boolean OIAKLGHBJBO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOPDLABJDF_OIAKLGHBJBO_OFFSET))(this);
		}

		::System::Int32 get_AreaID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOPDLABJDF_GET_AREAID_OFFSET))(this);
		}

		::System::Boolean FLDDPPHHDEJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOPDLABJDF_FLDDPPHHDEJ_OFFSET))(this);
		}

		::System::Single get_RawRotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOPDLABJDF_GET_RAWROTATION_OFFSET))(this);
		}

		::System::Void set_RawRotation(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KBOPDLABJDF_SET_RAWROTATION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_RawPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOPDLABJDF_GET_RAWPOSITION_OFFSET))(this);
		}

		::System::Void set_RawPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KBOPDLABJDF_SET_RAWPOSITION_OFFSET))(this, a1);
		}

		::System::Boolean ELNPLONBPDG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOPDLABJDF_ELNPLONBPDG_OFFSET))(this);
		}

		::System::Int32 KOBMNMJMDFG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOPDLABJDF_KOBMNMJMDFG_OFFSET))(this);
		}

		::System::Boolean EKIFBFNOMIJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOPDLABJDF_EKIFBFNOMIJ_OFFSET))(this);
		}

		::UnityEngine::Vector2 PAOFPBGKLFH()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOPDLABJDF_PAOFPBGKLFH_OFFSET))(this);
		}

		::UnityEngine::Vector2 MFIIBKKHLGH()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + KBOPDLABJDF_MFIIBKKHLGH_OFFSET))(this);
		}

	};
