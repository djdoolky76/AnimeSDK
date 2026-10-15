#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FormatString.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MMBPCMGMMIH;
namespace RPG::GameCore { class TargetEvaluator; }

#define MMBPCMGMMIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1CF7A0)
#define MMBPCMGMMIH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D1CF7B0)
#define MMBPCMGMMIH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1CF770)

inline static constexpr unsigned int MMBPCMGMMIH_TypeDefinitionIndex = 23751;

	class MMBPCMGMMIH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* IPFLFDNFCPN; // 0x18
		::RPG::GameCore::TargetEvaluator* JACJMOPEPDA; // 0x20
		::RPG::GameCore::FormatString ECNKCCNJNPJ; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBPCMGMMIH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MMBPCMGMMIH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MMBPCMGMMIH*))((::PBYTE)hIl2Cpp + MMBPCMGMMIH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MMBPCMGMMIH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MMBPCMGMMIH*))((::PBYTE)hIl2Cpp + MMBPCMGMMIH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
