#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviromentClip.h"
namespace EnviromentSystem { class EnviroProperty; }
namespace EnviromentSystem { class EnviroSkyClip; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENVIROMENTSYSTEM_ENVIROSKYCLIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1561C2A0)
#define ENVIROMENTSYSTEM_ENVIROSKYCLIP_LNNPIBBDGNM_OFFSET UNITYSDK_OFFSET(0x1561C200)
#define ENVIROMENTSYSTEM_ENVIROSKYCLIP_PFIGNLEBGEH_OFFSET UNITYSDK_OFFSET(0x1561C2B0)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroSkyClip_TypeDefinitionIndex = 49580;

	class EnviroSkyClip : public ::EnviromentSystem::EnviromentClip
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROSKYCLIP_CTOR_OFFSET))(this);
		}

		static ::EnviromentSystem::EnviroSkyClip* LNNPIBBDGNM(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::EnviromentSystem::EnviroSkyClip*(*)(::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROSKYCLIP_LNNPIBBDGNM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>* PFIGNLEBGEH(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>*(*)(::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROSKYCLIP_PFIGNLEBGEH_OFFSET))(a1);
		}

	};
}
