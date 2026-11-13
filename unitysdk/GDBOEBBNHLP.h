#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GDBOEBBNHLP;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define GDBOEBBNHLP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA4F8C0)
#define GDBOEBBNHLP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EA4F8D0)
#define GDBOEBBNHLP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EA4F880)

inline static constexpr unsigned int GDBOEBBNHLP_TypeDefinitionIndex = 23208;

	class GDBOEBBNHLP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::String* NOEGKGICELO; // 0x20
		::System::String* EMFAHIBNJMP; // 0x28
		::RPG::GameCore::DynamicFloat* AHCBJENOJHJ; // 0x30
		::System::Boolean OKFAGDPKBJA; // 0x38
		::System::Boolean NLIAEJNBEKP; // 0x39
		::System::Byte _padding0[0x2];
		::RPG::GameCore::DynamicValueContextScope AMEKHLANFKP; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBOEBBNHLP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GDBOEBBNHLP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GDBOEBBNHLP*))((::PBYTE)hIl2Cpp + GDBOEBBNHLP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GDBOEBBNHLP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GDBOEBBNHLP*))((::PBYTE)hIl2Cpp + GDBOEBBNHLP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
