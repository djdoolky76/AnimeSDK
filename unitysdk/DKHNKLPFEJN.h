#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class DKHNKLPFEJN;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }

#define DKHNKLPFEJN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD36560)
#define DKHNKLPFEJN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD36570)
#define DKHNKLPFEJN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD36530)

inline static constexpr unsigned int DKHNKLPFEJN_TypeDefinitionIndex = 22614;

	class DKHNKLPFEJN : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* EIMIIHEDKFM; // 0x18
		::RPG::GameCore::DynamicFloat* PPBNKKKIIIN; // 0x20
		::System::Boolean MFIBFJPLCOG; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHNKLPFEJN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DKHNKLPFEJN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DKHNKLPFEJN*))((::PBYTE)hIl2Cpp + DKHNKLPFEJN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DKHNKLPFEJN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DKHNKLPFEJN*))((::PBYTE)hIl2Cpp + DKHNKLPFEJN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
