#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class FHNFCAKPADM;
class OJIALLHOIBH;
namespace RPG::GameCore { class TargetEvaluator; }

#define OJIALLHOIBH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D25C380)
#define OJIALLHOIBH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D25C3C0)
#define OJIALLHOIBH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D25C320)

inline static constexpr unsigned int OJIALLHOIBH_TypeDefinitionIndex = 23206;

	class OJIALLHOIBH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::Il2CppArray<::FHNFCAKPADM*>* CHDAMDEOOBG; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJIALLHOIBH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OJIALLHOIBH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OJIALLHOIBH*))((::PBYTE)hIl2Cpp + OJIALLHOIBH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::OJIALLHOIBH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OJIALLHOIBH*))((::PBYTE)hIl2Cpp + OJIALLHOIBH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
