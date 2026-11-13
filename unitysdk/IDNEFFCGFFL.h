#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/ModifierValueType.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
class IDNEFFCGFFL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define IDNEFFCGFFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6B32D0)
#define IDNEFFCGFFL_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1E6B3560)
#define IDNEFFCGFFL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E6B32E0)
#define IDNEFFCGFFL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E6B32A0)

inline static constexpr unsigned int IDNEFFCGFFL_TypeDefinitionIndex = 23102;

	class IDNEFFCGFFL : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* FHLJGDGMMHK; // 0x18
		::RPG::GameCore::DynamicFloat* KIPAGNCANAJ; // 0x20
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x28
		::RPG::GameCore::DynamicString* IFNAGLOMHBK; // 0x30
		::RPG::GameCore::ModifierValueType ACBKMOPHPLE; // 0x38
		::RPG::GameCore::DynamicValueContextScope AMEKHLANFKP; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNEFFCGFFL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IDNEFFCGFFL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IDNEFFCGFFL*))((::PBYTE)hIl2Cpp + IDNEFFCGFFL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::IDNEFFCGFFL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IDNEFFCGFFL*))((::PBYTE)hIl2Cpp + IDNEFFCGFFL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNEFFCGFFL_GETDYNAMICKEY_OFFSET))(this);
		}

	};
