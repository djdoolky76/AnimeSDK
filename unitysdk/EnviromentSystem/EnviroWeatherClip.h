#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviromentClip.h"
namespace EnviromentSystem { class EnviroProperty; }
namespace EnviromentSystem { class EnviroWeatherClip; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENVIROMENTSYSTEM_ENVIROWEATHERCLIP_CTOR_OFFSET UNITYSDK_OFFSET(0x15622460)
#define ENVIROMENTSYSTEM_ENVIROWEATHERCLIP_LNNPIBBDGNM_OFFSET UNITYSDK_OFFSET(0x156223C0)
#define ENVIROMENTSYSTEM_ENVIROWEATHERCLIP_PFIGNLEBGEH_OFFSET UNITYSDK_OFFSET(0x15622470)

namespace EnviromentSystem
{
	class EnviroWeatherClip : public ::EnviromentSystem::EnviromentClip
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROWEATHERCLIP_CTOR_OFFSET))(this);
		}

		static ::EnviromentSystem::EnviroWeatherClip* LNNPIBBDGNM(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::EnviromentSystem::EnviroWeatherClip*(*)(::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROWEATHERCLIP_LNNPIBBDGNM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>* PFIGNLEBGEH(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>*(*)(::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROWEATHERCLIP_PFIGNLEBGEH_OFFSET))(a1);
		}

	};
}
