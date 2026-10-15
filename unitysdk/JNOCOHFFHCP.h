#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MiniMapIconType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class MappingInfoRow; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define JNOCOHFFHCP_CTOR_OFFSET UNITYSDK_OFFSET(0xB288CB0)
#define JNOCOHFFHCP_DJMOOLAIGEO_OFFSET UNITYSDK_OFFSET(0xB2890C0)
#define JNOCOHFFHCP_EIEALGBCKCL_OFFSET UNITYSDK_OFFSET(0xB289C70)
#define JNOCOHFFHCP_EKIFBFNOMIJ_OFFSET UNITYSDK_OFFSET(0xB28A730)
#define JNOCOHFFHCP_EKMNONOLBPG_OFFSET UNITYSDK_OFFSET(0xB288EE0)
#define JNOCOHFFHCP_ELNPLONBPDG_OFFSET UNITYSDK_OFFSET(0xB289AE0)
#define JNOCOHFFHCP_EPGNEMEKKCB_OFFSET UNITYSDK_OFFSET(0xB289CE0)
#define JNOCOHFFHCP_EPOIOPNHHKK_OFFSET UNITYSDK_OFFSET(0xB28A540)
#define JNOCOHFFHCP_FLDDPPHHDEJ_OFFSET UNITYSDK_OFFSET(0xB2896D0)
#define JNOCOHFFHCP_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xB289640)
#define JNOCOHFFHCP_GET_CANTINT_OFFSET UNITYSDK_OFFSET(0xB2890F0)
#define JNOCOHFFHCP_GET_CIRCLECOLOR_OFFSET UNITYSDK_OFFSET(0xB2899B0)
#define JNOCOHFFHCP_GET_HASH_OFFSET UNITYSDK_OFFSET(0xB2890D0)
#define JNOCOHFFHCP_GET_ICONID_OFFSET UNITYSDK_OFFSET(0xB289BF0)
#define JNOCOHFFHCP_GET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0xB289150)
#define JNOCOHFFHCP_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xB289110)
#define JNOCOHFFHCP_GET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0xB289130)
#define JNOCOHFFHCP_GET_MAPPINGINFOROW_OFFSET UNITYSDK_OFFSET(0xB289170)
#define JNOCOHFFHCP_GET_RANGERADIUS_OFFSET UNITYSDK_OFFSET(0xB2898A0)
#define JNOCOHFFHCP_GET_WAYPOINTSHOWRANGEMAX_OFFSET UNITYSDK_OFFSET(0xB2899A0)
#define JNOCOHFFHCP_GET_WAYPOINTSHOWRANGEMIN_OFFSET UNITYSDK_OFFSET(0xB289990)
#define JNOCOHFFHCP_IIDNGLDLPBM_OFFSET UNITYSDK_OFFSET(0xB28A520)
#define JNOCOHFFHCP_JNCBEGFKCHF_OFFSET UNITYSDK_OFFSET(0xB289190)
#define JNOCOHFFHCP_KOBMNMJMDFG_OFFSET UNITYSDK_OFFSET(0xB28A6C0)
#define JNOCOHFFHCP_LCKMECPJCHL_OFFSET UNITYSDK_OFFSET(0xB28A620)
#define JNOCOHFFHCP_LJJCDDOALNO_OFFSET UNITYSDK_OFFSET(0xB289F00)
#define JNOCOHFFHCP_LKPPHJMNHBI_OFFSET UNITYSDK_OFFSET(0xB289440)
#define JNOCOHFFHCP_LPGJLLJAGDN_OFFSET UNITYSDK_OFFSET(0xB288F30)
#define JNOCOHFFHCP_MFIIBKKHLGH_OFFSET UNITYSDK_OFFSET(0xB28A750)
#define JNOCOHFFHCP_MLIAMHLPPAB_OFFSET UNITYSDK_OFFSET(0xB28A530)
#define JNOCOHFFHCP_NEMOKALPJNG_OFFSET UNITYSDK_OFFSET(0xB289F30)
#define JNOCOHFFHCP_NODIHBKJDJE_OFFSET UNITYSDK_OFFSET(0xB28A550)
#define JNOCOHFFHCP_OGMCGAMOBHM_OFFSET UNITYSDK_OFFSET(0xB289CF0)
#define JNOCOHFFHCP_OHEOKPOKDFG_OFFSET UNITYSDK_OFFSET(0xB28A450)
#define JNOCOHFFHCP_OIAKLGHBJBO_OFFSET UNITYSDK_OFFSET(0xB2895D0)
#define JNOCOHFFHCP_PAOFPBGKLFH_OFFSET UNITYSDK_OFFSET(0xB28A740)
#define JNOCOHFFHCP_SET_CANTINT_OFFSET UNITYSDK_OFFSET(0xB289100)
#define JNOCOHFFHCP_SET_HASH_OFFSET UNITYSDK_OFFSET(0xB2890E0)
#define JNOCOHFFHCP_SET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0xB289160)
#define JNOCOHFFHCP_SET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xB289120)
#define JNOCOHFFHCP_SET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0xB289140)
#define JNOCOHFFHCP_SET_MAPPINGINFOROW_OFFSET UNITYSDK_OFFSET(0xB289180)
#define JNOCOHFFHCP_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB289040)
#define JNOCOHFFHCP_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB28ADB0)

inline static constexpr unsigned int JNOCOHFFHCP_TypeDefinitionIndex = 60642;

	class JNOCOHFFHCP : public ::System::Object
	{
	public:
		::System::String* JAEBDHJBMGB; // 0x10
		::RPG::GameCore::AnchorInfo* LMGGEJEDEMD; // 0x18
		::System::String* INDBLOOGJCL; // 0x20
		::RPG::GameCore::PropComponent* OJAHLJGABMJ; // 0x28
		::RPG::GameCore::MappingInfoRow* _MappingInfoRow_k__BackingField; // 0x30
		::UnityEngine::Transform* PDJGEDNLBKJ; // 0x38
		::System::Int32 DEJLEBHFJGB; // 0x40
		::RPG::Client::MiniMapIconType _IconType_k__BackingField; // 0x44
		::System::Boolean _IsStatic_k__BackingField; // 0x48
		::System::Boolean _CanTint_k__BackingField; // 0x49
		::System::Byte _padding0[0x2];
		::System::Int32 _Identifier_k__BackingField; // 0x4C
		::System::Int32 _Hash_k__BackingField; // 0x50
		::System::Void _ctor(::RPG::GameCore::PropComponent* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + JNOCOHFFHCP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOCOHFFHCP_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		static ::System::Int32 LPGJLLJAGDN(::RPG::GameCore::PropComponent* a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + JNOCOHFFHCP_LPGJLLJAGDN_OFFSET))(a1);
		}

		::RPG::GameCore::PropComponent* DJMOOLAIGEO()
		{
			return ((::RPG::GameCore::PropComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOCOHFFHCP_DJMOOLAIGEO_OFFSET))(this);
		}

		::System::Void EKMNONOLBPG(::RPG::GameCore::PropComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + JNOCOHFFHCP_EKMNONOLBPG_OFFSET))(this, a1);
		}

		::System::Int32 get_Hash()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOCOHFFHCP_GET_HASH_OFFSET))(this);
		}

		::System::Void set_Hash(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JNOCOHFFHCP_SET_HASH_OFFSET))(this, a1);
		}

		::System::Boolean get_CanTint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOCOHFFHCP_GET_CANTINT_OFFSET))(this);
		}

		::System::Void set_CanTint(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JNOCOHFFHCP_SET_CANTINT_OFFSET))(this, a1);
		}

		::System::Int32 get_Identifier()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOCOHFFHCP_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::Void set_Identifier(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JNOCOHFFHCP_SET_IDENTIFIER_OFFSET))(this, a1);
		}

		::System::Boolean get_IsStatic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOCOHFFHCP_GET_ISSTATIC_OFFSET))(this);
		}

		::System::Void set_IsStatic(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JNOCOHFFHCP_SET_ISSTATIC_OFFSET))(this, a1);
		}

		::RPG::Client::MiniMapIconType get_IconType()
		{
			return ((::RPG::Client::MiniMapIconType(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOCOHFFHCP_GET_ICONTYPE_OFFSET))(this);
		}

		::System::Void set_IconType(::RPG::Client::MiniMapIconType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MiniMapIconType))((::PBYTE)hIl2Cpp + JNOCOHFFHCP_SET_ICONTYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::MappingInfoRow* get_MappingInfoRow()
		{
			return ((::RPG::GameCore::MappingInfoRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOCOHFFHCP_GET_MAPPINGINFOROW_OFFSET))(this);
		}

		::System::Void set_MappingInfoRow(::RPG::GameCore::MappingInfoRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MappingInfoRow*))((::PBYTE)hIl2Cpp + JNOCOHFFHCP_SET_MAPPINGINFOROW_OFFSET))(this, a1);
		}

		::System::Int32 JNCBEGFKCHF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOCOHFFHCP_JNCBEGFKCHF_OFFSET))(this);
		}

		::System::Boolean OIAKLGHBJBO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOCOHFFHCP_OIAKLGHBJBO_OFFSET))(this);
		}

		::System::Int32 get_AreaID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOCOHFFHCP_GET_AREAID_OFFSET))(this);
		}

		::System::Boolean FLDDPPHHDEJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOCOHFFHCP_FLDDPPHHDEJ_OFFSET))(this);
		}

		::System::Single get_RangeRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOCOHFFHCP_GET_RANGERADIUS_OFFSET))(this);
		}

		::System::Single get_WayPointShowRangeMin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOCOHFFHCP_GET_WAYPOINTSHOWRANGEMIN_OFFSET))(this);
		}

		::System::Single get_WayPointShowRangeMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOCOHFFHCP_GET_WAYPOINTSHOWRANGEMAX_OFFSET))(this);
		}

		::UnityEngine::Color get_CircleColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOCOHFFHCP_GET_CIRCLECOLOR_OFFSET))(this);
		}

		::System::Boolean ELNPLONBPDG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOCOHFFHCP_ELNPLONBPDG_OFFSET))(this);
		}

		::System::UInt32 get_IconID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOCOHFFHCP_GET_ICONID_OFFSET))(this);
		}

		::System::Boolean EIEALGBCKCL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOCOHFFHCP_EIEALGBCKCL_OFFSET))(this);
		}

		::System::Single EPGNEMEKKCB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOCOHFFHCP_EPGNEMEKKCB_OFFSET))(this);
		}

		::UnityEngine::Vector3 LJJCDDOALNO()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOCOHFFHCP_LJJCDDOALNO_OFFSET))(this);
		}

		::UnityEngine::Color OHEOKPOKDFG()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOCOHFFHCP_OHEOKPOKDFG_OFFSET))(this);
		}

		::System::Int32 IIDNGLDLPBM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOCOHFFHCP_IIDNGLDLPBM_OFFSET))(this);
		}

		::System::Boolean MLIAMHLPPAB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOCOHFFHCP_MLIAMHLPPAB_OFFSET))(this);
		}

		::System::Boolean EPOIOPNHHKK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOCOHFFHCP_EPOIOPNHHKK_OFFSET))(this);
		}

		::System::Single NODIHBKJDJE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOCOHFFHCP_NODIHBKJDJE_OFFSET))(this);
		}

		::UnityEngine::Vector3 LCKMECPJCHL()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOCOHFFHCP_LCKMECPJCHL_OFFSET))(this);
		}

		::System::Int32 KOBMNMJMDFG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOCOHFFHCP_KOBMNMJMDFG_OFFSET))(this);
		}

		::System::Boolean EKIFBFNOMIJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOCOHFFHCP_EKIFBFNOMIJ_OFFSET))(this);
		}

		::UnityEngine::Vector2 PAOFPBGKLFH()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOCOHFFHCP_PAOFPBGKLFH_OFFSET))(this);
		}

		::UnityEngine::Vector3 NEMOKALPJNG()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOCOHFFHCP_NEMOKALPJNG_OFFSET))(this);
		}

		::System::Single OGMCGAMOBHM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOCOHFFHCP_OGMCGAMOBHM_OFFSET))(this);
		}

		::UnityEngine::Vector2 MFIIBKKHLGH()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOCOHFFHCP_MFIIBKKHLGH_OFFSET))(this);
		}

		::RPG::GameCore::AnchorInfo* LKPPHJMNHBI(::System::String* a1)
		{
			return ((::RPG::GameCore::AnchorInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JNOCOHFFHCP_LKPPHJMNHBI_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOCOHFFHCP_TOSTRING_OFFSET))(this);
		}

	};
