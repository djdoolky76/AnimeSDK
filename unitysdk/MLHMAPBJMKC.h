#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MLHMAPBJMKC;
namespace System { class String; }

#define MLHMAPBJMKC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1CC700)
#define MLHMAPBJMKC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D1CC710)
#define MLHMAPBJMKC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1CC6D0)

inline static constexpr unsigned int MLHMAPBJMKC_TypeDefinitionIndex = 19978;

	class MLHMAPBJMKC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AIIEEIKBIEK; // 0x18
		::System::String* NEHFGFCJFBK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLHMAPBJMKC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MLHMAPBJMKC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MLHMAPBJMKC*))((::PBYTE)hIl2Cpp + MLHMAPBJMKC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MLHMAPBJMKC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MLHMAPBJMKC*))((::PBYTE)hIl2Cpp + MLHMAPBJMKC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
