#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroAssetProperty.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/EnviromentSystem/EnviroParticleProperty_EnviroParticleSystem.h"
namespace EnviromentSystem { class EnviroParticleProperty; }
namespace EnviromentSystem { class EnviroProperty; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_AEOAIJGAGJH_OFFSET UNITYSDK_OFFSET(0x15611550)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_AFHGEEMLPLC_OFFSET UNITYSDK_OFFSET(0x15614FE0)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_AOHGNELBJOB_OFFSET UNITYSDK_OFFSET(0x15614CF0)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_BLIKCEIJELI_OFFSET UNITYSDK_OFFSET(0x15613BB0)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_CIDBPDMJMMJ_OFFSET UNITYSDK_OFFSET(0x15614970)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_CTOR_1_OFFSET UNITYSDK_OFFSET(0x15610840)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x156106C0)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_DCEDDCPIHPC_OFFSET UNITYSDK_OFFSET(0x15613380)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_DGNNCPFGJAK_1_OFFSET UNITYSDK_OFFSET(0x15615700)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_DGNNCPFGJAK_OFFSET UNITYSDK_OFFSET(0x15615610)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x15610F40)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_DLCHAGJCEAE_OFFSET UNITYSDK_OFFSET(0x156135F0)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_DNJIAAJGNMJ_OFFSET UNITYSDK_OFFSET(0x15612B00)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_EAIHBIMFKPE_OFFSET UNITYSDK_OFFSET(0x156131E0)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_EHCOICECCLD_OFFSET UNITYSDK_OFFSET(0x15615C20)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_EOBKINCLBOG_OFFSET UNITYSDK_OFFSET(0x15613850)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_FMDIMGPGIHD_OFFSET UNITYSDK_OFFSET(0x156150E0)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_GAEIODHPDLE_OFFSET UNITYSDK_OFFSET(0x15611E30)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_GOHOOFAPHKP_OFFSET UNITYSDK_OFFSET(0x15614F10)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_IKOHLHDGFKH_OFFSET UNITYSDK_OFFSET(0x15614820)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_KIJHKHCLJBL_OFFSET UNITYSDK_OFFSET(0x15614B50)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_LGNNAOLPNIP_OFFSET UNITYSDK_OFFSET(0x15612B80)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_LPCOOHGAICK_OFFSET UNITYSDK_OFFSET(0x156129D0)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_NIGFADGHBBD_OFFSET UNITYSDK_OFFSET(0x156157E0)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_OGEFMEELCLO_OFFSET UNITYSDK_OFFSET(0x15615BE0)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_PLKPGNCBOGH_1_OFFSET UNITYSDK_OFFSET(0x15615540)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_PLKPGNCBOGH_OFFSET UNITYSDK_OFFSET(0x15615420)
#define ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0x15610BC0)

namespace EnviromentSystem
{
	class EnviroParticleProperty : public ::EnviromentSystem::EnviroAssetProperty
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* m_particleSystem; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* tmpCustomData; // 0x58
		::Il2CppArray<::System::Object*>* tmpparticles; // 0x60
		::System::Void _ctor(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::EnviromentSystem::EnviroParticleProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroParticleProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void PPEGOIODAKI(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_PPEGOIODAKI_OFFSET))(this, a1);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void LPCOOHGAICK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_LPCOOHGAICK_OFFSET))(this);
		}

		::System::Void DNJIAAJGNMJ(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_DNJIAAJGNMJ_OFFSET))(this, a1);
		}

		::System::Void LGNNAOLPNIP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_LGNNAOLPNIP_OFFSET))(this, a1);
		}

		::System::Void DLCHAGJCEAE(::EnviromentSystem::EnviroParticleProperty_EnviroParticleSystem a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroParticleProperty_EnviroParticleSystem))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_DLCHAGJCEAE_OFFSET))(this, a1);
		}

		::System::Void EOBKINCLBOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_EOBKINCLBOG_OFFSET))(this);
		}

		::System::Void IKOHLHDGFKH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_IKOHLHDGFKH_OFFSET))(this, a1);
		}

		::System::Void CIDBPDMJMMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_CIDBPDMJMMJ_OFFSET))(this);
		}

		::System::Void KIJHKHCLJBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_KIJHKHCLJBL_OFFSET))(this);
		}

		::System::Void AOHGNELBJOB(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_AOHGNELBJOB_OFFSET))(this, a1, a2);
		}

		::System::Void GOHOOFAPHKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_GOHOOFAPHKP_OFFSET))(this);
		}

		::System::Void AFHGEEMLPLC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_AFHGEEMLPLC_OFFSET))(this);
		}

		::System::Boolean FMDIMGPGIHD(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_FMDIMGPGIHD_OFFSET))(this, a1);
		}

		::System::Void EAIHBIMFKPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_EAIHBIMFKPE_OFFSET))(this);
		}

		::System::Void DCEDDCPIHPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_DCEDDCPIHPC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* PLKPGNCBOGH(::EnviromentSystem::EnviroParticleProperty_EnviroParticleSystem a1)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector4>*(*)(::PVOID, ::EnviromentSystem::EnviroParticleProperty_EnviroParticleSystem))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_PLKPGNCBOGH_OFFSET))(this, a1);
		}

		::System::Void PLKPGNCBOGH_1(::EnviromentSystem::EnviroParticleProperty_EnviroParticleSystem a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroParticleProperty_EnviroParticleSystem, ::System::Object*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_PLKPGNCBOGH_1_OFFSET))(this, a1, a2);
		}

		::System::Void DGNNCPFGJAK(::EnviromentSystem::EnviroParticleProperty_EnviroParticleSystem a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroParticleProperty_EnviroParticleSystem, ::System::Object*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_DGNNCPFGJAK_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Object*>* DGNNCPFGJAK_1(::EnviromentSystem::EnviroParticleProperty_EnviroParticleSystem a1)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::EnviromentSystem::EnviroParticleProperty_EnviroParticleSystem))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_DGNNCPFGJAK_1_OFFSET))(this, a1);
		}

		::System::Void AEOAIJGAGJH(::EnviromentSystem::EnviroParticleProperty_EnviroParticleSystem a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroParticleProperty_EnviroParticleSystem))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_AEOAIJGAGJH_OFFSET))(this, a1);
		}

		::System::Void NIGFADGHBBD(::EnviromentSystem::EnviroParticleProperty_EnviroParticleSystem a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroParticleProperty_EnviroParticleSystem))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_NIGFADGHBBD_OFFSET))(this, a1);
		}

		::System::Void OGEFMEELCLO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_OGEFMEELCLO_OFFSET))(this);
		}

		::System::Void GAEIODHPDLE(::EnviromentSystem::EnviroParticleProperty_EnviroParticleSystem a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroParticleProperty_EnviroParticleSystem))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_GAEIODHPDLE_OFFSET))(this, a1);
		}

		::System::Void BLIKCEIJELI(::EnviromentSystem::EnviroParticleProperty_EnviroParticleSystem a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroParticleProperty_EnviroParticleSystem))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_BLIKCEIJELI_OFFSET))(this, a1);
		}

		::System::Void EHCOICECCLD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROPARTICLEPROPERTY_EHCOICECCLD_OFFSET))(this);
		}

	};
}
