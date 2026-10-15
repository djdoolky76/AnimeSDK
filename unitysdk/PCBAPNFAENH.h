#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class PCBAPNFAENH;

#define PCBAPNFAENH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2CA6D0)
#define PCBAPNFAENH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2CA6E0)
#define PCBAPNFAENH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2CA610)

inline static constexpr unsigned int PCBAPNFAENH_TypeDefinitionIndex = 20889;

	class PCBAPNFAENH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBAPNFAENH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PCBAPNFAENH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PCBAPNFAENH*))((::PBYTE)hIl2Cpp + PCBAPNFAENH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::PCBAPNFAENH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PCBAPNFAENH*))((::PBYTE)hIl2Cpp + PCBAPNFAENH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
