#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class FNALBBPNJNH;

#define FNALBBPNJNH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFE5AA0)
#define FNALBBPNJNH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DFE5AB0)
#define FNALBBPNJNH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DFE59E0)

inline static constexpr unsigned int FNALBBPNJNH_TypeDefinitionIndex = 21889;

	class FNALBBPNJNH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNALBBPNJNH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FNALBBPNJNH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FNALBBPNJNH*))((::PBYTE)hIl2Cpp + FNALBBPNJNH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FNALBBPNJNH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FNALBBPNJNH*))((::PBYTE)hIl2Cpp + FNALBBPNJNH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
