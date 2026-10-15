#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MCOOAPOCCPO;
namespace System { class String; }

#define MCOOAPOCCPO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D111BB0)
#define MCOOAPOCCPO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D111BC0)
#define MCOOAPOCCPO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D111B80)

inline static constexpr unsigned int MCOOAPOCCPO_TypeDefinitionIndex = 23301;

	class MCOOAPOCCPO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* NCELMEKDHOM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCOOAPOCCPO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MCOOAPOCCPO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MCOOAPOCCPO*))((::PBYTE)hIl2Cpp + MCOOAPOCCPO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MCOOAPOCCPO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MCOOAPOCCPO*))((::PBYTE)hIl2Cpp + MCOOAPOCCPO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
