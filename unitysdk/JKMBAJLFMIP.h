#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class JKMBAJLFMIP;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define JKMBAJLFMIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D016890)
#define JKMBAJLFMIP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0168A0)
#define JKMBAJLFMIP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D016860)

inline static constexpr unsigned int JKMBAJLFMIP_TypeDefinitionIndex = 20240;

	class JKMBAJLFMIP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::RPG::GameCore::DynamicFloat* BJOCBPFKJDP; // 0x20
		::RPG::GameCore::DynamicFloat* CONJAMJKHBI; // 0x28
		::System::Boolean EKGDOELGLFK; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMBAJLFMIP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JKMBAJLFMIP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JKMBAJLFMIP*))((::PBYTE)hIl2Cpp + JKMBAJLFMIP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::JKMBAJLFMIP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JKMBAJLFMIP*))((::PBYTE)hIl2Cpp + JKMBAJLFMIP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
