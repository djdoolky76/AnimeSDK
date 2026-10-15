#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class JLEOGCMFHAF;

#define JLEOGCMFHAF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D017F50)
#define JLEOGCMFHAF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D017F60)
#define JLEOGCMFHAF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D017E90)

inline static constexpr unsigned int JLEOGCMFHAF_TypeDefinitionIndex = 10197;

	class JLEOGCMFHAF : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLEOGCMFHAF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JLEOGCMFHAF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JLEOGCMFHAF*))((::PBYTE)hIl2Cpp + JLEOGCMFHAF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::JLEOGCMFHAF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JLEOGCMFHAF*))((::PBYTE)hIl2Cpp + JLEOGCMFHAF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
