#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class LDKNJHJGAFN;

#define LDKNJHJGAFN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E94BE10)
#define LDKNJHJGAFN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E94BE20)
#define LDKNJHJGAFN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E94BD50)

inline static constexpr unsigned int LDKNJHJGAFN_TypeDefinitionIndex = 22133;

	class LDKNJHJGAFN : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDKNJHJGAFN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LDKNJHJGAFN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LDKNJHJGAFN*))((::PBYTE)hIl2Cpp + LDKNJHJGAFN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LDKNJHJGAFN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LDKNJHJGAFN*))((::PBYTE)hIl2Cpp + LDKNJHJGAFN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
