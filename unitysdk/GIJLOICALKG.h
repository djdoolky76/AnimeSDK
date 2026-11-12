#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ONPKMMDCDAN.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class IAJGGEMFOMB;
namespace System { class IDisposable; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Immutable { template <typename T> class IImmutableSet_1; }

#define GIJLOICALKG_ADD_HANDLEFORCEHINTBUFFAFFECTED_OFFSET UNITYSDK_OFFSET(0x1697AF40)
#define GIJLOICALKG_ADD_ONBUFFAFFECTEDCELLSMAYBECHANGED_OFFSET UNITYSDK_OFFSET(0x1697AE40)
#define GIJLOICALKG_ADD_ONBUFFAFFECTINGCELLSMAYBECHANGED_OFFSET UNITYSDK_OFFSET(0x1697A8B0)
#define GIJLOICALKG_ADD_ONBUFFEDLINESMAYBECHANGED_OFFSET UNITYSDK_OFFSET(0x1697A9B0)
#define GIJLOICALKG_AFLEEBFEPEF_OFFSET UNITYSDK_OFFSET(0x169799D0)
#define GIJLOICALKG_AHMDDADMKKP_OFFSET UNITYSDK_OFFSET(0x1697A2E0)
#define GIJLOICALKG_CPKGKOCGHCA_OFFSET UNITYSDK_OFFSET(0x1697AAB0)
#define GIJLOICALKG_CTOR_OFFSET UNITYSDK_OFFSET(0x1697B240)
#define GIJLOICALKG_DABIFANLIFC_OFFSET UNITYSDK_OFFSET(0x1697A230)
#define GIJLOICALKG_DLGBCHNHKKJ_OFFSET UNITYSDK_OFFSET(0x1697A1E0)
#define GIJLOICALKG_DOJOLHFBGEL_OFFSET UNITYSDK_OFFSET(0x1697B040)
#define GIJLOICALKG_FPIAFOALBJJ_OFFSET UNITYSDK_OFFSET(0x16979FA0)
#define GIJLOICALKG_KDNAMIEOPFG_OFFSET UNITYSDK_OFFSET(0x1697A670)
#define GIJLOICALKG_NPHNOLKLBCN_OFFSET UNITYSDK_OFFSET(0x16979E20)
#define GIJLOICALKG_OAKLFFECHEB_OFFSET UNITYSDK_OFFSET(0x16979960)
#define GIJLOICALKG_OFLIBLPPIEH_OFFSET UNITYSDK_OFFSET(0x1697A280)
#define GIJLOICALKG_PODKIPNNFHD_OFFSET UNITYSDK_OFFSET(0x1697ACB0)
#define GIJLOICALKG_REMOVE_HANDLEFORCEHINTBUFFAFFECTED_OFFSET UNITYSDK_OFFSET(0x1697AFC0)
#define GIJLOICALKG_REMOVE_ONBUFFAFFECTEDCELLSMAYBECHANGED_OFFSET UNITYSDK_OFFSET(0x1697AEC0)
#define GIJLOICALKG_REMOVE_ONBUFFAFFECTINGCELLSMAYBECHANGED_OFFSET UNITYSDK_OFFSET(0x1697A930)
#define GIJLOICALKG_REMOVE_ONBUFFEDLINESMAYBECHANGED_OFFSET UNITYSDK_OFFSET(0x1697AA30)
#define GIJLOICALKG___SUBSCRIBEPIECEBUFFED_B__25_0_OFFSET UNITYSDK_OFFSET(0x1697B4C0)
#define GIJLOICALKG___TRYSUBSCRIBEPIECEBUFFING_B__12_0_OFFSET UNITYSDK_OFFSET(0x1697B4A0)
#define GIJLOICALKG___TRYSUBSCRIBEPIECEBUFFING_B__12_1_OFFSET UNITYSDK_OFFSET(0x1697B4B0)

inline static constexpr unsigned int GIJLOICALKG_TypeDefinitionIndex = 82229;

	class GIJLOICALKG : public ::System::Object
	{
	public:
		::System::Action_1<::System::Collections::Immutable::IImmutableSet_1<::ONPKMMDCDAN>*>* OnBuffedLinesMaybeChanged; // 0x10
		::System::Collections::Generic::Dictionary_2<::IAJGGEMFOMB*, ::System::IDisposable*>* DPLONCBOBBI; // 0x18
		::System::Collections::Generic::Dictionary_2<::IAJGGEMFOMB*, ::System::IDisposable*>* AIGAKKDNIBD; // 0x20
		::System::Collections::Generic::HashSet_1<::IAJGGEMFOMB*>* APMOGNLKICD; // 0x28
		::System::Action_1<::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*>* OnBuffAffectedCellsMaybeChanged; // 0x30
		::System::Action_1<::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*>* OnBuffAffectingCellsMaybeChanged; // 0x38
		::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* MKHKBFHPEOO; // 0x40
		::System::Collections::Generic::HashSet_1<::IAJGGEMFOMB*>* BCPHCKGKDEB; // 0x48
		::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>* HandleForceHintBuffAffected; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIJLOICALKG_CTOR_OFFSET))(this);
		}

		::System::Void OAKLFFECHEB(::IAJGGEMFOMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAJGGEMFOMB*))((::PBYTE)hIl2Cpp + GIJLOICALKG_OAKLFFECHEB_OFFSET))(this, a1);
		}

		::System::Void DLGBCHNHKKJ(::IAJGGEMFOMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAJGGEMFOMB*))((::PBYTE)hIl2Cpp + GIJLOICALKG_DLGBCHNHKKJ_OFFSET))(this, a1);
		}

		::System::Void DABIFANLIFC(::IAJGGEMFOMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAJGGEMFOMB*))((::PBYTE)hIl2Cpp + GIJLOICALKG_DABIFANLIFC_OFFSET))(this, a1);
		}

		::System::Void OFLIBLPPIEH(::IAJGGEMFOMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAJGGEMFOMB*))((::PBYTE)hIl2Cpp + GIJLOICALKG_OFLIBLPPIEH_OFFSET))(this, a1);
		}

		::System::Void add_OnBuffAffectingCellsMaybeChanged(::System::Action_1<::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*>*))((::PBYTE)hIl2Cpp + GIJLOICALKG_ADD_ONBUFFAFFECTINGCELLSMAYBECHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnBuffAffectingCellsMaybeChanged(::System::Action_1<::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*>*))((::PBYTE)hIl2Cpp + GIJLOICALKG_REMOVE_ONBUFFAFFECTINGCELLSMAYBECHANGED_OFFSET))(this, a1);
		}

		::System::Void add_OnBuffedLinesMaybeChanged(::System::Action_1<::System::Collections::Immutable::IImmutableSet_1<::ONPKMMDCDAN>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Immutable::IImmutableSet_1<::ONPKMMDCDAN>*>*))((::PBYTE)hIl2Cpp + GIJLOICALKG_ADD_ONBUFFEDLINESMAYBECHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnBuffedLinesMaybeChanged(::System::Action_1<::System::Collections::Immutable::IImmutableSet_1<::ONPKMMDCDAN>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Immutable::IImmutableSet_1<::ONPKMMDCDAN>*>*))((::PBYTE)hIl2Cpp + GIJLOICALKG_REMOVE_ONBUFFEDLINESMAYBECHANGED_OFFSET))(this, a1);
		}

		::System::Void AFLEEBFEPEF(::IAJGGEMFOMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAJGGEMFOMB*))((::PBYTE)hIl2Cpp + GIJLOICALKG_AFLEEBFEPEF_OFFSET))(this, a1);
		}

		::System::Void AHMDDADMKKP(::IAJGGEMFOMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAJGGEMFOMB*))((::PBYTE)hIl2Cpp + GIJLOICALKG_AHMDDADMKKP_OFFSET))(this, a1);
		}

		::System::Void CPKGKOCGHCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIJLOICALKG_CPKGKOCGHCA_OFFSET))(this);
		}

		::System::Void PODKIPNNFHD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIJLOICALKG_PODKIPNNFHD_OFFSET))(this);
		}

		::System::Void add_OnBuffAffectedCellsMaybeChanged(::System::Action_1<::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*>*))((::PBYTE)hIl2Cpp + GIJLOICALKG_ADD_ONBUFFAFFECTEDCELLSMAYBECHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnBuffAffectedCellsMaybeChanged(::System::Action_1<::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*>*))((::PBYTE)hIl2Cpp + GIJLOICALKG_REMOVE_ONBUFFAFFECTEDCELLSMAYBECHANGED_OFFSET))(this, a1);
		}

		::System::Void add_HandleForceHintBuffAffected(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>*))((::PBYTE)hIl2Cpp + GIJLOICALKG_ADD_HANDLEFORCEHINTBUFFAFFECTED_OFFSET))(this, a1);
		}

		::System::Void remove_HandleForceHintBuffAffected(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*>*))((::PBYTE)hIl2Cpp + GIJLOICALKG_REMOVE_HANDLEFORCEHINTBUFFAFFECTED_OFFSET))(this, a1);
		}

		::System::Void NPHNOLKLBCN(::IAJGGEMFOMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAJGGEMFOMB*))((::PBYTE)hIl2Cpp + GIJLOICALKG_NPHNOLKLBCN_OFFSET))(this, a1);
		}

		::System::Void KDNAMIEOPFG(::IAJGGEMFOMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAJGGEMFOMB*))((::PBYTE)hIl2Cpp + GIJLOICALKG_KDNAMIEOPFG_OFFSET))(this, a1);
		}

		::System::Void DOJOLHFBGEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIJLOICALKG_DOJOLHFBGEL_OFFSET))(this);
		}

		::System::Void FPIAFOALBJJ(::IAJGGEMFOMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAJGGEMFOMB*))((::PBYTE)hIl2Cpp + GIJLOICALKG_FPIAFOALBJJ_OFFSET))(this, a1);
		}

		::System::Void __TrySubscribePieceBuffing_b__12_0(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + GIJLOICALKG___TRYSUBSCRIBEPIECEBUFFING_B__12_0_OFFSET))(this, a1);
		}

		::System::Void __TrySubscribePieceBuffing_b__12_1(::System::Collections::Immutable::IImmutableSet_1<::ONPKMMDCDAN>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Immutable::IImmutableSet_1<::ONPKMMDCDAN>*))((::PBYTE)hIl2Cpp + GIJLOICALKG___TRYSUBSCRIBEPIECEBUFFING_B__12_1_OFFSET))(this, a1);
		}

		::System::Void __SubscribePieceBuffed_b__25_0(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + GIJLOICALKG___SUBSCRIBEPIECEBUFFED_B__25_0_OFFSET))(this, a1);
		}

	};
