#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class LODGEMFGOHI;

#define LODGEMFGOHI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E41C430)
#define LODGEMFGOHI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E41C440)
#define LODGEMFGOHI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E41C3E0)

inline static constexpr unsigned int LODGEMFGOHI_TypeDefinitionIndex = 23043;

	class LODGEMFGOHI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean FDEBALCGJOH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LODGEMFGOHI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LODGEMFGOHI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LODGEMFGOHI*))((::PBYTE)hIl2Cpp + LODGEMFGOHI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LODGEMFGOHI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LODGEMFGOHI*))((::PBYTE)hIl2Cpp + LODGEMFGOHI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
