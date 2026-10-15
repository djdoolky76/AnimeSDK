#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GGKLOLEFOKF;
namespace System { class String; }

#define GGKLOLEFOKF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE41CD0)
#define GGKLOLEFOKF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE41CE0)
#define GGKLOLEFOKF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE41C90)

inline static constexpr unsigned int GGKLOLEFOKF_TypeDefinitionIndex = 24147;

	class GGKLOLEFOKF : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* IEABENMOPFF; // 0x18
		::System::Boolean AODGNFHAPBL; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGKLOLEFOKF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GGKLOLEFOKF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GGKLOLEFOKF*))((::PBYTE)hIl2Cpp + GGKLOLEFOKF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GGKLOLEFOKF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GGKLOLEFOKF*))((::PBYTE)hIl2Cpp + GGKLOLEFOKF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
