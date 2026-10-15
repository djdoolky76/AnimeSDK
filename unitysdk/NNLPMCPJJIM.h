#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ILBattlePropertyFormulaType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class NNLPMCPJJIM;

#define NNLPMCPJJIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D23C640)
#define NNLPMCPJJIM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D23C440)

	class NNLPMCPJJIM : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint PEDFLGGDHDP; // 0x10
		::RPG::GameCore::ILBattlePropertyFormulaType KCGCENIODNJ; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint NKAACMGNNPK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNLPMCPJJIM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NNLPMCPJJIM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NNLPMCPJJIM*))((::PBYTE)hIl2Cpp + NNLPMCPJJIM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
