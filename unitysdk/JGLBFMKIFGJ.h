#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/PropState.h"
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::GameCore { class MazePuzzleOrigamiColonyRow; }
namespace RPG::GameCore { class MazePuzzleOrigamiRow; }
namespace RPG::GameCore { class PropsReqInteractByColonyMirrorTakenDiff; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JGLBFMKIFGJ_CCTOR_OFFSET UNITYSDK_OFFSET(0xB197A80)
#define JGLBFMKIFGJ_CJHOKFDDMAD_OFFSET UNITYSDK_OFFSET(0xB196FE0)
#define JGLBFMKIFGJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB196970)
#define JGLBFMKIFGJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB1969C0)
#define JGLBFMKIFGJ_EILJDOKJADD_OFFSET UNITYSDK_OFFSET(0xB197430)
#define JGLBFMKIFGJ_FFIPPBBDFIK_OFFSET UNITYSDK_OFFSET(0xB197110)
#define JGLBFMKIFGJ_IEDEPMNGMJP_OFFSET UNITYSDK_OFFSET(0xB197920)
#define JGLBFMKIFGJ_LGOJDJBABID_OFFSET UNITYSDK_OFFSET(0xB1978C0)
#define JGLBFMKIFGJ_LMNCCLONKAA_OFFSET UNITYSDK_OFFSET(0xB1979B0)
#define JGLBFMKIFGJ_MPANPKKMDOI_OFFSET UNITYSDK_OFFSET(0xB197570)
#define JGLBFMKIFGJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB196A80)
#define JGLBFMKIFGJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB197060)
#define JGLBFMKIFGJ_TICK_OFFSET UNITYSDK_OFFSET(0xB1970B0)

inline static constexpr unsigned int JGLBFMKIFGJ_TypeDefinitionIndex = 53186;

	class JGLBFMKIFGJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::MazePuzzleOrigamiColonyRow* OPEGEBLMMII; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::PropsReqInteractByColonyMirrorTakenDiff* OFKGLJOAMLD; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::MapPropDef*>* PKJBOFFIELG; // 0x30
		::System::Collections::Generic::List_1<::RPG::GameCore::MazePuzzleOrigamiRow*>* IHPLGIBHEPE; // 0x38
		::System::UInt32 FMJAHJGAKNE; // 0x40
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PropState, ::System::UInt32>** StaticGet_BFIPCKLFEPA()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PropState, ::System::UInt32>**)UnitySDK::FromName("", "JGLBFMKIFGJ")->GetStaticField(0x10DD0);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropsReqInteractByColonyMirrorTakenDiff* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropsReqInteractByColonyMirrorTakenDiff*))((::PBYTE)hIl2Cpp + JGLBFMKIFGJ_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGLBFMKIFGJ_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLBFMKIFGJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLBFMKIFGJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLBFMKIFGJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JGLBFMKIFGJ_TICK_OFFSET))(this, a1);
		}

		::System::Void FFIPPBBDFIK(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + JGLBFMKIFGJ_FFIPPBBDFIK_OFFSET))(this, a1, a2);
		}

		::System::Void CJHOKFDDMAD(::RPG::GameCore::MazePuzzleOrigamiRow* a1, ::RPG::Client::MapDef* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MazePuzzleOrigamiRow*, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + JGLBFMKIFGJ_CJHOKFDDMAD_OFFSET))(this, a1, a2);
		}

		::System::Void MPANPKKMDOI(::RPG::GameCore::MazePuzzleOrigamiRow* a1, ::RPG::Client::MapDef* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MazePuzzleOrigamiRow*, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + JGLBFMKIFGJ_MPANPKKMDOI_OFFSET))(this, a1, a2);
		}

		::System::Boolean EILJDOKJADD(::RPG::GameCore::MazePuzzleOrigamiRow* a1, ::RPG::Client::MapDef* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MazePuzzleOrigamiRow*, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + JGLBFMKIFGJ_EILJDOKJADD_OFFSET))(this, a1, a2);
		}

		::System::Boolean LGOJDJBABID(::RPG::GameCore::MazePuzzleOrigamiRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MazePuzzleOrigamiRow*))((::PBYTE)hIl2Cpp + JGLBFMKIFGJ_LGOJDJBABID_OFFSET))(this, a1);
		}

		::System::Boolean IEDEPMNGMJP(::RPG::GameCore::MazePuzzleOrigamiRow* a1, ::RPG::Client::MapDef* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MazePuzzleOrigamiRow*, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + JGLBFMKIFGJ_IEDEPMNGMJP_OFFSET))(this, a1, a2);
		}

		::System::Boolean LMNCCLONKAA(::RPG::GameCore::MazePuzzleOrigamiRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MazePuzzleOrigamiRow*))((::PBYTE)hIl2Cpp + JGLBFMKIFGJ_LMNCCLONKAA_OFFSET))(this, a1);
		}

	};
