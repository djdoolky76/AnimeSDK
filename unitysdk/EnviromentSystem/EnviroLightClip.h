#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviromentClip.h"
namespace EnviromentSystem { class EnviroLightClip; }
namespace EnviromentSystem { class EnviroProperty; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENVIROMENTSYSTEM_ENVIROLIGHTCLIP_CTOR_OFFSET UNITYSDK_OFFSET(0x155FDAE0)
#define ENVIROMENTSYSTEM_ENVIROLIGHTCLIP_LNNPIBBDGNM_OFFSET UNITYSDK_OFFSET(0x155FDA40)
#define ENVIROMENTSYSTEM_ENVIROLIGHTCLIP_PFIGNLEBGEH_OFFSET UNITYSDK_OFFSET(0x155FDAF0)

namespace EnviromentSystem
{
	class EnviroLightClip : public ::EnviromentSystem::EnviromentClip
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROLIGHTCLIP_CTOR_OFFSET))(this);
		}

		static ::EnviromentSystem::EnviroLightClip* LNNPIBBDGNM(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::EnviromentSystem::EnviroLightClip*(*)(::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROLIGHTCLIP_LNNPIBBDGNM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>* PFIGNLEBGEH(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>*(*)(::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROLIGHTCLIP_PFIGNLEBGEH_OFFSET))(a1);
		}

	};
}
