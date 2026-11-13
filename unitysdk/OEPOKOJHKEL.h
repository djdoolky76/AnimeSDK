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

#define OEPOKOJHKEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E610220)
#define OEPOKOJHKEL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E610230)
#define OEPOKOJHKEL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E6101F0)

inline static constexpr unsigned int OEPOKOJHKEL_TypeDefinitionIndex = 23288;

	class OEPOKOJHKEL : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* ECHFEMAFJNN; // 0x18
		::JBPIHNMIAPO* HDJHDKLHLAM; // 0x20
		::RPG::GameCore::TargetEvaluator* BPIBFOGDDHD; // 0x28
		::RPG::GameCore::DynamicFloat* NPLCDLGCHNJ; // 0x30
		::System::String* NPIKCFCKBLM; // 0x38
		::BHELCIBGKGA* FOBFFEIDADN; // 0x40
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
