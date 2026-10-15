#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroProperty.h"
namespace EnviromentSystem { class EnviroLocalLightGroupProperty; }
namespace EnviromentSystem { class EnviroProperty; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENVIROMENTSYSTEM_ENVIROLOCALLIGHTGROUPPROPERTY_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1560F4A0)
#define ENVIROMENTSYSTEM_ENVIROLOCALLIGHTGROUPPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1560DC30)
#define ENVIROMENTSYSTEM_ENVIROLOCALLIGHTGROUPPROPERTY_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x1560F640)
#define ENVIROMENTSYSTEM_ENVIROLOCALLIGHTGROUPPROPERTY_DJLFAEMMMDK_OFFSET UNITYSDK_OFFSET(0x1560F690)
#define ENVIROMENTSYSTEM_ENVIROLOCALLIGHTGROUPPROPERTY_DNJIAAJGNMJ_OFFSET UNITYSDK_OFFSET(0x15610250)
#define ENVIROMENTSYSTEM_ENVIROLOCALLIGHTGROUPPROPERTY_EAIHBIMFKPE_OFFSET UNITYSDK_OFFSET(0x156101A0)
#define ENVIROMENTSYSTEM_ENVIROLOCALLIGHTGROUPPROPERTY_HGHNADHAMOG_OFFSET UNITYSDK_OFFSET(0x156104F0)
#define ENVIROMENTSYSTEM_ENVIROLOCALLIGHTGROUPPROPERTY_LGNNAOLPNIP_OFFSET UNITYSDK_OFFSET(0x1560F9B0)
#define ENVIROMENTSYSTEM_ENVIROLOCALLIGHTGROUPPROPERTY_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0x156102D0)

namespace EnviromentSystem
{
	class EnviroLocalLightGroupProperty : public ::EnviromentSystem::EnviroProperty
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* m_Value; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* _LutMap; // 0x50
		::System::Boolean LUTDirty; // 0x58
		::System::Void _ctor(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROLOCALLIGHTGROUPPROPERTY_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::EnviromentSystem::EnviroLocalLightGroupProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroLocalLightGroupProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROLOCALLIGHTGROUPPROPERTY_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROLOCALLIGHTGROUPPROPERTY_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void LGNNAOLPNIP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROLOCALLIGHTGROUPPROPERTY_LGNNAOLPNIP_OFFSET))(this, a1);
		}

		::System::Void DNJIAAJGNMJ(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROLOCALLIGHTGROUPPROPERTY_DNJIAAJGNMJ_OFFSET))(this, a1);
		}

		::System::Void EAIHBIMFKPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROLOCALLIGHTGROUPPROPERTY_EAIHBIMFKPE_OFFSET))(this);
		}

		::System::Void PPEGOIODAKI(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROLOCALLIGHTGROUPPROPERTY_PPEGOIODAKI_OFFSET))(this, a1);
		}

		::System::Single HGHNADHAMOG(::System::String* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROLOCALLIGHTGROUPPROPERTY_HGHNADHAMOG_OFFSET))(this, a1);
		}

		::System::Void DJLFAEMMMDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROLOCALLIGHTGROUPPROPERTY_DJLFAEMMMDK_OFFSET))(this);
		}

	};
}
