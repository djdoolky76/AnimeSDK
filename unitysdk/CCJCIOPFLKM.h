#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/System/ValueTuple_2.h"
class EKFMIDBJDIA;
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::GameCore { class MazePuzzleOrigamiColonyRow; }
namespace RPG::GameCore { class MazePuzzleOrigamiRow; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPropStateChangeByCollectionMirrorTakenDiff; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CCJCIOPFLKM_CTOR_OFFSET UNITYSDK_OFFSET(0x17385C90)
#define CCJCIOPFLKM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17385CA0)
#define CCJCIOPFLKM_EHBBMDMLBLF_OFFSET UNITYSDK_OFFSET(0x17385D30)
#define CCJCIOPFLKM_IFCNMIBPBOI_OFFSET UNITYSDK_OFFSET(0x17386690)
#define CCJCIOPFLKM_JHJMOIFLPDA_OFFSET UNITYSDK_OFFSET(0x173869B0)
#define CCJCIOPFLKM_LCKMCJLDBLK_OFFSET UNITYSDK_OFFSET(0x17386480)
#define CCJCIOPFLKM_LMNCCLONKAA_OFFSET UNITYSDK_OFFSET(0x17386AA0)
#define CCJCIOPFLKM_MBLIEJHBADJ_OFFSET UNITYSDK_OFFSET(0x173864E0)
#define CCJCIOPFLKM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17385E30)
#define CCJCIOPFLKM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x173865E0)
#define CCJCIOPFLKM_PKGAKBODAGC_OFFSET UNITYSDK_OFFSET(0x173863E0)
#define CCJCIOPFLKM_TICK_OFFSET UNITYSDK_OFFSET(0x17386630)

inline static constexpr unsigned int CCJCIOPFLKM_TypeDefinitionIndex = 54650;

	class CCJCIOPFLKM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::WaitPropStateChangeByCollectionMirrorTakenDiff* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::MazePuzzleOrigamiColonyRow* OPEGEBLMMII; // 0x20
		::System::Collections::Generic::List_1<::RPG::GameCore::MazePuzzleOrigamiRow*>* IHPLGIBHEPE; // 0x28
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::RPG::Client::MapPropDef*, ::System::Int32>>* FDMFNICLDEO; // 0x30
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
		::System::UInt32 FMJAHJGAKNE; // 0x40
		::System::Boolean MMNOIOHPBGC; // 0x44
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPropStateChangeByCollectionMirrorTakenDiff* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPropStateChangeByCollectionMirrorTakenDiff*))((::PBYTE)hIl2Cpp + CCJCIOPFLKM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJCIOPFLKM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJCIOPFLKM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJCIOPFLKM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CCJCIOPFLKM_TICK_OFFSET))(this, a1);
		}

		::System::Boolean PKGAKBODAGC(::RPG::GameCore::MazePuzzleOrigamiRow* a1, ::RPG::Client::MapDef* a2, ::RPG::Client::MapPropDef* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MazePuzzleOrigamiRow*, ::RPG::Client::MapDef*, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CCJCIOPFLKM_PKGAKBODAGC_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean LCKMCJLDBLK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJCIOPFLKM_LCKMCJLDBLK_OFFSET))(this);
		}

		::System::Void MBLIEJHBADJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJCIOPFLKM_MBLIEJHBADJ_OFFSET))(this);
		}

		::System::Void EHBBMDMLBLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJCIOPFLKM_EHBBMDMLBLF_OFFSET))(this);
		}

		::System::Void IFCNMIBPBOI(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + CCJCIOPFLKM_IFCNMIBPBOI_OFFSET))(this, a1);
		}

		::System::Boolean LMNCCLONKAA(::RPG::GameCore::MazePuzzleOrigamiRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MazePuzzleOrigamiRow*))((::PBYTE)hIl2Cpp + CCJCIOPFLKM_LMNCCLONKAA_OFFSET))(this, a1);
		}

		::System::Boolean JHJMOIFLPDA(::RPG::GameCore::MazePuzzleOrigamiRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MazePuzzleOrigamiRow*))((::PBYTE)hIl2Cpp + CCJCIOPFLKM_JHJMOIFLPDA_OFFSET))(this, a1);
		}

	};
