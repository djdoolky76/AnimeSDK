#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AchievementData; }
namespace RPG::Client { class IsometricViewModule; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HLBDEFLOBIO_CTOR_OFFSET UNITYSDK_OFFSET(0x15D5A3A0)
#define HLBDEFLOBIO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D59730)
#define HLBDEFLOBIO_FOEFKIBDGMD_OFFSET UNITYSDK_OFFSET(0x15D59770)
#define HLBDEFLOBIO_GIKHNIDBMCP_OFFSET UNITYSDK_OFFSET(0x15D59ED0)
#define HLBDEFLOBIO_HFFPBOBJADB_OFFSET UNITYSDK_OFFSET(0x15D59B20)
#define HLBDEFLOBIO_JGMLLOGAFFE_OFFSET UNITYSDK_OFFSET(0x15D59680)

	class HLBDEFLOBIO : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* FIIICPCKMGM; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* PEKHPFIABFP; // 0x18
		::RPG::Client::AchievementData* JDHNECALNJB; // 0x20
		::RPG::Client::AchievementData* BBCKPPKLFII; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* HJFEGLFPIHA; // 0x30
		::System::UInt32 KLEFBLNIMJE; // 0x38
		::System::UInt32 EAOPIJCBMIJ; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBDEFLOBIO_CTOR_OFFSET))(this);
		}

		::System::Void JGMLLOGAFFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBDEFLOBIO_JGMLLOGAFFE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBDEFLOBIO_DISPOSE_OFFSET))(this);
		}

		::System::Void FOEFKIBDGMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBDEFLOBIO_FOEFKIBDGMD_OFFSET))(this);
		}

		::System::Void HFFPBOBJADB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBDEFLOBIO_HFFPBOBJADB_OFFSET))(this);
		}

		::System::Void GIKHNIDBMCP(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::Client::IsometricViewModule* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::Client::IsometricViewModule*))((::PBYTE)hIl2Cpp + HLBDEFLOBIO_GIKHNIDBMCP_OFFSET))(this, a1, a2, a3);
		}

	};
