#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MiniMapIconType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class String; }

#define EJMCJECLENI_CEELKMGHHLJ_OFFSET UNITYSDK_OFFSET(0x19AC4690)
#define EJMCJECLENI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x19AC4380)
#define EJMCJECLENI_CTOR_OFFSET UNITYSDK_OFFSET(0x19AC4360)
#define EJMCJECLENI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19AC46E0)
#define EJMCJECLENI_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0x19AC43C0)
#define EJMCJECLENI_EIEALGBCKCL_OFFSET UNITYSDK_OFFSET(0x19AC51B0)
#define EJMCJECLENI_EKIFBFNOMIJ_OFFSET UNITYSDK_OFFSET(0x19AC5830)
#define EJMCJECLENI_ELNPLONBPDG_OFFSET UNITYSDK_OFFSET(0x19AC5080)
#define EJMCJECLENI_EPGNEMEKKCB_OFFSET UNITYSDK_OFFSET(0x19AC5220)
#define EJMCJECLENI_FLDDPPHHDEJ_OFFSET UNITYSDK_OFFSET(0x19AC4DE0)
#define EJMCJECLENI_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x19AC4D50)
#define EJMCJECLENI_GET_CANTINT_OFFSET UNITYSDK_OFFSET(0x19AC5060)
#define EJMCJECLENI_GET_CIRCLECOLOR_OFFSET UNITYSDK_OFFSET(0x19AC4910)
#define EJMCJECLENI_GET_HASH_OFFSET UNITYSDK_OFFSET(0x19AC4770)
#define EJMCJECLENI_GET_ICONCOLOR_OFFSET UNITYSDK_OFFSET(0x19AC5040)
#define EJMCJECLENI_GET_ICONID_OFFSET UNITYSDK_OFFSET(0x19AC4790)
#define EJMCJECLENI_GET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0x19AC49B0)
#define EJMCJECLENI_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x19AC4870)
#define EJMCJECLENI_GET_ISMISSION_OFFSET UNITYSDK_OFFSET(0x19AC4930)
#define EJMCJECLENI_GET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0x19AC4990)
#define EJMCJECLENI_GET_ISTRACKINGCONNECTIVITY_OFFSET UNITYSDK_OFFSET(0x19AC5190)
#define EJMCJECLENI_GET_ISTRACKINGMAPPINGINFO_OFFSET UNITYSDK_OFFSET(0x19AC4970)
#define EJMCJECLENI_GET_ISTRACKINGMISSION_OFFSET UNITYSDK_OFFSET(0x19AC4950)
#define EJMCJECLENI_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x19AC4890)
#define EJMCJECLENI_GET_PROPTARGET_OFFSET UNITYSDK_OFFSET(0x19AC4730)
#define EJMCJECLENI_GET_RANGERADIUS_OFFSET UNITYSDK_OFFSET(0x19AC48B0)
#define EJMCJECLENI_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x19AC4750)
#define EJMCJECLENI_GET_WAYPOINTSHOWRANGEMAX_OFFSET UNITYSDK_OFFSET(0x19AC48F0)
#define EJMCJECLENI_GET_WAYPOINTSHOWRANGEMIN_OFFSET UNITYSDK_OFFSET(0x19AC48D0)
#define EJMCJECLENI_IAAGIFNAGLP_OFFSET UNITYSDK_OFFSET(0x19AC45C0)
#define EJMCJECLENI_JNCBEGFKCHF_OFFSET UNITYSDK_OFFSET(0x19AC49D0)
#define EJMCJECLENI_KOBMNMJMDFG_OFFSET UNITYSDK_OFFSET(0x19AC5820)
#define EJMCJECLENI_LCKMECPJCHL_OFFSET UNITYSDK_OFFSET(0x19AC5520)
#define EJMCJECLENI_LJJCDDOALNO_OFFSET UNITYSDK_OFFSET(0x19AC5330)
#define EJMCJECLENI_LPGJLLJAGDN_OFFSET UNITYSDK_OFFSET(0x19AC4490)
#define EJMCJECLENI_MFIIBKKHLGH_OFFSET UNITYSDK_OFFSET(0x19AC5600)
#define EJMCJECLENI_NODIHBKJDJE_OFFSET UNITYSDK_OFFSET(0x19AC5420)
#define EJMCJECLENI_OHEOKPOKDFG_OFFSET UNITYSDK_OFFSET(0x19AC5410)
#define EJMCJECLENI_OIAKLGHBJBO_OFFSET UNITYSDK_OFFSET(0x19AC4BC0)
#define EJMCJECLENI_PAOFPBGKLFH_OFFSET UNITYSDK_OFFSET(0x19AC55F0)
#define EJMCJECLENI_SET_CANTINT_OFFSET UNITYSDK_OFFSET(0x19AC5070)
#define EJMCJECLENI_SET_CIRCLECOLOR_OFFSET UNITYSDK_OFFSET(0x19AC4920)
#define EJMCJECLENI_SET_HASH_OFFSET UNITYSDK_OFFSET(0x19AC4780)
#define EJMCJECLENI_SET_ICONCOLOR_OFFSET UNITYSDK_OFFSET(0x19AC5050)
#define EJMCJECLENI_SET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0x19AC49C0)
#define EJMCJECLENI_SET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x19AC4880)
#define EJMCJECLENI_SET_ISMISSION_OFFSET UNITYSDK_OFFSET(0x19AC4940)
#define EJMCJECLENI_SET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0x19AC49A0)
#define EJMCJECLENI_SET_ISTRACKINGCONNECTIVITY_OFFSET UNITYSDK_OFFSET(0x19AC51A0)
#define EJMCJECLENI_SET_ISTRACKINGMAPPINGINFO_OFFSET UNITYSDK_OFFSET(0x19AC4980)
#define EJMCJECLENI_SET_ISTRACKINGMISSION_OFFSET UNITYSDK_OFFSET(0x19AC4960)
#define EJMCJECLENI_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x19AC48A0)
#define EJMCJECLENI_SET_PROPTARGET_OFFSET UNITYSDK_OFFSET(0x19AC4740)
#define EJMCJECLENI_SET_RANGERADIUS_OFFSET UNITYSDK_OFFSET(0x19AC48C0)
#define EJMCJECLENI_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x19AC4760)
#define EJMCJECLENI_SET_WAYPOINTSHOWRANGEMAX_OFFSET UNITYSDK_OFFSET(0x19AC4900)
#define EJMCJECLENI_SET_WAYPOINTSHOWRANGEMIN_OFFSET UNITYSDK_OFFSET(0x19AC48E0)
#define EJMCJECLENI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19AC5840)

inline static constexpr unsigned int EJMCJECLENI_TypeDefinitionIndex = 62017;

	class EJMCJECLENI : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* _Target_k__BackingField; // 0x10
		::RPG::GameCore::PropComponent* _PropTarget_k__BackingField; // 0x18
		::System::Single _WayPointShowRangeMax_k__BackingField; // 0x20
		::RPG::Client::MiniMapIconType _IconType_k__BackingField; // 0x24
		::System::Boolean _IsStatic_k__BackingField; // 0x28
		::System::Boolean _IsTrackingConnectivity_k__BackingField; // 0x29
		::System::Boolean _IsTrackingMappingInfo_k__BackingField; // 0x2A
		::System::Boolean _IsTrackingMission_k__BackingField; // 0x2B
		::System::Boolean LKAIKOLJPDO; // 0x2C
		::System::Boolean _CanTint_k__BackingField; // 0x2D
		::System::Boolean _IsMission_k__BackingField; // 0x2E
		::System::Nullable_1<::System::Boolean> IECPJFBLBLB; // 0x2F
		::System::Int32 _Hash_k__BackingField; // 0x34
		::System::Single _WayPointShowRangeMin_k__BackingField; // 0x38
		::System::Int32 DEJLEBHFJGB; // 0x3C
		::System::Int32 _Priority_k__BackingField; // 0x40
		::System::Int32 _Identifier_k__BackingField; // 0x44
		::System::Single _RangeRadius_k__BackingField; // 0x48
		::UnityEngine::Color _IconColor_k__BackingField; // 0x4C
		::UnityEngine::Color _CircleColor_k__BackingField; // 0x5C
		::System::UInt32 DAPLELCMDMK; // 0x6C
		::System::Int32 BOJHGJFOGIM; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMCJECLENI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EJMCJECLENI_CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Int32 LPGJLLJAGDN(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + EJMCJECLENI_LPGJLLJAGDN_OFFSET))(a1, a2, a3);
		}

		::System::Void DLAILGNMFGI(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + EJMCJECLENI_DLAILGNMFGI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void IAAGIFNAGLP(::System::Boolean a1, ::System::Single a2, ::UnityEngine::Color a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::UnityEngine::Color, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EJMCJECLENI_IAAGIFNAGLP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void CEELKMGHHLJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EJMCJECLENI_CEELKMGHHLJ_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMCJECLENI_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::PropComponent* get_PropTarget()
		{
			return ((::RPG::GameCore::PropComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMCJECLENI_GET_PROPTARGET_OFFSET))(this);
		}

		::System::Void set_PropTarget(::RPG::GameCore::PropComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + EJMCJECLENI_SET_PROPTARGET_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_Target()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMCJECLENI_GET_TARGET_OFFSET))(this);
		}

		::System::Void set_Target(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EJMCJECLENI_SET_TARGET_OFFSET))(this, a1);
		}

		::System::Int32 get_Hash()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMCJECLENI_GET_HASH_OFFSET))(this);
		}

		::System::Void set_Hash(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EJMCJECLENI_SET_HASH_OFFSET))(this, a1);
		}

		::System::UInt32 get_IconID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMCJECLENI_GET_ICONID_OFFSET))(this);
		}

		::System::Int32 get_Identifier()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMCJECLENI_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::Void set_Identifier(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EJMCJECLENI_SET_IDENTIFIER_OFFSET))(this, a1);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMCJECLENI_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void set_Priority(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EJMCJECLENI_SET_PRIORITY_OFFSET))(this, a1);
		}

		::System::Single get_RangeRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMCJECLENI_GET_RANGERADIUS_OFFSET))(this);
		}

		::System::Void set_RangeRadius(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EJMCJECLENI_SET_RANGERADIUS_OFFSET))(this, a1);
		}

		::System::Single get_WayPointShowRangeMin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMCJECLENI_GET_WAYPOINTSHOWRANGEMIN_OFFSET))(this);
		}

		::System::Void set_WayPointShowRangeMin(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EJMCJECLENI_SET_WAYPOINTSHOWRANGEMIN_OFFSET))(this, a1);
		}

		::System::Single get_WayPointShowRangeMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMCJECLENI_GET_WAYPOINTSHOWRANGEMAX_OFFSET))(this);
		}

		::System::Void set_WayPointShowRangeMax(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EJMCJECLENI_SET_WAYPOINTSHOWRANGEMAX_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_CircleColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMCJECLENI_GET_CIRCLECOLOR_OFFSET))(this);
		}

		::System::Void set_CircleColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + EJMCJECLENI_SET_CIRCLECOLOR_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMCJECLENI_GET_ISMISSION_OFFSET))(this);
		}

		::System::Void set_IsMission(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EJMCJECLENI_SET_ISMISSION_OFFSET))(this, a1);
		}

		::System::Boolean get_IsTrackingMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMCJECLENI_GET_ISTRACKINGMISSION_OFFSET))(this);
		}

		::System::Void set_IsTrackingMission(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EJMCJECLENI_SET_ISTRACKINGMISSION_OFFSET))(this, a1);
		}

		::System::Boolean get_IsTrackingMappingInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMCJECLENI_GET_ISTRACKINGMAPPINGINFO_OFFSET))(this);
		}

		::System::Void set_IsTrackingMappingInfo(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EJMCJECLENI_SET_ISTRACKINGMAPPINGINFO_OFFSET))(this, a1);
		}

		::System::Boolean get_IsStatic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMCJECLENI_GET_ISSTATIC_OFFSET))(this);
		}

		::System::Void set_IsStatic(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EJMCJECLENI_SET_ISSTATIC_OFFSET))(this, a1);
		}

		::RPG::Client::MiniMapIconType get_IconType()
		{
			return ((::RPG::Client::MiniMapIconType(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMCJECLENI_GET_ICONTYPE_OFFSET))(this);
		}

		::System::Void set_IconType(::RPG::Client::MiniMapIconType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MiniMapIconType))((::PBYTE)hIl2Cpp + EJMCJECLENI_SET_ICONTYPE_OFFSET))(this, a1);
		}

		::System::Int32 JNCBEGFKCHF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMCJECLENI_JNCBEGFKCHF_OFFSET))(this);
		}

		::System::Boolean OIAKLGHBJBO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMCJECLENI_OIAKLGHBJBO_OFFSET))(this);
		}

		::System::Int32 get_AreaID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMCJECLENI_GET_AREAID_OFFSET))(this);
		}

		::System::Boolean FLDDPPHHDEJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMCJECLENI_FLDDPPHHDEJ_OFFSET))(this);
		}

		::UnityEngine::Color get_IconColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMCJECLENI_GET_ICONCOLOR_OFFSET))(this);
		}

		::System::Void set_IconColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + EJMCJECLENI_SET_ICONCOLOR_OFFSET))(this, a1);
		}

		::System::Boolean get_CanTint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMCJECLENI_GET_CANTINT_OFFSET))(this);
		}

		::System::Void set_CanTint(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EJMCJECLENI_SET_CANTINT_OFFSET))(this, a1);
		}

		::System::Boolean ELNPLONBPDG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMCJECLENI_ELNPLONBPDG_OFFSET))(this);
		}

		::System::Boolean get_IsTrackingConnectivity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMCJECLENI_GET_ISTRACKINGCONNECTIVITY_OFFSET))(this);
		}

		::System::Void set_IsTrackingConnectivity(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EJMCJECLENI_SET_ISTRACKINGCONNECTIVITY_OFFSET))(this, a1);
		}

		::System::Boolean EIEALGBCKCL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMCJECLENI_EIEALGBCKCL_OFFSET))(this);
		}

		::System::Single EPGNEMEKKCB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMCJECLENI_EPGNEMEKKCB_OFFSET))(this);
		}

		::UnityEngine::Vector3 LJJCDDOALNO()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMCJECLENI_LJJCDDOALNO_OFFSET))(this);
		}

		::UnityEngine::Color OHEOKPOKDFG()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMCJECLENI_OHEOKPOKDFG_OFFSET))(this);
		}

		::System::Single NODIHBKJDJE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMCJECLENI_NODIHBKJDJE_OFFSET))(this);
		}

		::UnityEngine::Vector3 LCKMECPJCHL()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMCJECLENI_LCKMECPJCHL_OFFSET))(this);
		}

		::UnityEngine::Vector2 PAOFPBGKLFH()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMCJECLENI_PAOFPBGKLFH_OFFSET))(this);
		}

		::System::Int32 KOBMNMJMDFG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMCJECLENI_KOBMNMJMDFG_OFFSET))(this);
		}

		::System::Boolean EKIFBFNOMIJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMCJECLENI_EKIFBFNOMIJ_OFFSET))(this);
		}

		::UnityEngine::Vector2 MFIIBKKHLGH()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMCJECLENI_MFIIBKKHLGH_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMCJECLENI_TOSTRING_OFFSET))(this);
		}

	};
