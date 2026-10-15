#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLGEOHLPFPI;
namespace RPG::GameCore { class AchievementSeriesRow; }

#define HLGEOHLPFPI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15D5F400)
#define HLGEOHLPFPI_CTOR_OFFSET UNITYSDK_OFFSET(0x15D5F4B0)
#define HLGEOHLPFPI_LFELHEMKLHL_OFFSET UNITYSDK_OFFSET(0x15D5F500)
#define HLGEOHLPFPI_MMFEEJAHPLJ_OFFSET UNITYSDK_OFFSET(0x15D5F4C0)

	class HLGEOHLPFPI : public ::System::Object
	{
	public:
		::RPG::GameCore::AchievementSeriesRow* IBPBJBOKKMF; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLGEOHLPFPI_CTOR_OFFSET))(this);
		}

		static ::HLGEOHLPFPI* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::HLGEOHLPFPI*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HLGEOHLPFPI_BPLPBPMEODA_OFFSET))(a1);
		}

		::RPG::GameCore::AchievementSeriesRow* MMFEEJAHPLJ()
		{
			return ((::RPG::GameCore::AchievementSeriesRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLGEOHLPFPI_MMFEEJAHPLJ_OFFSET))(this);
		}

		::System::Void LFELHEMKLHL(::RPG::GameCore::AchievementSeriesRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AchievementSeriesRow*))((::PBYTE)hIl2Cpp + HLGEOHLPFPI_LFELHEMKLHL_OFFSET))(this, a1);
		}

	};
