#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class LMKKFPJBAFD;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define LMKKFPJBAFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1166D0)
#define LMKKFPJBAFD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D1166E0)
#define LMKKFPJBAFD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1166A0)

inline static constexpr unsigned int LMKKFPJBAFD_TypeDefinitionIndex = 23376;

	class LMKKFPJBAFD : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* NFMKOFNEKLA; // 0x18
		::RPG::GameCore::DynamicFloat* IMKHIDEBGEB; // 0x20
		::RPG::GameCore::DynamicFloat* FNCNMCEOALF; // 0x28
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKKFPJBAFD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LMKKFPJBAFD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LMKKFPJBAFD*))((::PBYTE)hIl2Cpp + LMKKFPJBAFD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LMKKFPJBAFD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LMKKFPJBAFD*))((::PBYTE)hIl2Cpp + LMKKFPJBAFD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
