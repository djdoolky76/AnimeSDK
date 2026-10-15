#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NMGMHOOOPBF;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define NMGMHOOOPBF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D237590)
#define NMGMHOOOPBF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2375D0)
#define NMGMHOOOPBF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D237520)

inline static constexpr unsigned int NMGMHOOOPBF_TypeDefinitionIndex = 21067;

	class NMGMHOOOPBF : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* PODFJDMHFMK; // 0x18
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::Il2CppArray<::System::UInt32>* EGGCADJJJOD; // 0x28
		::System::String* GFNAPNFFGPJ; // 0x30
		::System::Single LAONGKHOAPH; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMGMHOOOPBF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NMGMHOOOPBF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NMGMHOOOPBF*))((::PBYTE)hIl2Cpp + NMGMHOOOPBF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NMGMHOOOPBF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NMGMHOOOPBF*))((::PBYTE)hIl2Cpp + NMGMHOOOPBF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
