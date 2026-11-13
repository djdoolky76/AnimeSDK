#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatUIType.h"
#include "unitysdk/System/Object.h"
class CLCHIFCAOPK;
namespace RPG::Client { class LuaUIGameFlowContext; }
namespace RPG::Client::DiceCombat { class DiceCombatGameFlow; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { class String; }

#define CLCHIFCAOPK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1AD5B760)
#define CLCHIFCAOPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1AD5B810)
#define CLCHIFCAOPK_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x1AD5B820)
#define CLCHIFCAOPK_DPCOKBDIADP_OFFSET UNITYSDK_OFFSET(0x1AD5BBB0)
#define CLCHIFCAOPK_EHAIPFFJIKK_OFFSET UNITYSDK_OFFSET(0x1AD5B860)
#define CLCHIFCAOPK_FHMHFKCILOI_OFFSET UNITYSDK_OFFSET(0x1AD5B9B0)

inline static constexpr unsigned int CLCHIFCAOPK_TypeDefinitionIndex = 78444;

	class CLCHIFCAOPK : public ::System::Object
	{
	public:
		::RPG::Client::DiceCombat::DiceCombatGameFlow* BEGDKHKENMF; // 0x10
		::System::Void _ctor(::RPG::Client::DiceCombat::DiceCombatGameFlow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatGameFlow*))((::PBYTE)hIl2Cpp + CLCHIFCAOPK_CTOR_OFFSET))(this, a1);
		}

		static ::CLCHIFCAOPK* BPLPBPMEODA(::RPG::Client::DiceCombat::DiceCombatGameFlow* a1)
		{
			return ((::CLCHIFCAOPK*(*)(::RPG::Client::DiceCombat::DiceCombatGameFlow*))((::PBYTE)hIl2Cpp + CLCHIFCAOPK_BPLPBPMEODA_OFFSET))(a1);
		}

		::RPG::Client::LuaUIGameFlowContext* EHAIPFFJIKK(::RPG::Client::DiceCombat::DiceCombatUIType a1)
		{
			return ((::RPG::Client::LuaUIGameFlowContext*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatUIType))((::PBYTE)hIl2Cpp + CLCHIFCAOPK_EHAIPFFJIKK_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* FHMHFKCILOI(::RPG::Client::DiceCombat::DiceCombatUIType a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatUIType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLCHIFCAOPK_FHMHFKCILOI_OFFSET))(this, a1, a2);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLCHIFCAOPK_DIOEAJEHHND_OFFSET))(this);
		}

		::System::String* DPCOKBDIADP(::RPG::Client::DiceCombat::DiceCombatUIType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatUIType))((::PBYTE)hIl2Cpp + CLCHIFCAOPK_DPCOKBDIADP_OFFSET))(this, a1);
		}

	};
