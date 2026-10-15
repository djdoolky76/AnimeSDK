#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class AdventurePhase; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropAttractEnemy; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LKEHGFAFGGD_CTOR_OFFSET UNITYSDK_OFFSET(0xB72EF00)
#define LKEHGFAFGGD_FPEOAALAGCD_OFFSET UNITYSDK_OFFSET(0xB72F840)
#define LKEHGFAFGGD_KNAJIDNOOAN_OFFSET UNITYSDK_OFFSET(0xB72FF00)
#define LKEHGFAFGGD_LAKOGENJIDH_OFFSET UNITYSDK_OFFSET(0xB72EFC0)
#define LKEHGFAFGGD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB72F070)
#define LKEHGFAFGGD_PPJCEFJCHGD_OFFSET UNITYSDK_OFFSET(0xB72FB90)

inline static constexpr unsigned int LKEHGFAFGGD_TypeDefinitionIndex = 58303;

	class LKEHGFAFGGD
	{
	public:
		::RPG::GameCore::TransformComponent* AFIBNIPMICJ; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropAttractEnemy* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropAttractEnemy*))((::PBYTE)hIl2Cpp + LKEHGFAFGGD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single LAKOGENJIDH(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LKEHGFAFGGD_LAKOGENJIDH_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKEHGFAFGGD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean PPJCEFJCHGD(::RPG::GameCore::TransformComponent* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TransformComponent*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LKEHGFAFGGD_PPJCEFJCHGD_OFFSET))(this, a1, a2);
		}

		::System::Boolean KNAJIDNOOAN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LKEHGFAFGGD_KNAJIDNOOAN_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* FPEOAALAGCD(::RPG::Client::AdventurePhase* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + LKEHGFAFGGD_FPEOAALAGCD_OFFSET))(this, a1);
		}

	};
