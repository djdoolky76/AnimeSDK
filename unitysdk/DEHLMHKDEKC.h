#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceAIState.h"
#include "unitysdk/System/Object.h"
class AGCPAMNLCGN;
class AOGHMIFDBDC;
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCatMonoView; }
namespace UnityEngine { class Animator; }

#define DEHLMHKDEKC_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xE50BE60)
#define DEHLMHKDEKC_AOIKIMECCIF_OFFSET UNITYSDK_OFFSET(0xE50BB50)
#define DEHLMHKDEKC_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xE50BDE0)
#define DEHLMHKDEKC_CTOR_OFFSET UNITYSDK_OFFSET(0xE50BB30)
#define DEHLMHKDEKC_ENTER_OFFSET UNITYSDK_OFFSET(0xE50BBB0)
#define DEHLMHKDEKC_EXIT_OFFSET UNITYSDK_OFFSET(0xE50BD30)
#define DEHLMHKDEKC_FMPPBFCCLDO_OFFSET UNITYSDK_OFFSET(0xE50B990)
#define DEHLMHKDEKC_GAHAMMBCONL_OFFSET UNITYSDK_OFFSET(0xE50B820)
#define DEHLMHKDEKC_GDIEEAMHFNH_OFFSET UNITYSDK_OFFSET(0xE50B740)
#define DEHLMHKDEKC_GET_ENDTIMEMS_OFFSET UNITYSDK_OFFSET(0xE50B8A0)
#define DEHLMHKDEKC_GET_NEXTSTATETYPE_OFFSET UNITYSDK_OFFSET(0xE50BB10)
#define DEHLMHKDEKC_GET_OWNER_OFFSET UNITYSDK_OFFSET(0xE50B730)
#define DEHLMHKDEKC_GET_STARTTIMEMS_OFFSET UNITYSDK_OFFSET(0xE50B880)
#define DEHLMHKDEKC_GET_STATEMACHINE_OFFSET UNITYSDK_OFFSET(0xE50B720)
#define DEHLMHKDEKC_GET_TOTALTIMEMS_OFFSET UNITYSDK_OFFSET(0xE50BAE0)
#define DEHLMHKDEKC_JKOKFFCBJLJ_OFFSET UNITYSDK_OFFSET(0xE50BB00)
#define DEHLMHKDEKC_KLLHNADMIHP_OFFSET UNITYSDK_OFFSET(0xE50BA20)
#define DEHLMHKDEKC_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xE50BE20)
#define DEHLMHKDEKC_MMIMMGGHBNO_OFFSET UNITYSDK_OFFSET(0xE50B8C0)
#define DEHLMHKDEKC_PFKBBIMIFEO_OFFSET UNITYSDK_OFFSET(0xE50B930)
#define DEHLMHKDEKC_SET_ENDTIMEMS_OFFSET UNITYSDK_OFFSET(0xE50B8B0)
#define DEHLMHKDEKC_SET_NEXTSTATETYPE_OFFSET UNITYSDK_OFFSET(0xE50BB20)
#define DEHLMHKDEKC_SET_STARTTIMEMS_OFFSET UNITYSDK_OFFSET(0xE50B890)
#define DEHLMHKDEKC_SET_TOTALTIMEMS_OFFSET UNITYSDK_OFFSET(0xE50BAF0)
#define DEHLMHKDEKC_TICK_OFFSET UNITYSDK_OFFSET(0xE50BC70)

inline static constexpr unsigned int DEHLMHKDEKC_TypeDefinitionIndex = 78113;

	class DEHLMHKDEKC : public ::System::Object
	{
	public:
		::AOGHMIFDBDC* _StateMachine_k__BackingField; // 0x10
		::AGCPAMNLCGN* _Owner_k__BackingField; // 0x18
		::System::Int64 _StartTimeMs_k__BackingField; // 0x20
		::System::Int64 _EndTimeMs_k__BackingField; // 0x28
		::System::Int64 _TotalTimeMs_k__BackingField; // 0x30
		::RPG::GameCore::CakeRaceAIState _NextStateType_k__BackingField; // 0x38
		::System::Void _ctor(::AOGHMIFDBDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOGHMIFDBDC*))((::PBYTE)hIl2Cpp + DEHLMHKDEKC_CTOR_OFFSET))(this, a1);
		}

		::AOGHMIFDBDC* get_StateMachine()
		{
			return ((::AOGHMIFDBDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHLMHKDEKC_GET_STATEMACHINE_OFFSET))(this);
		}

		::AGCPAMNLCGN* get_Owner()
		{
			return ((::AGCPAMNLCGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHLMHKDEKC_GET_OWNER_OFFSET))(this);
		}

		::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* GDIEEAMHFNH()
		{
			return ((::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHLMHKDEKC_GDIEEAMHFNH_OFFSET))(this);
		}

		::UnityEngine::Animator* GAHAMMBCONL()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHLMHKDEKC_GAHAMMBCONL_OFFSET))(this);
		}

		::System::Int64 get_StartTimeMs()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHLMHKDEKC_GET_STARTTIMEMS_OFFSET))(this);
		}

		::System::Void set_StartTimeMs(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + DEHLMHKDEKC_SET_STARTTIMEMS_OFFSET))(this, a1);
		}

		::System::Int64 get_EndTimeMs()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHLMHKDEKC_GET_ENDTIMEMS_OFFSET))(this);
		}

		::System::Void set_EndTimeMs(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + DEHLMHKDEKC_SET_ENDTIMEMS_OFFSET))(this, a1);
		}

		::System::Int64 MMIMMGGHBNO()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHLMHKDEKC_MMIMMGGHBNO_OFFSET))(this);
		}

		::System::Int64 PFKBBIMIFEO()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHLMHKDEKC_PFKBBIMIFEO_OFFSET))(this);
		}

		::System::Single FMPPBFCCLDO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHLMHKDEKC_FMPPBFCCLDO_OFFSET))(this);
		}

		::System::Single KLLHNADMIHP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHLMHKDEKC_KLLHNADMIHP_OFFSET))(this);
		}

		::System::Int64 get_TotalTimeMs()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHLMHKDEKC_GET_TOTALTIMEMS_OFFSET))(this);
		}

		::System::Void set_TotalTimeMs(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + DEHLMHKDEKC_SET_TOTALTIMEMS_OFFSET))(this, a1);
		}

		::RPG::GameCore::CakeRaceAIState JKOKFFCBJLJ()
		{
			return ((::RPG::GameCore::CakeRaceAIState(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHLMHKDEKC_JKOKFFCBJLJ_OFFSET))(this);
		}

		::RPG::GameCore::CakeRaceAIState get_NextStateType()
		{
			return ((::RPG::GameCore::CakeRaceAIState(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHLMHKDEKC_GET_NEXTSTATETYPE_OFFSET))(this);
		}

		::System::Void set_NextStateType(::RPG::GameCore::CakeRaceAIState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceAIState))((::PBYTE)hIl2Cpp + DEHLMHKDEKC_SET_NEXTSTATETYPE_OFFSET))(this, a1);
		}

		::System::Void AOIKIMECCIF(::System::Int64 a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + DEHLMHKDEKC_AOIKIMECCIF_OFFSET))(this, a1, a2);
		}

		::System::Void Enter(::AGCPAMNLCGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGCPAMNLCGN*))((::PBYTE)hIl2Cpp + DEHLMHKDEKC_ENTER_OFFSET))(this, a1);
		}

		::System::Void Tick(::AGCPAMNLCGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGCPAMNLCGN*))((::PBYTE)hIl2Cpp + DEHLMHKDEKC_TICK_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHLMHKDEKC_EXIT_OFFSET))(this);
		}

		::System::Void CLJEBKODGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHLMHKDEKC_CLJEBKODGHK_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHLMHKDEKC_LJOLGCNKIEH_OFFSET))(this);
		}

		::System::Void AHEEAFKFALM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHLMHKDEKC_AHEEAFKFALM_OFFSET))(this);
		}

	};
