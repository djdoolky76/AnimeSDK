#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class JNAHFCBAIMM;

#define JNAHFCBAIMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5C80B0)
#define JNAHFCBAIMM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E5C80C0)
#define JNAHFCBAIMM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E5C7FF0)

inline static constexpr unsigned int JNAHFCBAIMM_TypeDefinitionIndex = 22131;

	class JNAHFCBAIMM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNAHFCBAIMM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JNAHFCBAIMM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JNAHFCBAIMM*))((::PBYTE)hIl2Cpp + JNAHFCBAIMM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::JNAHFCBAIMM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JNAHFCBAIMM*))((::PBYTE)hIl2Cpp + JNAHFCBAIMM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
