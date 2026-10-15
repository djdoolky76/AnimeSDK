#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatV2UIType.h"
#include "unitysdk/System/Object.h"
class NKKGEMBHBLA;
namespace RPG::Client { class LuaUIGameFlowContext; }
namespace RPG::Client::DiceCombat { class DiceCombatV2GameFlow; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { class String; }

#define NKKGEMBHBLA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBC39330)
#define NKKGEMBHBLA_CTOR_OFFSET UNITYSDK_OFFSET(0xBC393E0)
#define NKKGEMBHBLA_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0xBC393F0)
#define NKKGEMBHBLA_DPCOKBDIADP_OFFSET UNITYSDK_OFFSET(0xBC39780)
#define NKKGEMBHBLA_EHAIPFFJIKK_OFFSET UNITYSDK_OFFSET(0xBC39430)
#define NKKGEMBHBLA_FHMHFKCILOI_OFFSET UNITYSDK_OFFSET(0xBC39580)

inline static constexpr unsigned int NKKGEMBHBLA_TypeDefinitionIndex = 76192;

	class NKKGEMBHBLA : public ::System::Object
	{
	public:
		::RPG::Client::DiceCombat::DiceCombatV2GameFlow* BEGDKHKENMF; // 0x10
		::System::Void _ctor(::RPG::Client::DiceCombat::DiceCombatV2GameFlow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2GameFlow*))((::PBYTE)hIl2Cpp + NKKGEMBHBLA_CTOR_OFFSET))(this, a1);
		}

		static ::NKKGEMBHBLA* BPLPBPMEODA(::RPG::Client::DiceCombat::DiceCombatV2GameFlow* a1)
		{
			return ((::NKKGEMBHBLA*(*)(::RPG::Client::DiceCombat::DiceCombatV2GameFlow*))((::PBYTE)hIl2Cpp + NKKGEMBHBLA_BPLPBPMEODA_OFFSET))(a1);
		}

		::RPG::Client::LuaUIGameFlowContext* EHAIPFFJIKK(::RPG::Client::DiceCombat::DiceCombatV2UIType a1)
		{
			return ((::RPG::Client::LuaUIGameFlowContext*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2UIType))((::PBYTE)hIl2Cpp + NKKGEMBHBLA_EHAIPFFJIKK_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* FHMHFKCILOI(::RPG::Client::DiceCombat::DiceCombatV2UIType a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2UIType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + NKKGEMBHBLA_FHMHFKCILOI_OFFSET))(this, a1, a2);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKKGEMBHBLA_DIOEAJEHHND_OFFSET))(this);
		}

		::System::String* DPCOKBDIADP(::RPG::Client::DiceCombat::DiceCombatV2UIType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2UIType))((::PBYTE)hIl2Cpp + NKKGEMBHBLA_DPCOKBDIADP_OFFSET))(this, a1);
		}

	};
