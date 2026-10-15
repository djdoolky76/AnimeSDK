#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroAssetProperty.h"
namespace EnviromentSystem { class EnviroProperty; }
namespace EnviromentSystem { class EnviroReflectionProbeProperty; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY_AFHGEEMLPLC_OFFSET UNITYSDK_OFFSET(0x1561B670)
#define ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY_AOHGNELBJOB_OFFSET UNITYSDK_OFFSET(0x1561B280)
#define ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY_CIDBPDMJMMJ_OFFSET UNITYSDK_OFFSET(0x1561B4A0)
#define ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY_CTOR_1_OFFSET UNITYSDK_OFFSET(0x15618FB0)
#define ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1560DD50)
#define ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY_DCEDDCPIHPC_OFFSET UNITYSDK_OFFSET(0x1561B7B0)
#define ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x156197E0)
#define ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY_EAIHBIMFKPE_OFFSET UNITYSDK_OFFSET(0x1561A970)
#define ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY_FMDIMGPGIHD_OFFSET UNITYSDK_OFFSET(0x15619470)
#define ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY_KIJHKHCLJBL_OFFSET UNITYSDK_OFFSET(0x1561B0E0)
#define ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY_LGNNAOLPNIP_OFFSET UNITYSDK_OFFSET(0x15619E40)
#define ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0x1561A450)

namespace EnviromentSystem
{
	class EnviroReflectionProbeProperty : public ::EnviromentSystem::EnviroAssetProperty
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* m_ReflectionProbes; // 0x50
		::System::Void _ctor(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::EnviromentSystem::EnviroReflectionProbeProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroReflectionProbeProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY_CTOR_1_OFFSET))(this, a1);
		}

		::System::Boolean FMDIMGPGIHD(::EnviromentSystem::EnviroReflectionProbeProperty* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviroReflectionProbeProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY_FMDIMGPGIHD_OFFSET))(this, a1);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void LGNNAOLPNIP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY_LGNNAOLPNIP_OFFSET))(this, a1);
		}

		::System::Void PPEGOIODAKI(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY_PPEGOIODAKI_OFFSET))(this, a1);
		}

		::System::Void KIJHKHCLJBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY_KIJHKHCLJBL_OFFSET))(this);
		}

		::System::Void AOHGNELBJOB(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY_AOHGNELBJOB_OFFSET))(this, a1, a2);
		}

		::System::Void CIDBPDMJMMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY_CIDBPDMJMMJ_OFFSET))(this);
		}

		::System::Void AFHGEEMLPLC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY_AFHGEEMLPLC_OFFSET))(this);
		}

		::System::Void EAIHBIMFKPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY_EAIHBIMFKPE_OFFSET))(this);
		}

		::System::Void DCEDDCPIHPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY_DCEDDCPIHPC_OFFSET))(this);
		}

	};
}
