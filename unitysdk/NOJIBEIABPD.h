#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NOJIBEIABPD;

#define NOJIBEIABPD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E446EC0)
#define NOJIBEIABPD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E446ED0)
#define NOJIBEIABPD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E446DD0)

inline static constexpr unsigned int NOJIBEIABPD_TypeDefinitionIndex = 21872;

	class NOJIBEIABPD : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOJIBEIABPD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NOJIBEIABPD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NOJIBEIABPD*))((::PBYTE)hIl2Cpp + NOJIBEIABPD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NOJIBEIABPD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NOJIBEIABPD*))((::PBYTE)hIl2Cpp + NOJIBEIABPD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
