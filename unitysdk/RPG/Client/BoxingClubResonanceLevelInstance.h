#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BoxingClubLevelInstance.h"
class CIEEKOEECHB;
namespace RPG::Client { class ScheduleData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD5E0A0)
#define RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_GETOPTIONALBUFFID_OFFSET UNITYSDK_OFFSET(0x1BD5EDA0)
#define RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_GET_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1BD5F160)
#define RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_GET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x1BD5F000)
#define RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_SENDCHOOSEBOXINGCLUBRESONANCEOPTIONALBUFFREQ_OFFSET UNITYSDK_OFFSET(0x1BD5E170)
#define RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_SENDCHOOSEBOXINGCLUBRESONANCEREQ_OFFSET UNITYSDK_OFFSET(0x1BD5E0B0)
#define RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_STARTBOXINGCLUBRESONANCE_OFFSET UNITYSDK_OFFSET(0x1BD5E960)
#define RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_SYNCRESONANCE_OFFSET UNITYSDK_OFFSET(0x1BD5E230)
#define RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_TRYSHOWNEXTROUNDINFOPAGE_OFFSET UNITYSDK_OFFSET(0x1BD5E280)

namespace RPG::Client
{
	inline static constexpr unsigned int BoxingClubResonanceLevelInstance_TypeDefinitionIndex = 64398;

	class BoxingClubResonanceLevelInstance : public ::RPG::Client::BoxingClubLevelInstance
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_CTOR_OFFSET))(this, a1);
		}

		::System::Void SendChooseBoxingClubResonanceReq(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_SENDCHOOSEBOXINGCLUBRESONANCEREQ_OFFSET))(this, a1);
		}

		::System::Void SendChooseBoxingClubResonanceOptionalBuffReq(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_SENDCHOOSEBOXINGCLUBRESONANCEOPTIONALBUFFREQ_OFFSET))(this, a1);
		}

		::System::Void SyncResonance(::CIEEKOEECHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIEEKOEECHB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_SYNCRESONANCE_OFFSET))(this, a1);
		}

		::System::Void TryShowNextRoundInfoPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_TRYSHOWNEXTROUNDINFOPAGE_OFFSET))(this);
		}

		::System::Void StartBoxingClubResonance(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_STARTBOXINGCLUBRESONANCE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetOptionalBuffID()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_GETOPTIONALBUFFID_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get_ScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_GET_SCHEDULEDATA_OFFSET))(this);
		}

		::System::Boolean get_IsInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBRESONANCELEVELINSTANCE_GET_ISINSCHEDULE_OFFSET))(this);
		}

	};
}
