#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GFJHLACJMNK;
namespace System { class String; }

#define GFJHLACJMNK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE3C8B0)
#define GFJHLACJMNK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE3C8C0)
#define GFJHLACJMNK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE3C880)

inline static constexpr unsigned int GFJHLACJMNK_TypeDefinitionIndex = 23330;

	class GFJHLACJMNK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* ELHMCCNLMNC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFJHLACJMNK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GFJHLACJMNK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GFJHLACJMNK*))((::PBYTE)hIl2Cpp + GFJHLACJMNK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GFJHLACJMNK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GFJHLACJMNK*))((::PBYTE)hIl2Cpp + GFJHLACJMNK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
