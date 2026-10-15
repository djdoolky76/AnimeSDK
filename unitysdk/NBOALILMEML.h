#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NBOALILMEML;

#define NBOALILMEML_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1C3E30)
#define NBOALILMEML_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D1C3E40)
#define NBOALILMEML_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1C3E00)

inline static constexpr unsigned int NBOALILMEML_TypeDefinitionIndex = 20239;

	class NBOALILMEML : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single CKBMJFBJOFH; // 0x18
		::System::Boolean DLPKOCANCMM; // 0x1C
		::System::Boolean EKGDOELGLFK; // 0x1D
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBOALILMEML_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NBOALILMEML* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NBOALILMEML*))((::PBYTE)hIl2Cpp + NBOALILMEML_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NBOALILMEML* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NBOALILMEML*))((::PBYTE)hIl2Cpp + NBOALILMEML_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
