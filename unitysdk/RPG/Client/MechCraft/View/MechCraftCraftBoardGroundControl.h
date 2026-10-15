#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftRotationType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/ONPKMMDCDAN.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftCraftBoardGroundControl___c__DisplayClass30_0.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class BIKFPBGFCHP;
class CHGHIALKMFM;
namespace RPG::Client::MechCraft::View { class MechCraftCraftBoardGroundControlBinder; }
namespace RPG::Client::MechCraft::View { class MechCraftCraftBoardTileControl; }
namespace System { class Nullable; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Immutable { template <typename T> class IImmutableSet_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_BLBDPOPCACB_OFFSET UNITYSDK_OFFSET(0xD5FE270)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_BOAMJLKDPFN_OFFSET UNITYSDK_OFFSET(0xD5FD6A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_CFDJJPCIEIA_1_OFFSET UNITYSDK_OFFSET(0xD5FF4B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_CFDJJPCIEIA_OFFSET UNITYSDK_OFFSET(0xD5FBB70)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_CNJPNHDLBGF_OFFSET UNITYSDK_OFFSET(0xD5FF600)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD600620)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_DJJICBBLIAA_OFFSET UNITYSDK_OFFSET(0xD5FF8C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_EEDICHFDFCH_OFFSET UNITYSDK_OFFSET(0xD5FA880)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_EODDOCLHEIL_OFFSET UNITYSDK_OFFSET(0xD5FBD30)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_FBLENAMGIAL_OFFSET UNITYSDK_OFFSET(0xD5FF9D0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_FCKHADPADFO_OFFSET UNITYSDK_OFFSET(0xD5FC250)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_FORCECLOSECELLVFX_OFFSET UNITYSDK_OFFSET(0xD5F8330)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_GETCELLANCHOR_OFFSET UNITYSDK_OFFSET(0xD5F9F40)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_GETCELLATPIVOT_OFFSET UNITYSDK_OFFSET(0xD5FA260)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_GET_CELLSIZE_OFFSET UNITYSDK_OFFSET(0xD5F9D80)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD5F8C90)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_GET_NODEDROPPABLE_OFFSET UNITYSDK_OFFSET(0xD5F9BF0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_GGJJBONKHDF_OFFSET UNITYSDK_OFFSET(0xD5FC860)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_GMMNOOEBFGP_OFFSET UNITYSDK_OFFSET(0xD5FEAB0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_HADCLBCIEJL_OFFSET UNITYSDK_OFFSET(0xD5FA7E0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_IMHHCCOHPNM_OFFSET UNITYSDK_OFFSET(0xD5FB650)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_IOHJBCJCMJB_OFFSET UNITYSDK_OFFSET(0xD5FF300)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_JFAKEMMEMHJ_OFFSET UNITYSDK_OFFSET(0xD5F9460)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xD5FABD0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_KDOJBBPNGDO_OFFSET UNITYSDK_OFFSET(0xD5FDCD0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_LGNNIOPFEHH_OFFSET UNITYSDK_OFFSET(0xD5FD800)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_MOIOMPLMGPF_OFFSET UNITYSDK_OFFSET(0xD5F8CD0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_NKBJPEGAGAF_OFFSET UNITYSDK_OFFSET(0xD5FF6A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_OKEDAMILDNN_OFFSET UNITYSDK_OFFSET(0xD5FA150)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD5F8B00)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL___REFRESHCELLSTATEOFBUFF_G__ISBUFFED_30_0_OFFSET UNITYSDK_OFFSET(0xD5FFE90)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftBoardGroundControl_TypeDefinitionIndex = 79844;

	class MechCraftCraftBoardGroundControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::BIKFPBGFCHP* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftCraftBoardGroundControlBinder* _Binder; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_CTOR_OFFSET))(this);
		}

		::BIKFPBGFCHP* get_Content()
		{
			return ((::BIKFPBGFCHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::BIKFPBGFCHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIKFPBGFCHP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::UnityEngine::RectTransform* get_NodeDroppable()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_GET_NODEDROPPABLE_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_CellSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_GET_CELLSIZE_OFFSET))(this);
		}

		::UnityEngine::RectTransform* GetCellAnchor(::UnityEngine::Vector2Int a1)
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_GETCELLANCHOR_OFFSET))(this, a1);
		}

		::System::Nullable* GetCellAtPivot(::CHGHIALKMFM* a1, ::RPG::Client::MechCraft::MechCraftRotationType a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4)
		{
			return ((::System::Nullable*(*)(::PVOID, ::CHGHIALKMFM*, ::RPG::Client::MechCraft::MechCraftRotationType, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_GETCELLATPIVOT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ForceCloseCellVfx()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_FORCECLOSECELLVFX_OFFSET))(this);
		}

		::System::Void JFAKEMMEMHJ(::BIKFPBGFCHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIKFPBGFCHP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_JFAKEMMEMHJ_OFFSET))(this, a1);
		}

		::System::Void MOIOMPLMGPF(::BIKFPBGFCHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIKFPBGFCHP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_MOIOMPLMGPF_OFFSET))(this, a1);
		}

		::System::Void IMHHCCOHPNM(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* a1, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_IMHHCCOHPNM_OFFSET))(this, a1, a2);
		}

		::System::Void EODDOCLHEIL(::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* a1, ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*, ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_EODDOCLHEIL_OFFSET))(this, a1, a2);
		}

		::System::Void FCKHADPADFO(::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>* a1, ::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>*, ::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_FCKHADPADFO_OFFSET))(this, a1, a2);
		}

		::System::Void GGJJBONKHDF(::System::Collections::Immutable::IImmutableSet_1<::ONPKMMDCDAN>* a1, ::System::Collections::Immutable::IImmutableSet_1<::ONPKMMDCDAN>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Immutable::IImmutableSet_1<::ONPKMMDCDAN>*, ::System::Collections::Immutable::IImmutableSet_1<::ONPKMMDCDAN>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_GGJJBONKHDF_OFFSET))(this, a1, a2);
		}

		::System::Void BOAMJLKDPFN(::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>* a1, ::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>*, ::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_BOAMJLKDPFN_OFFSET))(this, a1, a2);
		}

		::System::Void KDOJBBPNGDO(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_KDOJBBPNGDO_OFFSET))(this, a1);
		}

		::System::Void BLBDPOPCACB(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* a1, ::System::Nullable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*, ::System::Nullable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_BLBDPOPCACB_OFFSET))(this, a1, a2);
		}

		::System::Void GMMNOOEBFGP(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_GMMNOOEBFGP_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ(::BIKFPBGFCHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIKFPBGFCHP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

		::System::Void LGNNIOPFEHH(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_LGNNIOPFEHH_OFFSET))(this, a1, a2);
		}

		::System::Void IOHJBCJCMJB(::UnityEngine::Vector2Int a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_IOHJBCJCMJB_OFFSET))(this, a1, a2);
		}

		::System::Void CFDJJPCIEIA(::BIKFPBGFCHP* a1, ::UnityEngine::Vector2Int a2)
		{
			return ((::System::Void(*)(::PVOID, ::BIKFPBGFCHP*, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_CFDJJPCIEIA_OFFSET))(this, a1, a2);
		}

		::System::Void CFDJJPCIEIA_1(::BIKFPBGFCHP* a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Vector2Int a3)
		{
			return ((::System::Void(*)(::PVOID, ::BIKFPBGFCHP*, ::UnityEngine::GameObject*, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_CFDJJPCIEIA_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CNJPNHDLBGF(::BIKFPBGFCHP* a1, ::UnityEngine::Vector2Int a2, ::RPG::Client::MechCraft::View::MechCraftCraftBoardTileControl* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BIKFPBGFCHP*, ::UnityEngine::Vector2Int, ::RPG::Client::MechCraft::View::MechCraftCraftBoardTileControl*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_CNJPNHDLBGF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NKBJPEGAGAF(::BIKFPBGFCHP* a1, ::UnityEngine::Vector2Int a2, ::RPG::Client::MechCraft::View::MechCraftCraftBoardTileControl* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BIKFPBGFCHP*, ::UnityEngine::Vector2Int, ::RPG::Client::MechCraft::View::MechCraftCraftBoardTileControl*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_NKBJPEGAGAF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DJJICBBLIAA(::BIKFPBGFCHP* a1, ::UnityEngine::Vector2Int a2, ::RPG::Client::MechCraft::View::MechCraftCraftBoardTileControl* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BIKFPBGFCHP*, ::UnityEngine::Vector2Int, ::RPG::Client::MechCraft::View::MechCraftCraftBoardTileControl*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_DJJICBBLIAA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FBLENAMGIAL(::BIKFPBGFCHP* a1, ::UnityEngine::Vector2Int a2, ::RPG::Client::MechCraft::View::MechCraftCraftBoardTileControl* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BIKFPBGFCHP*, ::UnityEngine::Vector2Int, ::RPG::Client::MechCraft::View::MechCraftCraftBoardTileControl*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_FBLENAMGIAL_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* HADCLBCIEJL(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_HADCLBCIEJL_OFFSET))(this, a1, a2);
		}

		::System::Int32 OKEDAMILDNN(::UnityEngine::Vector2Int a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2Int, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_OKEDAMILDNN_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MechCraft::View::MechCraftCraftBoardTileControl* EEDICHFDFCH(::UnityEngine::Vector2Int a1)
		{
			return ((::RPG::Client::MechCraft::View::MechCraftCraftBoardTileControl*(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL_EEDICHFDFCH_OFFSET))(this, a1);
		}

		static ::System::Boolean __RefreshCellStateOfBuff_g__IsBuffed_30_0(::RPG::Client::MechCraft::View::MechCraftCraftBoardGroundControl___c__DisplayClass30_0 a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::MechCraft::View::MechCraftCraftBoardGroundControl___c__DisplayClass30_0))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTBOARDGROUNDCONTROL___REFRESHCELLSTATEOFBUFF_G__ISBUFFED_30_0_OFFSET))(a1);
		}

	};
}
