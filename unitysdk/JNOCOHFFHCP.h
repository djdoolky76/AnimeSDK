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

#define JNOCOHFFHCP_CTOR_OFFSET UNITYSDK_OFFSET(0x1B4CA450)
#define JNOCOHFFHCP_DJMOOLAIGEO_OFFSET UNITYSDK_OFFSET(0x1B4CA860)
#define JNOCOHFFHCP_EIEALGBCKCL_OFFSET UNITYSDK_OFFSET(0x1B4CB410)
#define JNOCOHFFHCP_EKIFBFNOMIJ_OFFSET UNITYSDK_OFFSET(0x1B4CBEC0)
#define JNOCOHFFHCP_EKMNONOLBPG_OFFSET UNITYSDK_OFFSET(0x1B4CA680)
#define JNOCOHFFHCP_ELNPLONBPDG_OFFSET UNITYSDK_OFFSET(0x1B4CB280)
#define JNOCOHFFHCP_EPGNEMEKKCB_OFFSET UNITYSDK_OFFSET(0x1B4CB480)
#define JNOCOHFFHCP_EPOIOPNHHKK_OFFSET UNITYSDK_OFFSET(0x1B4CBCE0)
#define JNOCOHFFHCP_FLDDPPHHDEJ_OFFSET UNITYSDK_OFFSET(0x1B4CAE70)
#define JNOCOHFFHCP_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x1B4CADE0)
#define JNOCOHFFHCP_GET_CANTINT_OFFSET UNITYSDK_OFFSET(0x1B4CA890)
#define JNOCOHFFHCP_GET_CIRCLECOLOR_OFFSET UNITYSDK_OFFSET(0x1B4CB150)
#define JNOCOHFFHCP_GET_HASH_OFFSET UNITYSDK_OFFSET(0x1B4CA870)
#define JNOCOHFFHCP_GET_ICONID_OFFSET UNITYSDK_OFFSET(0x1B4CB390)
#define JNOCOHFFHCP_GET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0x1B4CA8F0)
#define JNOCOHFFHCP_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1B4CA8B0)
#define JNOCOHFFHCP_GET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0x1B4CA8D0)
#define JNOCOHFFHCP_GET_MAPPINGINFOROW_OFFSET UNITYSDK_OFFSET(0x1B4CA910)
#define JNOCOHFFHCP_GET_RANGERADIUS_OFFSET UNITYSDK_OFFSET(0x1B4CB040)
#define JNOCOHFFHCP_GET_WAYPOINTSHOWRANGEMAX_OFFSET UNITYSDK_OFFSET(0x1B4CB140)
#define JNOCOHFFHCP_GET_WAYPOINTSHOWRANGEMIN_OFFSET UNITYSDK_OFFSET(0x1B4CB130)
#define JNOCOHFFHCP_IIDNGLDLPBM_OFFSET UNITYSDK_OFFSET(0x1B4CBCC0)
#define JNOCOHFFHCP_JNCBEGFKCHF_OFFSET UNITYSDK_OFFSET(0x1B4CA930)
#define JNOCOHFFHCP_KOBMNMJMDFG_OFFSET UNITYSDK_OFFSET(0x1B4CBE60)
#define JNOCOHFFHCP_LCKMECPJCHL_OFFSET UNITYSDK_OFFSET(0x1B4CBDC0)
#define JNOCOHFFHCP_LJJCDDOALNO_OFFSET UNITYSDK_OFFSET(0x1B4CB6A0)
#define JNOCOHFFHCP_LKPPHJMNHBI_OFFSET UNITYSDK_OFFSET(0x1B4CABE0)
#define JNOCOHFFHCP_LPGJLLJAGDN_OFFSET UNITYSDK_OFFSET(0x1B4CA6D0)
#define JNOCOHFFHCP_MFIIBKKHLGH_OFFSET UNITYSDK_OFFSET(0x1B4CBEE0)
#define JNOCOHFFHCP_MLIAMHLPPAB_OFFSET UNITYSDK_OFFSET(0x1B4CBCD0)
#define JNOCOHFFHCP_NEMOKALPJNG_OFFSET UNITYSDK_OFFSET(0x1B4CB6D0)
#define JNOCOHFFHCP_NODIHBKJDJE_OFFSET UNITYSDK_OFFSET(0x1B4CBCF0)
#define JNOCOHFFHCP_OGMCGAMOBHM_OFFSET UNITYSDK_OFFSET(0x1B4CB490)
#define JNOCOHFFHCP_OHEOKPOKDFG_OFFSET UNITYSDK_OFFSET(0x1B4CBBF0)
#define JNOCOHFFHCP_OIAKLGHBJBO_OFFSET UNITYSDK_OFFSET(0x1B4CAD70)
#define JNOCOHFFHCP_PAOFPBGKLFH_OFFSET UNITYSDK_OFFSET(0x1B4CBED0)
#define JNOCOHFFHCP_SET_CANTINT_OFFSET UNITYSDK_OFFSET(0x1B4CA8A0)
#define JNOCOHFFHCP_SET_HASH_OFFSET UNITYSDK_OFFSET(0x1B4CA880)
#define JNOCOHFFHCP_SET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0x1B4CA900)
#define JNOCOHFFHCP_SET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1B4CA8C0)
#define JNOCOHFFHCP_SET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0x1B4CA8E0)
#define JNOCOHFFHCP_SET_MAPPINGINFOROW_OFFSET UNITYSDK_OFFSET(0x1B4CA920)
#define JNOCOHFFHCP_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B4CA7E0)
#define JNOCOHFFHCP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B4CC540)

inline static constexpr unsigned int JNOCOHFFHCP_TypeDefinitionIndex = 62019;

	class JNOCOHFFHCP : public ::System::Object
	{
	public:
		::System::String* JAEBDHJBMGB; // 0x10
		::RPG::GameCore::AnchorInfo* LMGGEJEDEMD; // 0x18
		::RPG::GameCore::PropComponent* OJAHLJGABMJ; // 0x20
		::System::String* INDBLOOGJCL; // 0x28
		::RPG::GameCore::MappingInfoRow* _MappingInfoRow_k__BackingField; // 0x30
		::UnityEngine::Transform* PDJGEDNLBKJ; // 0x38
		::System::Int32 _Identifier_k__BackingField; // 0x40
		::System::Int32 _Hash_k__BackingField; // 0x44
		::System::Int32 DEJLEBHFJGB; // 0x48
		::RPG::Client::MiniMapIconType _IconType_k__BackingField; // 0x4C
		::System::Boolean _CanTint_k__BackingField; // 0x50
		::System::Boolean _IsStatic_k__BackingField; // 0x51
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
