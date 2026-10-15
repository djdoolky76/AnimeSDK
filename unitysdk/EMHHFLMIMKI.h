#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class EMHHFLMIMKI;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define EMHHFLMIMKI_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD794C0)
#define EMHHFLMIMKI_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1CD79750)
#define EMHHFLMIMKI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD79500)
#define EMHHFLMIMKI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD79460)

inline static constexpr unsigned int EMHHFLMIMKI_TypeDefinitionIndex = 24102;

	class EMHHFLMIMKI : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* FHLJGDGMMHK; // 0x18
		::RPG::GameCore::TargetEvaluator* AAHOJJJPFLD; // 0x20
		::RPG::GameCore::TargetEvaluator* MKMCENPANNO; // 0x28
		::RPG::GameCore::DynamicFloat* PMJKDMDOEDE; // 0x30
		::RPG::GameCore::DynamicValueContextScope AMEKHLANFKP; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMHHFLMIMKI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EMHHFLMIMKI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EMHHFLMIMKI*))((::PBYTE)hIl2Cpp + EMHHFLMIMKI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::EMHHFLMIMKI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EMHHFLMIMKI*))((::PBYTE)hIl2Cpp + EMHHFLMIMKI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMHHFLMIMKI_GETDYNAMICKEY_OFFSET))(this);
		}

	};
