#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANFHJIOJJMG.h"
#include "unitysdk/ANOBAENCAOD.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class BALFAPGPFGA;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }

#define BALFAPGPFGA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCC3AD0)
#define BALFAPGPFGA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CCC3AE0)
#define BALFAPGPFGA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCC3AA0)

inline static constexpr unsigned int BALFAPGPFGA_TypeDefinitionIndex = 23163;

	class BALFAPGPFGA : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GMDBHJKEAEI; // 0x18
		::ANFHJIOJJMG MEPFOEEGBEA; // 0x20
		::ANOBAENCAOD GMPGDEINODK; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BALFAPGPFGA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BALFAPGPFGA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BALFAPGPFGA*))((::PBYTE)hIl2Cpp + BALFAPGPFGA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BALFAPGPFGA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BALFAPGPFGA*))((::PBYTE)hIl2Cpp + BALFAPGPFGA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
