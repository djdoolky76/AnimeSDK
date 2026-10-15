#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FormatString.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
class LHOKPKHEBIK;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define LHOKPKHEBIK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0C69B0)
#define LHOKPKHEBIK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0C69C0)
#define LHOKPKHEBIK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0C6970)

inline static constexpr unsigned int LHOKPKHEBIK_TypeDefinitionIndex = 23328;

	class LHOKPKHEBIK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::FormatString ECNKCCNJNPJ; // 0x18
		::RPG::GameCore::TargetEvaluator* BLEOLOJJFDA; // 0x20
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x28
		::System::String* FCGFFNKCLNJ; // 0x30
		::System::Single MOAPMBBKJAK; // 0x38
		::RPG::MVector3 HAIBFNMDPKE; // 0x3C
		::System::Boolean BGNCHHNAHEJ; // 0x48
		::System::Byte _padding0[0x3];
		::RPG::MVector3 MPFLMHPNOOB; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHOKPKHEBIK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LHOKPKHEBIK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LHOKPKHEBIK*))((::PBYTE)hIl2Cpp + LHOKPKHEBIK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LHOKPKHEBIK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LHOKPKHEBIK*))((::PBYTE)hIl2Cpp + LHOKPKHEBIK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
