#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class DJOCDDCPEPF;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class Action; }
namespace System { class Object; }

#define DJOCDDCPEPF_AIJLDADIBNM_OFFSET UNITYSDK_OFFSET(0xF24DF80)
#define DJOCDDCPEPF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xF24DD30)
#define DJOCDDCPEPF_CACBOKCKKDN_OFFSET UNITYSDK_OFFSET(0xF24E030)
#define DJOCDDCPEPF_CAJFDDIBPMI_OFFSET UNITYSDK_OFFSET(0xF24DDC0)
#define DJOCDDCPEPF_CENMBJDMIEE_OFFSET UNITYSDK_OFFSET(0xF24E130)
#define DJOCDDCPEPF_CTOR_OFFSET UNITYSDK_OFFSET(0xF24DDB0)
#define DJOCDDCPEPF_DCNGNLJADJM_OFFSET UNITYSDK_OFFSET(0xF24E250)
#define DJOCDDCPEPF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF24DF30)
#define DJOCDDCPEPF_FEHGIPOELBL_OFFSET UNITYSDK_OFFSET(0xF24E290)
#define DJOCDDCPEPF_HJOHDFKLIDK_OFFSET UNITYSDK_OFFSET(0xF24E0D0)
#define DJOCDDCPEPF_IEOGLIENPMN_OFFSET UNITYSDK_OFFSET(0xF24DE70)

inline static constexpr unsigned int DJOCDDCPEPF_TypeDefinitionIndex = 72135;

	class DJOCDDCPEPF : public ::System::Object
	{
	public:
		::System::Action* OBGBLOGOLOC; // 0x10
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x18
		::RPG::GameCore::TurnBasedAbilityComponent* PCDEEAAIFPK; // 0x20
		::System::Int32 ICBFKKPLHKO; // 0x28
		::System::Boolean FBMOGNBFNJD; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJOCDDCPEPF_CTOR_OFFSET))(this);
		}

		static ::DJOCDDCPEPF* BPLPBPMEODA(::RPG::GameCore::GameEntity* a1, ::System::Action* a2)
		{
			return ((::DJOCDDCPEPF*(*)(::RPG::GameCore::GameEntity*, ::System::Action*))((::PBYTE)hIl2Cpp + DJOCDDCPEPF_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJOCDDCPEPF_DISPOSE_OFFSET))(this);
		}

		::System::Void CAJFDDIBPMI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DJOCDDCPEPF_CAJFDDIBPMI_OFFSET))(this, a1);
		}

		::System::Int32 HJOHDFKLIDK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJOCDDCPEPF_HJOHDFKLIDK_OFFSET))(this);
		}

		::System::Void IEOGLIENPMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJOCDDCPEPF_IEOGLIENPMN_OFFSET))(this);
		}

		::System::Void AIJLDADIBNM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJOCDDCPEPF_AIJLDADIBNM_OFFSET))(this);
		}

		::System::Void CENMBJDMIEE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DJOCDDCPEPF_CENMBJDMIEE_OFFSET))(this, a1);
		}

		::System::Int32 CACBOKCKKDN(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DJOCDDCPEPF_CACBOKCKKDN_OFFSET))(this, a1);
		}

		::System::Int32 DCNGNLJADJM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJOCDDCPEPF_DCNGNLJADJM_OFFSET))(this);
		}

		::System::Boolean FEHGIPOELBL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DJOCDDCPEPF_FEHGIPOELBL_OFFSET))(this);
		}

	};
