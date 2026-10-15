#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftRotationType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PLHLAIJKMOD.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class CHGHIALKMFM;
class MAAKEBJAIOG;
class NKIJFPHFJCO;
class NLOGOPPGNMD;
class OECNOHOLGPP;
class OFIILELJGIE;
class PAHNGJAHJKI;
class PLHOHFBLKJO;
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CCEIJBFAOAI_ADD_ONMANYPIECESDESTROYED_OFFSET UNITYSDK_OFFSET(0x1C518B90)
#define CCEIJBFAOAI_ADD_ONPIECEINSTANTIATED_OFFSET UNITYSDK_OFFSET(0x1C5187D0)
#define CCEIJBFAOAI_ADD_ONPIECEMOVED_OFFSET UNITYSDK_OFFSET(0x1C5188D0)
#define CCEIJBFAOAI_ADD_ONPIECEROTATED_OFFSET UNITYSDK_OFFSET(0x1C5189D0)
#define CCEIJBFAOAI_ADD_ONSINGLEPIECEDESTROYED_OFFSET UNITYSDK_OFFSET(0x1C518AD0)
#define CCEIJBFAOAI_ADJKILMCMIJ_OFFSET UNITYSDK_OFFSET(0x1C51A540)
#define CCEIJBFAOAI_AJCLBKIAEHF_OFFSET UNITYSDK_OFFSET(0x1C518700)
#define CCEIJBFAOAI_BINAMFBIDLB_OFFSET UNITYSDK_OFFSET(0x1C513DA0)
#define CCEIJBFAOAI_BIOCABEDBOG_OFFSET UNITYSDK_OFFSET(0x1C51AD20)
#define CCEIJBFAOAI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5133E0)
#define CCEIJBFAOAI_DNEFFJCDNPM_1_OFFSET UNITYSDK_OFFSET(0x1C516690)
#define CCEIJBFAOAI_DNEFFJCDNPM_OFFSET UNITYSDK_OFFSET(0x1C518C90)
#define CCEIJBFAOAI_FCGGJGAKHDL_1_OFFSET UNITYSDK_OFFSET(0x1C516700)
#define CCEIJBFAOAI_FCGGJGAKHDL_OFFSET UNITYSDK_OFFSET(0x1C519160)
#define CCEIJBFAOAI_FEMNGDFKBIA_OFFSET UNITYSDK_OFFSET(0x1C513460)
#define CCEIJBFAOAI_GET_CHIPPIECES_OFFSET UNITYSDK_OFFSET(0x1C5187A0)
#define CCEIJBFAOAI_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1C5187B0)
#define CCEIJBFAOAI_GHJLPACCFEN_OFFSET UNITYSDK_OFFSET(0x1C519AD0)
#define CCEIJBFAOAI_GNPFLFPIGHG_OFFSET UNITYSDK_OFFSET(0x1C5134F0)
#define CCEIJBFAOAI_IADFALFCFBK_OFFSET UNITYSDK_OFFSET(0x1C5167F0)
#define CCEIJBFAOAI_JGCKOPMNADD_OFFSET UNITYSDK_OFFSET(0x1C516770)
#define CCEIJBFAOAI_KDIJGMBKOPI_OFFSET UNITYSDK_OFFSET(0x1C51A680)
#define CCEIJBFAOAI_KIADGAJEDPF_1_OFFSET UNITYSDK_OFFSET(0x1C519C00)
#define CCEIJBFAOAI_KIADGAJEDPF_OFFSET UNITYSDK_OFFSET(0x1C519B30)
#define CCEIJBFAOAI_MGBEPIKOBJA_OFFSET UNITYSDK_OFFSET(0x1C518660)
#define CCEIJBFAOAI_MHPLEKGEBJL_1_OFFSET UNITYSDK_OFFSET(0x1C51A1E0)
#define CCEIJBFAOAI_MHPLEKGEBJL_OFFSET UNITYSDK_OFFSET(0x1C519EC0)
#define CCEIJBFAOAI_MKAPAMPLPOF_OFFSET UNITYSDK_OFFSET(0x1C516640)
#define CCEIJBFAOAI_MMHPJLFMDDJ_OFFSET UNITYSDK_OFFSET(0x1C51A490)
#define CCEIJBFAOAI_NAMIPFEIDHB_OFFSET UNITYSDK_OFFSET(0x1C513660)
#define CCEIJBFAOAI_NCMPDIDBLEN_OFFSET UNITYSDK_OFFSET(0x1C51AF80)
#define CCEIJBFAOAI_OEDAPHIFJCG_OFFSET UNITYSDK_OFFSET(0x1C51AC00)
#define CCEIJBFAOAI_OHOAEIAEOID_OFFSET UNITYSDK_OFFSET(0x1C513600)
#define CCEIJBFAOAI_PJKIJDJNMIO_OFFSET UNITYSDK_OFFSET(0x1C5197F0)
#define CCEIJBFAOAI_REMOVE_ONMANYPIECESDESTROYED_OFFSET UNITYSDK_OFFSET(0x1C518C10)
#define CCEIJBFAOAI_REMOVE_ONPIECEINSTANTIATED_OFFSET UNITYSDK_OFFSET(0x1C518850)
#define CCEIJBFAOAI_REMOVE_ONPIECEMOVED_OFFSET UNITYSDK_OFFSET(0x1C518950)
#define CCEIJBFAOAI_REMOVE_ONPIECEROTATED_OFFSET UNITYSDK_OFFSET(0x1C518A50)
#define CCEIJBFAOAI_REMOVE_ONSINGLEPIECEDESTROYED_OFFSET UNITYSDK_OFFSET(0x1C518B30)
#define CCEIJBFAOAI_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1C5187C0)

inline static constexpr unsigned int CCEIJBFAOAI_TypeDefinitionIndex = 41790;

	class CCEIJBFAOAI : public ::System::Object
	{
	public:
		::NLOGOPPGNMD* _ChipPieces_k__BackingField; // 0x10
		::OECNOHOLGPP* MIPPNCGOJNM; // 0x18
		::MAAKEBJAIOG* LGOMCOOEHJG; // 0x20
		::OFIILELJGIE* _Progress_k__BackingField; // 0x28
		::System::Action_1<::NKIJFPHFJCO*>* OnPieceRotated; // 0x30
		::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*>* OnManyPiecesDestroyed; // 0x38
		::System::Action_1<::NKIJFPHFJCO*>* OnPieceInstantiated; // 0x40
		::PAHNGJAHJKI* FILKNFKKGIC; // 0x48
		::System::Action_1<::System::Int32>* OnSinglePieceDestroyed; // 0x50
		::System::Action_1<::NKIJFPHFJCO*>* OnPieceMoved; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_CTOR_OFFSET))(this);
		}

		::OECNOHOLGPP* NAMIPFEIDHB()
		{
			return ((::OECNOHOLGPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_NAMIPFEIDHB_OFFSET))(this);
		}

		::System::Void FEMNGDFKBIA(::OECNOHOLGPP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OECNOHOLGPP*))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_FEMNGDFKBIA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::CHGHIALKMFM*>* MKAPAMPLPOF()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::CHGHIALKMFM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_MKAPAMPLPOF_OFFSET))(this);
		}

		::System::Void GNPFLFPIGHG(::System::Collections::Generic::IReadOnlyList_1<::CHGHIALKMFM*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::CHGHIALKMFM*>*))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_GNPFLFPIGHG_OFFSET))(this, a1);
		}

		::System::Void MGBEPIKOBJA(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_MGBEPIKOBJA_OFFSET))(this, a1);
		}

		::System::Void AJCLBKIAEHF(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_AJCLBKIAEHF_OFFSET))(this, a1);
		}

		::NLOGOPPGNMD* get_ChipPieces()
		{
			return ((::NLOGOPPGNMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_GET_CHIPPIECES_OFFSET))(this);
		}

		::OFIILELJGIE* get_Progress()
		{
			return ((::OFIILELJGIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_GET_PROGRESS_OFFSET))(this);
		}

		::System::Void set_Progress(::OFIILELJGIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFIILELJGIE*))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_SET_PROGRESS_OFFSET))(this, a1);
		}

		::System::Void add_OnPieceInstantiated(::System::Action_1<::NKIJFPHFJCO*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::NKIJFPHFJCO*>*))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_ADD_ONPIECEINSTANTIATED_OFFSET))(this, a1);
		}

		::System::Void remove_OnPieceInstantiated(::System::Action_1<::NKIJFPHFJCO*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::NKIJFPHFJCO*>*))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_REMOVE_ONPIECEINSTANTIATED_OFFSET))(this, a1);
		}

		::System::Void add_OnPieceMoved(::System::Action_1<::NKIJFPHFJCO*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::NKIJFPHFJCO*>*))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_ADD_ONPIECEMOVED_OFFSET))(this, a1);
		}

		::System::Void remove_OnPieceMoved(::System::Action_1<::NKIJFPHFJCO*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::NKIJFPHFJCO*>*))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_REMOVE_ONPIECEMOVED_OFFSET))(this, a1);
		}

		::System::Void add_OnPieceRotated(::System::Action_1<::NKIJFPHFJCO*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::NKIJFPHFJCO*>*))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_ADD_ONPIECEROTATED_OFFSET))(this, a1);
		}

		::System::Void remove_OnPieceRotated(::System::Action_1<::NKIJFPHFJCO*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::NKIJFPHFJCO*>*))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_REMOVE_ONPIECEROTATED_OFFSET))(this, a1);
		}

		::System::Void add_OnSinglePieceDestroyed(::System::Action_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_ADD_ONSINGLEPIECEDESTROYED_OFFSET))(this, a1);
		}

		::System::Void remove_OnSinglePieceDestroyed(::System::Action_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_REMOVE_ONSINGLEPIECEDESTROYED_OFFSET))(this, a1);
		}

		::System::Void add_OnManyPiecesDestroyed(::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*>*))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_ADD_ONMANYPIECESDESTROYED_OFFSET))(this, a1);
		}

		::System::Void remove_OnManyPiecesDestroyed(::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*>*))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_REMOVE_ONMANYPIECESDESTROYED_OFFSET))(this, a1);
		}

		::System::Void OHOAEIAEOID(::PLHOHFBLKJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLHOHFBLKJO*))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_OHOAEIAEOID_OFFSET))(this, a1);
		}

		::System::Void BINAMFBIDLB(::OFIILELJGIE* a1, ::PAHNGJAHJKI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OFIILELJGIE*, ::PAHNGJAHJKI*))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_BINAMFBIDLB_OFFSET))(this, a1, a2);
		}

		::System::Boolean DNEFFJCDNPM(::CHGHIALKMFM* a1, ::PLHLAIJKMOD a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::CHGHIALKMFM*, ::PLHLAIJKMOD))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_DNEFFJCDNPM_OFFSET))(this, a1, a2);
		}

		::System::Boolean DNEFFJCDNPM_1(::CHGHIALKMFM* a1, ::UnityEngine::Vector2Int a2, ::RPG::Client::MechCraft::MechCraftRotationType a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::CHGHIALKMFM*, ::UnityEngine::Vector2Int, ::RPG::Client::MechCraft::MechCraftRotationType))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_DNEFFJCDNPM_1_OFFSET))(this, a1, a2, a3);
		}

		::NKIJFPHFJCO* FCGGJGAKHDL(::CHGHIALKMFM* a1, ::PLHLAIJKMOD a2)
		{
			return ((::NKIJFPHFJCO*(*)(::PVOID, ::CHGHIALKMFM*, ::PLHLAIJKMOD))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_FCGGJGAKHDL_OFFSET))(this, a1, a2);
		}

		::NKIJFPHFJCO* FCGGJGAKHDL_1(::CHGHIALKMFM* a1, ::UnityEngine::Vector2Int a2, ::RPG::Client::MechCraft::MechCraftRotationType a3)
		{
			return ((::NKIJFPHFJCO*(*)(::PVOID, ::CHGHIALKMFM*, ::UnityEngine::Vector2Int, ::RPG::Client::MechCraft::MechCraftRotationType))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_FCGGJGAKHDL_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IADFALFCFBK(::NKIJFPHFJCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_IADFALFCFBK_OFFSET))(this, a1);
		}

		::System::Void PJKIJDJNMIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_PJKIJDJNMIO_OFFSET))(this);
		}

		::System::Void GHJLPACCFEN(::NKIJFPHFJCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_GHJLPACCFEN_OFFSET))(this, a1);
		}

		::System::Boolean KIADGAJEDPF(::NKIJFPHFJCO* a1, ::PLHLAIJKMOD a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKIJFPHFJCO*, ::PLHLAIJKMOD))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_KIADGAJEDPF_OFFSET))(this, a1, a2);
		}

		::System::Boolean KIADGAJEDPF_1(::NKIJFPHFJCO* a1, ::UnityEngine::Vector2Int a2, ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftRotationType> a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKIJFPHFJCO*, ::UnityEngine::Vector2Int, ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftRotationType>))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_KIADGAJEDPF_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MHPLEKGEBJL(::NKIJFPHFJCO* a1, ::PLHLAIJKMOD a2)
		{
			return ((::System::Void(*)(::PVOID, ::NKIJFPHFJCO*, ::PLHLAIJKMOD))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_MHPLEKGEBJL_OFFSET))(this, a1, a2);
		}

		::System::Void MHPLEKGEBJL_1(::NKIJFPHFJCO* a1, ::UnityEngine::Vector2Int a2, ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftRotationType> a3)
		{
			return ((::System::Void(*)(::PVOID, ::NKIJFPHFJCO*, ::UnityEngine::Vector2Int, ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftRotationType>))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_MHPLEKGEBJL_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MMHPJLFMDDJ(::NKIJFPHFJCO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_MMHPJLFMDDJ_OFFSET))(this, a1);
		}

		::System::Void ADJKILMCMIJ(::NKIJFPHFJCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_ADJKILMCMIJ_OFFSET))(this, a1);
		}

		::System::Boolean KDIJGMBKOPI(::NKIJFPHFJCO* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKIJFPHFJCO*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_KDIJGMBKOPI_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean JGCKOPMNADD(::NKIJFPHFJCO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_JGCKOPMNADD_OFFSET))(this, a1);
		}

		::System::Boolean NCMPDIDBLEN(::NKIJFPHFJCO* a1, ::NKIJFPHFJCO* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKIJFPHFJCO*, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_NCMPDIDBLEN_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* OEDAPHIFJCG(::NKIJFPHFJCO* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_OEDAPHIFJCG_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* BIOCABEDBOG(::NKIJFPHFJCO* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_BIOCABEDBOG_OFFSET))(this, a1);
		}

	};
