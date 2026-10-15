#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace RPG::GameCore { class ValuePostProcessConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VALUEEVALUATORCONFIG_BBNJCKPKPDN_1_OFFSET UNITYSDK_OFFSET(0x1DC5EC00)
#define RPG_GAMECORE_VALUEEVALUATORCONFIG_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1DC5EBB0)
#define RPG_GAMECORE_VALUEEVALUATORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC5D870)
#define RPG_GAMECORE_VALUEEVALUATORCONFIG_DLDBLNNPHKE_1_OFFSET UNITYSDK_OFFSET(0x1DC5EEE0)
#define RPG_GAMECORE_VALUEEVALUATORCONFIG_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1DC5ED20)
#define RPG_GAMECORE_VALUEEVALUATORCONFIG_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DC5E3D0)
#define RPG_GAMECORE_VALUEEVALUATORCONFIG_FEIIDFFOICL_1_OFFSET UNITYSDK_OFFSET(0x1DC5EE10)
#define RPG_GAMECORE_VALUEEVALUATORCONFIG_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1DC5EC30)
#define RPG_GAMECORE_VALUEEVALUATORCONFIG_ICOKOCPAMND_OFFSET UNITYSDK_OFFSET(0x1DC5D9B0)
#define RPG_GAMECORE_VALUEEVALUATORCONFIG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DC5E640)
#define RPG_GAMECORE_VALUEEVALUATORCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC5D880)
#define RPG_GAMECORE_VALUEEVALUATORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC5CF90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ValueEvaluatorConfig_TypeDefinitionIndex = 24037;

	class ValueEvaluatorConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Weight; // 0x10
		::Il2CppArray<::RPG::GameCore::ValuePostProcessConfig*>* PostProcess; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEEVALUATORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ValueEvaluatorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ValueEvaluatorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEEVALUATORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ValueEvaluatorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ValueEvaluatorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEEVALUATORCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void ICOKOCPAMND(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ValueEvaluatorConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ValueEvaluatorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEEVALUATORCONFIG_ICOKOCPAMND_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ValueEvaluatorConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ValueEvaluatorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEEVALUATORCONFIG_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ValueEvaluatorConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ValueEvaluatorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEEVALUATORCONFIG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::ValueEvaluatorConfig* BBNJCKPKPDN(::System::Int32 a1)
		{
			return ((::RPG::GameCore::ValueEvaluatorConfig*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEEVALUATORCONFIG_BBNJCKPKPDN_OFFSET))(a1);
		}

		static ::RPG::GameCore::ValueEvaluatorConfig* BBNJCKPKPDN_1(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::ValueEvaluatorConfig*(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEEVALUATORCONFIG_BBNJCKPKPDN_1_OFFSET))(a1);
		}

		static ::System::Boolean FEIIDFFOICL(::RPG::GameCore::ValueEvaluatorConfig* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEEVALUATORCONFIG_FEIIDFFOICL_OFFSET))(a1, a2);
		}

		static ::System::Boolean DLDBLNNPHKE(::RPG::GameCore::ValueEvaluatorConfig* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEEVALUATORCONFIG_DLDBLNNPHKE_OFFSET))(a1, a2);
		}

		static ::System::Boolean FEIIDFFOICL_1(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEEVALUATORCONFIG_FEIIDFFOICL_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean DLDBLNNPHKE_1(::RPG::GameCore::ValueEvaluatorConfig* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ValueEvaluatorConfig*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VALUEEVALUATORCONFIG_DLDBLNNPHKE_1_OFFSET))(a1, a2);
		}

	};
}
