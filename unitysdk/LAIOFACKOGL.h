#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class LAIOFACKOGL;
namespace RPG::GameCore { class DynamicFloat; }

#define LAIOFACKOGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0D3090)
#define LAIOFACKOGL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0D30A0)
#define LAIOFACKOGL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0D3060)

inline static constexpr unsigned int LAIOFACKOGL_TypeDefinitionIndex = 19885;

	class LAIOFACKOGL : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* HCDEOKNIGKG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAIOFACKOGL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LAIOFACKOGL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LAIOFACKOGL*))((::PBYTE)hIl2Cpp + LAIOFACKOGL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LAIOFACKOGL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LAIOFACKOGL*))((::PBYTE)hIl2Cpp + LAIOFACKOGL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
