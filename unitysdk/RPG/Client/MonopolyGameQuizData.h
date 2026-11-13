#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGKNADEDNHB;
class NNDKLIBALLC;
namespace RPG::GameCore { class MonopolyQuizConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7F7A60)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_GETTASKCANDIDATEPLAYERS_OFFSET UNITYSDK_OFFSET(0x1D7F8010)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_GETTASKDOINGPLAYER_OFFSET UNITYSDK_OFFSET(0x1D7F6E30)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1D7F8780)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_GET_QUIZTASKIDS_OFFSET UNITYSDK_OFFSET(0x1D7F6D90)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_GET_REMAINTURN_OFFSET UNITYSDK_OFFSET(0x1D7F87C0)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1D7F87A0)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_ISPLAYERDOINGTASK_OFFSET UNITYSDK_OFFSET(0x1D7F8720)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_ISTASKDOING_OFFSET UNITYSDK_OFFSET(0x1D7F86C0)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1D7F8790)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SET_REMAINTURN_OFFSET UNITYSDK_OFFSET(0x1D7F87D0)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0x1D7F87B0)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SYNCREMAINTURN_OFFSET UNITYSDK_OFFSET(0x1D7F6810)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SYNCTASKINFO_OFFSET UNITYSDK_OFFSET(0x1D7F64A0)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x1D7F7570)
#define RPG_CLIENT_MONOPOLYGAMEQUIZDATA__GETRANDOMID_OFFSET UNITYSDK_OFFSET(0x1D7F8600)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyGameQuizData_TypeDefinitionIndex = 68207;

	class MonopolyGameQuizData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _AllCandidatePlayerIDs; // 0x10
		::RPG::GameCore::MonopolyQuizConfigRow* _Row_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _TaskDoingPlayers; // 0x20
		::System::UInt32 _ID_k__BackingField; // 0x28
		::System::UInt32 _RemainTurn_k__BackingField; // 0x2C
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Sync(::JGKNADEDNHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGKNADEDNHB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncRemainTurn(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SYNCREMAINTURN_OFFSET))(this, a1);
		}

		::System::Void SyncTaskInfo(::System::Collections::Generic::List_1<::NNDKLIBALLC*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NNDKLIBALLC*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SYNCTASKINFO_OFFSET))(this, a1);
		}

		::System::UInt32 GetTaskDoingPlayer(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_GETTASKDOINGPLAYER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetTaskCandidatePlayers(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_GETTASKCANDIDATEPLAYERS_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsTaskDoing(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_ISTASKDOING_OFFSET))(this, a1);
		}

		::System::Boolean IsPlayerDoingTask(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_ISPLAYERDOINGTASK_OFFSET))(this, a1);
		}

		::System::UInt32 _GetRandomID(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA__GETRANDOMID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::MonopolyQuizConfigRow* get_Row()
		{
			return ((::RPG::GameCore::MonopolyQuizConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::MonopolyQuizConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonopolyQuizConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SET_ROW_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_QuizTaskIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_GET_QUIZTASKIDS_OFFSET))(this);
		}

		::System::UInt32 get_RemainTurn()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_GET_REMAINTURN_OFFSET))(this);
		}

		::System::Void set_RemainTurn(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEQUIZDATA_SET_REMAINTURN_OFFSET))(this, a1);
		}

	};
}
