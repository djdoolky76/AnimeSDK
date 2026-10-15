#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class FOALNJOLMNB;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define FOALNJOLMNB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE12850)
#define FOALNJOLMNB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE12890)
#define FOALNJOLMNB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE127F0)

inline static constexpr unsigned int FOALNJOLMNB_TypeDefinitionIndex = 24193;

	class FOALNJOLMNB : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::RPG::GameCore::DynamicString* IFNAGLOMHBK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOALNJOLMNB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FOALNJOLMNB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FOALNJOLMNB*))((::PBYTE)hIl2Cpp + FOALNJOLMNB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FOALNJOLMNB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FOALNJOLMNB*))((::PBYTE)hIl2Cpp + FOALNJOLMNB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
