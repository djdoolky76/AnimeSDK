#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class DNPJDFABDCB;
class FCOEMCEDLNL;

#define DNPJDFABDCB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD23680)
#define DNPJDFABDCB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD23690)
#define DNPJDFABDCB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD235C0)

inline static constexpr unsigned int DNPJDFABDCB_TypeDefinitionIndex = 21153;

	class DNPJDFABDCB : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNPJDFABDCB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DNPJDFABDCB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DNPJDFABDCB*))((::PBYTE)hIl2Cpp + DNPJDFABDCB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DNPJDFABDCB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DNPJDFABDCB*))((::PBYTE)hIl2Cpp + DNPJDFABDCB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
