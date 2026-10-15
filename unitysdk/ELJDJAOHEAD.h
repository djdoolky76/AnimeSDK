#pragma once
#include "unitysdk/unitysdk.h"
class ELJDJAOHEAD_GNLAPACLOGE;
namespace RPG::Client { class RoadRashGameModifier_AbilityCooldown; }
namespace RPG::Client::LittleGame::RoadRash { class RoadRashAbilityCoolDown; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ELJDJAOHEAD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1551A350)
#define ELJDJAOHEAD_CTOR_OFFSET UNITYSDK_OFFSET(0x15519890)
#define ELJDJAOHEAD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1551A150)
#define ELJDJAOHEAD_GDOOPBKPNLN_OFFSET UNITYSDK_OFFSET(0x1551A1C0)
#define ELJDJAOHEAD_GPKIFEONPLF_OFFSET UNITYSDK_OFFSET(0x15519E60)
#define ELJDJAOHEAD_NAJOPNMPHPF_OFFSET UNITYSDK_OFFSET(0x15519B00)
#define ELJDJAOHEAD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155198C0)
#define ELJDJAOHEAD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15519E10)

inline static constexpr unsigned int ELJDJAOHEAD_TypeDefinitionIndex = 58412;

	class ELJDJAOHEAD
	{
	public:
		::RPG::Client::LittleGame::RoadRash::RoadRashAbilityCoolDown* NIOILPJCNCB; // 0x28
		::System::Boolean AMBLEJEBOIA; // 0x30
		static ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::RoadRash::RoadRashAbilityCoolDown*, ::System::Object*>** StaticGet_FEDCFHONDGL()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::RoadRash::RoadRashAbilityCoolDown*, ::System::Object*>**)UnitySDK::FromName("", "ELJDJAOHEAD")->GetStaticField(0x398F0);
		}

		// static const ::System::Object JICIBKFAMEG; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RoadRashGameModifier_AbilityCooldown* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RoadRashGameModifier_AbilityCooldown*))((::PBYTE)hIl2Cpp + ELJDJAOHEAD_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELJDJAOHEAD_CCTOR_OFFSET))();
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJDJAOHEAD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJDJAOHEAD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJDJAOHEAD_DISPOSE_OFFSET))(this);
		}

		::System::Void NAJOPNMPHPF(::RPG::Client::LittleGame::RoadRash::RoadRashAbilityCoolDown* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::RoadRash::RoadRashAbilityCoolDown*, ::System::Single))((::PBYTE)hIl2Cpp + ELJDJAOHEAD_NAJOPNMPHPF_OFFSET))(this, a1, a2);
		}

		::System::Void GPKIFEONPLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJDJAOHEAD_GPKIFEONPLF_OFFSET))(this);
		}

		static ::System::Void GDOOPBKPNLN(::RPG::Client::LittleGame::RoadRash::RoadRashAbilityCoolDown* a1, ::ELJDJAOHEAD_GNLAPACLOGE* a2)
		{
			return ((::System::Void(*)(::RPG::Client::LittleGame::RoadRash::RoadRashAbilityCoolDown*, ::ELJDJAOHEAD_GNLAPACLOGE*))((::PBYTE)hIl2Cpp + ELJDJAOHEAD_GDOOPBKPNLN_OFFSET))(a1, a2);
		}

	};
