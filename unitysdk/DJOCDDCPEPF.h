#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class DJOCDDCPEPF;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class Action; }
namespace System { class Object; }

#define DJOCDDCPEPF_AIJLDADIBNM_OFFSET UNITYSDK_OFFSET(0xF248D00)
#define DJOCDDCPEPF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xF248AB0)
#define DJOCDDCPEPF_CACBOKCKKDN_OFFSET UNITYSDK_OFFSET(0xF248DB0)
#define DJOCDDCPEPF_CAJFDDIBPMI_OFFSET UNITYSDK_OFFSET(0xF248B40)
#define DJOCDDCPEPF_CENMBJDMIEE_OFFSET UNITYSDK_OFFSET(0xF248EB0)
#define DJOCDDCPEPF_CTOR_OFFSET UNITYSDK_OFFSET(0xF248B30)
#define DJOCDDCPEPF_DCNGNLJADJM_OFFSET UNITYSDK_OFFSET(0xF248FD0)
#define DJOCDDCPEPF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF248CB0)
#define DJOCDDCPEPF_FEHGIPOELBL_OFFSET UNITYSDK_OFFSET(0xF249010)
#define DJOCDDCPEPF_HJOHDFKLIDK_OFFSET UNITYSDK_OFFSET(0xF248E50)
#define DJOCDDCPEPF_IEOGLIENPMN_OFFSET UNITYSDK_OFFSET(0xF248BF0)

inline static constexpr unsigned int DJOCDDCPEPF_TypeDefinitionIndex = 72134;

	class DJOCDDCPEPF : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x10
		::System::Action* OBGBLOGOLOC; // 0x18
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
