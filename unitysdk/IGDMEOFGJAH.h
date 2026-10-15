#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class IGDMEOFGJAH;

#define IGDMEOFGJAH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEF9F20)
#define IGDMEOFGJAH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CEF9F30)
#define IGDMEOFGJAH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CEF9EF0)

inline static constexpr unsigned int IGDMEOFGJAH_TypeDefinitionIndex = 19883;

	class IGDMEOFGJAH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single LNENLJCDGID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDMEOFGJAH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IGDMEOFGJAH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IGDMEOFGJAH*))((::PBYTE)hIl2Cpp + IGDMEOFGJAH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::IGDMEOFGJAH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IGDMEOFGJAH*))((::PBYTE)hIl2Cpp + IGDMEOFGJAH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
