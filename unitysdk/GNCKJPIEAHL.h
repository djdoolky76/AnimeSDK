#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
namespace RPG::GameCore { class ByIsRogueTournCurRoomFinish; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GNCKJPIEAHL_CTOR_OFFSET UNITYSDK_OFFSET(0x15AFE040)
#define GNCKJPIEAHL_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15AFE120)

inline static constexpr unsigned int GNCKJPIEAHL_TypeDefinitionIndex = 57985;

	class GNCKJPIEAHL
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::RogueSubMode>* NJNMHNHKAJF; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsRogueTournCurRoomFinish* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsRogueTournCurRoomFinish*))((::PBYTE)hIl2Cpp + GNCKJPIEAHL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNCKJPIEAHL_EVALUATE_OFFSET))(this);
		}

	};
