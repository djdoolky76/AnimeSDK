#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class JIFDLHEIPHD;

#define JIFDLHEIPHD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0346C0)
#define JIFDLHEIPHD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0346D0)
#define JIFDLHEIPHD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D034600)

inline static constexpr unsigned int JIFDLHEIPHD_TypeDefinitionIndex = 22120;

	class JIFDLHEIPHD : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIFDLHEIPHD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JIFDLHEIPHD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JIFDLHEIPHD*))((::PBYTE)hIl2Cpp + JIFDLHEIPHD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::JIFDLHEIPHD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JIFDLHEIPHD*))((::PBYTE)hIl2Cpp + JIFDLHEIPHD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
