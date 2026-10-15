#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector2.h"
class FCOEMCEDLNL;
class HEBOGJMNJIG;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define HEBOGJMNJIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE990A0)
#define HEBOGJMNJIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE990B0)
#define HEBOGJMNJIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE99070)

inline static constexpr unsigned int HEBOGJMNJIG_TypeDefinitionIndex = 22591;

	class HEBOGJMNJIG : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::String* GDGJDFJKGIH; // 0x20
		::System::String* IKPJNBBOILP; // 0x28
		::System::Single LJPDKMHJFMM; // 0x30
		::System::Single DANNPGBGOJA; // 0x34
		::RPG::MVector2 FOGKIKPKHAE; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBOGJMNJIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HEBOGJMNJIG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HEBOGJMNJIG*))((::PBYTE)hIl2Cpp + HEBOGJMNJIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::HEBOGJMNJIG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HEBOGJMNJIG*))((::PBYTE)hIl2Cpp + HEBOGJMNJIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
