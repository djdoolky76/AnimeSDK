#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftRotationType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PLHLAIJKMOD.h"
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
namespace System { class Nullable; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CCEIJBFAOAI_ADD_ONMANYPIECESDESTROYED_OFFSET UNITYSDK_OFFSET(0x1C547050)
#define CCEIJBFAOAI_ADD_ONPIECEINSTANTIATED_OFFSET UNITYSDK_OFFSET(0x1C546C90)
#define CCEIJBFAOAI_ADD_ONPIECEMOVED_OFFSET UNITYSDK_OFFSET(0x1C546D90)
#define CCEIJBFAOAI_ADD_ONPIECEROTATED_OFFSET UNITYSDK_OFFSET(0x1C546E90)
#define CCEIJBFAOAI_ADD_ONSINGLEPIECEDESTROYED_OFFSET UNITYSDK_OFFSET(0x1C546F90)
#define CCEIJBFAOAI_ADJKILMCMIJ_OFFSET UNITYSDK_OFFSET(0x1C548A00)
#define CCEIJBFAOAI_AJCLBKIAEHF_OFFSET UNITYSDK_OFFSET(0x1C546BC0)
#define CCEIJBFAOAI_BINAMFBIDLB_OFFSET UNITYSDK_OFFSET(0x1C542260)
#define CCEIJBFAOAI_BIOCABEDBOG_OFFSET UNITYSDK_OFFSET(0x1C5491E0)
#define CCEIJBFAOAI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5418A0)
#define CCEIJBFAOAI_DNEFFJCDNPM_1_OFFSET UNITYSDK_OFFSET(0x1C544B50)
#define CCEIJBFAOAI_DNEFFJCDNPM_OFFSET UNITYSDK_OFFSET(0x1C547150)
#define CCEIJBFAOAI_FCGGJGAKHDL_1_OFFSET UNITYSDK_OFFSET(0x1C544BC0)
#define CCEIJBFAOAI_FCGGJGAKHDL_OFFSET UNITYSDK_OFFSET(0x1C547620)
#define CCEIJBFAOAI_FEMNGDFKBIA_OFFSET UNITYSDK_OFFSET(0x1C541920)
#define CCEIJBFAOAI_GET_CHIPPIECES_OFFSET UNITYSDK_OFFSET(0x1C546C60)
#define CCEIJBFAOAI_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1C546C70)
#define CCEIJBFAOAI_GHJLPACCFEN_OFFSET UNITYSDK_OFFSET(0x1C547F90)
#define CCEIJBFAOAI_GNPFLFPIGHG_OFFSET UNITYSDK_OFFSET(0x1C5419B0)
#define CCEIJBFAOAI_IADFALFCFBK_OFFSET UNITYSDK_OFFSET(0x1C544CB0)
#define CCEIJBFAOAI_JGCKOPMNADD_OFFSET UNITYSDK_OFFSET(0x1C544C30)
#define CCEIJBFAOAI_KDIJGMBKOPI_OFFSET UNITYSDK_OFFSET(0x1C548B40)
#define CCEIJBFAOAI_KIADGAJEDPF_1_OFFSET UNITYSDK_OFFSET(0x1C5480C0)
#define CCEIJBFAOAI_KIADGAJEDPF_OFFSET UNITYSDK_OFFSET(0x1C547FF0)
#define CCEIJBFAOAI_MGBEPIKOBJA_OFFSET UNITYSDK_OFFSET(0x1C546B20)
#define CCEIJBFAOAI_MHPLEKGEBJL_1_OFFSET UNITYSDK_OFFSET(0x1C5486A0)
#define CCEIJBFAOAI_MHPLEKGEBJL_OFFSET UNITYSDK_OFFSET(0x1C548380)
#define CCEIJBFAOAI_MKAPAMPLPOF_OFFSET UNITYSDK_OFFSET(0x1C544B00)
#define CCEIJBFAOAI_MMHPJLFMDDJ_OFFSET UNITYSDK_OFFSET(0x1C548950)
#define CCEIJBFAOAI_NAMIPFEIDHB_OFFSET UNITYSDK_OFFSET(0x1C541B20)
#define CCEIJBFAOAI_NCMPDIDBLEN_OFFSET UNITYSDK_OFFSET(0x1C549440)
#define CCEIJBFAOAI_OEDAPHIFJCG_OFFSET UNITYSDK_OFFSET(0x1C5490C0)
#define CCEIJBFAOAI_OHOAEIAEOID_OFFSET UNITYSDK_OFFSET(0x1C541AC0)
#define CCEIJBFAOAI_PJKIJDJNMIO_OFFSET UNITYSDK_OFFSET(0x1C547CB0)
#define CCEIJBFAOAI_REMOVE_ONMANYPIECESDESTROYED_OFFSET UNITYSDK_OFFSET(0x1C5470D0)
#define CCEIJBFAOAI_REMOVE_ONPIECEINSTANTIATED_OFFSET UNITYSDK_OFFSET(0x1C546D10)
#define CCEIJBFAOAI_REMOVE_ONPIECEMOVED_OFFSET UNITYSDK_OFFSET(0x1C546E10)
#define CCEIJBFAOAI_REMOVE_ONPIECEROTATED_OFFSET UNITYSDK_OFFSET(0x1C546F10)
#define CCEIJBFAOAI_REMOVE_ONSINGLEPIECEDESTROYED_OFFSET UNITYSDK_OFFSET(0x1C546FF0)
#define CCEIJBFAOAI_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1C546C80)

	class CCEIJBFAOAI : public ::System::Object
	{
	public:
		::System::Action* OnPieceInstantiated; // 0x10
		::MAAKEBJAIOG* LGOMCOOEHJG; // 0x18
		::OFIILELJGIE* _Progress_k__BackingField; // 0x20
		::System::Action* OnManyPiecesDestroyed; // 0x28
		::OECNOHOLGPP* MIPPNCGOJNM; // 0x30
		::System::Action* OnPieceMoved; // 0x38
		::System::Action* OnPieceRotated; // 0x40
		::System::Action* OnSinglePieceDestroyed; // 0x48
		::NLOGOPPGNMD* _ChipPieces_k__BackingField; // 0x50
		::PAHNGJAHJKI* FILKNFKKGIC; // 0x58
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

		::System::Void add_OnPieceInstantiated(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_ADD_ONPIECEINSTANTIATED_OFFSET))(this, a1);
		}

		::System::Void remove_OnPieceInstantiated(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_REMOVE_ONPIECEINSTANTIATED_OFFSET))(this, a1);
		}

		::System::Void add_OnPieceMoved(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_ADD_ONPIECEMOVED_OFFSET))(this, a1);
		}

		::System::Void remove_OnPieceMoved(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_REMOVE_ONPIECEMOVED_OFFSET))(this, a1);
		}

		::System::Void add_OnPieceRotated(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_ADD_ONPIECEROTATED_OFFSET))(this, a1);
		}

		::System::Void remove_OnPieceRotated(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_REMOVE_ONPIECEROTATED_OFFSET))(this, a1);
		}

		::System::Void add_OnSinglePieceDestroyed(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_ADD_ONSINGLEPIECEDESTROYED_OFFSET))(this, a1);
		}

		::System::Void remove_OnSinglePieceDestroyed(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_REMOVE_ONSINGLEPIECEDESTROYED_OFFSET))(this, a1);
		}

		::System::Void add_OnManyPiecesDestroyed(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_ADD_ONMANYPIECESDESTROYED_OFFSET))(this, a1);
		}

		::System::Void remove_OnManyPiecesDestroyed(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_REMOVE_ONMANYPIECESDESTROYED_OFFSET))(this, a1);
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

		::System::Boolean KIADGAJEDPF_1(::NKIJFPHFJCO* a1, ::UnityEngine::Vector2Int a2, ::System::Nullable* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKIJFPHFJCO*, ::UnityEngine::Vector2Int, ::System::Nullable*))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_KIADGAJEDPF_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MHPLEKGEBJL(::NKIJFPHFJCO* a1, ::PLHLAIJKMOD a2)
		{
			return ((::System::Void(*)(::PVOID, ::NKIJFPHFJCO*, ::PLHLAIJKMOD))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_MHPLEKGEBJL_OFFSET))(this, a1, a2);
		}

		::System::Void MHPLEKGEBJL_1(::NKIJFPHFJCO* a1, ::UnityEngine::Vector2Int a2, ::System::Nullable* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NKIJFPHFJCO*, ::UnityEngine::Vector2Int, ::System::Nullable*))((::PBYTE)hIl2Cpp + CCEIJBFAOAI_MHPLEKGEBJL_1_OFFSET))(this, a1, a2, a3);
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
