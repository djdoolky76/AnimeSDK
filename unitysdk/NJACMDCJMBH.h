#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NJACMDCJMBH;

#define NJACMDCJMBH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1E7820)
#define NJACMDCJMBH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D1E7830)
#define NJACMDCJMBH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1E77F0)

inline static constexpr unsigned int NJACMDCJMBH_TypeDefinitionIndex = 21451;

	class NJACMDCJMBH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean MOKNCFJICIC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJACMDCJMBH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NJACMDCJMBH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NJACMDCJMBH*))((::PBYTE)hIl2Cpp + NJACMDCJMBH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NJACMDCJMBH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NJACMDCJMBH*))((::PBYTE)hIl2Cpp + NJACMDCJMBH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
