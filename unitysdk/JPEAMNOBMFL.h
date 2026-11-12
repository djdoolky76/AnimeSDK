#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtBattleCharacterCameraTag.h"
#include "unitysdk/System/Object.h"
class GELIALJDFBL;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtBattleCharacterCameraConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JPEAMNOBMFL_CLEAR_OFFSET UNITYSDK_OFFSET(0xBAE6EF0)
#define JPEAMNOBMFL_CTOR_OFFSET UNITYSDK_OFFSET(0xBAE71A0)
#define JPEAMNOBMFL_HEGNDMHLBGN_OFFSET UNITYSDK_OFFSET(0xBAE6B10)
#define JPEAMNOBMFL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBAE6B20)
#define JPEAMNOBMFL_MNFDNAKPDAJ_OFFSET UNITYSDK_OFFSET(0xBAE6FF0)

inline static constexpr unsigned int JPEAMNOBMFL_TypeDefinitionIndex = 55488;

	class JPEAMNOBMFL : public ::System::Object
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x10
		::System::Collections::Generic::List_1<::GELIALJDFBL*>* MJHMKDBKKDL; // 0x18
		::Il2CppArray<::RPG::GameCore::RtBattleCharacterCameraConfig*>* EAOOEFNNKIO; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEAMNOBMFL_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::TaskContext* HEGNDMHLBGN()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEAMNOBMFL_HEGNDMHLBGN_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::GameEntity* a1, ::Il2CppArray<::RPG::GameCore::RtBattleCharacterCameraConfig*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Il2CppArray<::RPG::GameCore::RtBattleCharacterCameraConfig*>*))((::PBYTE)hIl2Cpp + JPEAMNOBMFL_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEAMNOBMFL_CLEAR_OFFSET))(this);
		}

		::RPG::GameCore::RtBattleCharacterCameraConfig* MNFDNAKPDAJ(::RPG::GameCore::RtBattleCharacterCameraTag a1)
		{
			return ((::RPG::GameCore::RtBattleCharacterCameraConfig*(*)(::PVOID, ::RPG::GameCore::RtBattleCharacterCameraTag))((::PBYTE)hIl2Cpp + JPEAMNOBMFL_MNFDNAKPDAJ_OFFSET))(this, a1);
		}

	};
