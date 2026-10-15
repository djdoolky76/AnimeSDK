#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class BHELCIBGKGA;
class FCOEMCEDLNL;
class JBPIHNMIAPO;
class OEPOKOJHKEL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define OEPOKOJHKEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D264430)
#define OEPOKOJHKEL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D264440)
#define OEPOKOJHKEL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D264400)

inline static constexpr unsigned int OEPOKOJHKEL_TypeDefinitionIndex = 22863;

	class OEPOKOJHKEL : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* NPLCDLGCHNJ; // 0x18
		::System::String* NPIKCFCKBLM; // 0x20
		::JBPIHNMIAPO* HDJHDKLHLAM; // 0x28
		::BHELCIBGKGA* FOBFFEIDADN; // 0x30
		::RPG::GameCore::TargetEvaluator* BPIBFOGDDHD; // 0x38
		::System::String* ECHFEMAFJNN; // 0x40
		::System::Boolean DOABIHDOJLJ; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEPOKOJHKEL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OEPOKOJHKEL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OEPOKOJHKEL*))((::PBYTE)hIl2Cpp + OEPOKOJHKEL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::OEPOKOJHKEL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OEPOKOJHKEL*))((::PBYTE)hIl2Cpp + OEPOKOJHKEL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
