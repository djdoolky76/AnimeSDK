#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NGGIGGMKJPC;

#define NGGIGGMKJPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D206B70)
#define NGGIGGMKJPC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D206B80)
#define NGGIGGMKJPC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D206B40)

inline static constexpr unsigned int NGGIGGMKJPC_TypeDefinitionIndex = 21476;

	class NGGIGGMKJPC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 PPJAGHAPCPJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGGIGGMKJPC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NGGIGGMKJPC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NGGIGGMKJPC*))((::PBYTE)hIl2Cpp + NGGIGGMKJPC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NGGIGGMKJPC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NGGIGGMKJPC*))((::PBYTE)hIl2Cpp + NGGIGGMKJPC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
