#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GGADPFPIOGE;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define GGADPFPIOGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE3E5D0)
#define GGADPFPIOGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE3E5E0)
#define GGADPFPIOGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE3E5A0)

inline static constexpr unsigned int GGADPFPIOGE_TypeDefinitionIndex = 22712;

	class GGADPFPIOGE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::String* FOGOFODLIFL; // 0x20
		::System::String* FMKKJGKFHHF; // 0x28
		::System::String* OFINIELALIP; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGADPFPIOGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GGADPFPIOGE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GGADPFPIOGE*))((::PBYTE)hIl2Cpp + GGADPFPIOGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GGADPFPIOGE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GGADPFPIOGE*))((::PBYTE)hIl2Cpp + GGADPFPIOGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
