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

#define CCEIJBFAOAI_ADD_ONMANYPIECESDESTROYED_OFFSET UNITYSDK_OFFSET(0x1E77BD60)
#define CCEIJBFAOAI_ADD_ONPIECEINSTANTIATED_OFFSET UNITYSDK_OFFSET(0x1E77B9A0)
#define CCEIJBFAOAI_ADD_ONPIECEMOVED_OFFSET UNITYSDK_OFFSET(0x1E77BAA0)
#define CCEIJBFAOAI_ADD_ONPIECEROTATED_OFFSET UNITYSDK_OFFSET(0x1E77BBA0)
#define CCEIJBFAOAI_ADD_ONSINGLEPIECEDESTROYED_OFFSET UNITYSDK_OFFSET(0x1E77BCA0)
#define CCEIJBFAOAI_ADJKILMCMIJ_OFFSET UNITYSDK_OFFSET(0x1E77D710)
#define CCEIJBFAOAI_AJCLBKIAEHF_OFFSET UNITYSDK_OFFSET(0x1E77B8D0)
#define CCEIJBFAOAI_BINAMFBIDLB_OFFSET UNITYSDK_OFFSET(0x1E776F60)
#define CCEIJBFAOAI_BIOCABEDBOG_OFFSET UNITYSDK_OFFSET(0x1E77DEF0)
#define CCEIJBFAOAI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7765A0)
#define CCEIJBFAOAI_DNEFFJCDNPM_1_OFFSET UNITYSDK_OFFSET(0x1E779860)
#define CCEIJBFAOAI_DNEFFJCDNPM_OFFSET UNITYSDK_OFFSET(0x1E77BE60)
#define CCEIJBFAOAI_FCGGJGAKHDL_1_OFFSET UNITYSDK_OFFSET(0x1E7798D0)
#define CCEIJBFAOAI_FCGGJGAKHDL_OFFSET UNITYSDK_OFFSET(0x1E77C330)
#define CCEIJBFAOAI_FEMNGDFKBIA_OFFSET UNITYSDK_OFFSET(0x1E776620)
#define CCEIJBFAOAI_GET_CHIPPIECES_OFFSET UNITYSDK_OFFSET(0x1E77B970)
#define CCEIJBFAOAI_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1E77B980)
#define CCEIJBFAOAI_GHJLPACCFEN_OFFSET UNITYSDK_OFFSET(0x1E77CCA0)
#define CCEIJBFAOAI_GNPFLFPIGHG_OFFSET UNITYSDK_OFFSET(0x1E7766B0)
#define CCEIJBFAOAI_IADFALFCFBK_OFFSET UNITYSDK_OFFSET(0x1E7799C0)
#define CCEIJBFAOAI_JGCKOPMNADD_OFFSET UNITYSDK_OFFSET(0x1E779940)
#define CCEIJBFAOAI_KDIJGMBKOPI_OFFSET UNITYSDK_OFFSET(0x1E77D850)
#define CCEIJBFAOAI_KIADGAJEDPF_1_OFFSET UNITYSDK_OFFSET(0x1E77CDD0)
#define CCEIJBFAOAI_KIADGAJEDPF_OFFSET UNITYSDK_OFFSET(0x1E77CD00)
#define CCEIJBFAOAI_MGBEPIKOBJA_OFFSET UNITYSDK_OFFSET(0x1E77B830)
#define CCEIJBFAOAI_MHPLEKGEBJL_1_OFFSET UNITYSDK_OFFSET(0x1E77D3B0)
#define CCEIJBFAOAI_MHPLEKGEBJL_OFFSET UNITYSDK_OFFSET(0x1E77D090)
#define CCEIJBFAOAI_MKAPAMPLPOF_OFFSET UNITYSDK_OFFSET(0x1E779810)
#define CCEIJBFAOAI_MMHPJLFMDDJ_OFFSET UNITYSDK_OFFSET(0x1E77D660)
#define CCEIJBFAOAI_NAMIPFEIDHB_OFFSET UNITYSDK_OFFSET(0x1E776820)
#define CCEIJBFAOAI_NCMPDIDBLEN_OFFSET UNITYSDK_OFFSET(0x1E77E150)
#define CCEIJBFAOAI_OEDAPHIFJCG_OFFSET UNITYSDK_OFFSET(0x1E77DDD0)
#define CCEIJBFAOAI_OHOAEIAEOID_OFFSET UNITYSDK_OFFSET(0x1E7767C0)
#define CCEIJBFAOAI_PJKIJDJNMIO_OFFSET UNITYSDK_OFFSET(0x1E77C9C0)
#define CCEIJBFAOAI_REMOVE_ONMANYPIECESDESTROYED_OFFSET UNITYSDK_OFFSET(0x1E77BDE0)
#define CCEIJBFAOAI_REMOVE_ONPIECEINSTANTIATED_OFFSET UNITYSDK_OFFSET(0x1E77BA20)
#define CCEIJBFAOAI_REMOVE_ONPIECEMOVED_OFFSET UNITYSDK_OFFSET(0x1E77BB20)
#define CCEIJBFAOAI_REMOVE_ONPIECEROTATED_OFFSET UNITYSDK_OFFSET(0x1E77BC20)
#define CCEIJBFAOAI_REMOVE_ONSINGLEPIECEDESTROYED_OFFSET UNITYSDK_OFFSET(0x1E77BD00)
#define CCEIJBFAOAI_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1E77B990)

inline static constexpr unsigned int CCEIJBFAOAI_TypeDefinitionIndex = 42765;

	class CCEIJBFAOAI : public ::System::Object
	{
	public:
		::OFIILELJGIE* _Progress_k__BackingField; // 0x10
		::System::Action_1<::NKIJFPHFJCO*>* OnPieceRotated; // 0x18
		::System::Action_1<::NKIJFPHFJCO*>* OnPieceMoved; // 0x20
		::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*>* OnManyPiecesDestroyed; // 0x28
		::OECNOHOLGPP* MIPPNCGOJNM; // 0x30
		::PAHNGJAHJKI* FILKNFKKGIC; // 0x38
		::System::Action_1<::System::Int32>* OnSinglePieceDestroyed; // 0x40
		::System::Action_1<::NKIJFPHFJCO*>* OnPieceInstantiated; // 0x48
		::NLOGOPPGNMD* _ChipPieces_k__BackingField; // 0x50
		::MAAKEBJAIOG* LGOMCOOEHJG; // 0x58
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
