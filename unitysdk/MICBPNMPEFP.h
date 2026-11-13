#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
class MICBPNMPEFP;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define MICBPNMPEFP_CTOR_OFFSET UNITYSDK_OFFSET(0x1F587C90)
#define MICBPNMPEFP_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1F587F20)
#define MICBPNMPEFP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F587CD0)
#define MICBPNMPEFP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F587C30)

inline static constexpr unsigned int MICBPNMPEFP_TypeDefinitionIndex = 24614;

	class MICBPNMPEFP : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* FHLJGDGMMHK; // 0x18
		::RPG::GameCore::DynamicFloat* PMJKDMDOEDE; // 0x20
		::RPG::GameCore::TargetEvaluator* AAHOJJJPFLD; // 0x28
		::RPG::GameCore::TargetEvaluator* MKMCENPANNO; // 0x30
		::RPG::GameCore::DynamicValueContextScope AMEKHLANFKP; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICBPNMPEFP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MICBPNMPEFP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MICBPNMPEFP*))((::PBYTE)hIl2Cpp + MICBPNMPEFP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MICBPNMPEFP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MICBPNMPEFP*))((::PBYTE)hIl2Cpp + MICBPNMPEFP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICBPNMPEFP_GETDYNAMICKEY_OFFSET))(this);
		}

	};
