#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class FMFNKGLNPMI;
namespace RPG::GameCore { class DynamicFloat; }

#define FMFNKGLNPMI_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA2B8F0)
#define FMFNKGLNPMI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EA2B900)
#define FMFNKGLNPMI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EA2B8C0)

inline static constexpr unsigned int FMFNKGLNPMI_TypeDefinitionIndex = 20219;

	class FMFNKGLNPMI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GPMFMAAKCFE; // 0x18
		::RPG::GameCore::DynamicFloat* NNKMEMKEPPA; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMFNKGLNPMI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FMFNKGLNPMI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FMFNKGLNPMI*))((::PBYTE)hIl2Cpp + FMFNKGLNPMI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FMFNKGLNPMI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FMFNKGLNPMI*))((::PBYTE)hIl2Cpp + FMFNKGLNPMI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
