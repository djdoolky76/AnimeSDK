#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/UnityEngine/Vector3.h"
class LBJHODAAAII;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RogueDLC1Dot3AdventureRoomManage; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LHNOMKDOJJH_CCTOR_OFFSET UNITYSDK_OFFSET(0xB6BFA90)
#define LHNOMKDOJJH_CTOR_OFFSET UNITYSDK_OFFSET(0xB6BCB10)
#define LHNOMKDOJJH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6BCB60)
#define LHNOMKDOJJH_KALFLJGAONC_OFFSET UNITYSDK_OFFSET(0xB6BD040)
#define LHNOMKDOJJH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6BCC00)
#define LHNOMKDOJJH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB6BF520)
#define LHNOMKDOJJH_PGAJCEEHBBA_OFFSET UNITYSDK_OFFSET(0xB6BF570)
#define LHNOMKDOJJH_TICK_OFFSET UNITYSDK_OFFSET(0xB6BCBA0)

inline static constexpr unsigned int LHNOMKDOJJH_TypeDefinitionIndex = 58446;

	class LHNOMKDOJJH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::RogueDLC1Dot3AdventureRoomManage* OFKGLJOAMLD; // 0x18
		::RPG::Client::AdventurePhase* FPILJLGACHP; // 0x20
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* OLHGEGCKCBE; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_LGCFDMOGACA()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)UnitySDK::FromName("", "LHNOMKDOJJH")->GetStaticField(0x5ECF0);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueDLC1Dot3AdventureRoomManage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueDLC1Dot3AdventureRoomManage*))((::PBYTE)hIl2Cpp + LHNOMKDOJJH_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHNOMKDOJJH_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHNOMKDOJJH_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LHNOMKDOJJH_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHNOMKDOJJH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHNOMKDOJJH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void KALFLJGAONC(::LBJHODAAAII* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJHODAAAII*))((::PBYTE)hIl2Cpp + LHNOMKDOJJH_KALFLJGAONC_OFFSET))(this, a1);
		}

		::System::Void PGAJCEEHBBA(::LBJHODAAAII* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJHODAAAII*))((::PBYTE)hIl2Cpp + LHNOMKDOJJH_PGAJCEEHBBA_OFFSET))(this, a1);
		}

	};
