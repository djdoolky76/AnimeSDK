#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPPAJJILOHB_LKAEJCFKLMO_ShowMatState.h"
#include "unitysdk/System/Object.h"
class GPPAJJILOHB_PFGHFGKDNFP;
namespace RPG::CustomRP { class AvatarEffectInfo_PerRendererEffect; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define GPPAJJILOHB_LKAEJCFKLMO_CCTOR_OFFSET UNITYSDK_OFFSET(0x15B67A10)
#define GPPAJJILOHB_LKAEJCFKLMO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x15B66BC0)
#define GPPAJJILOHB_LKAEJCFKLMO_CTOR_OFFSET UNITYSDK_OFFSET(0x15B67010)
#define GPPAJJILOHB_LKAEJCFKLMO_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x15B670C0)
#define GPPAJJILOHB_LKAEJCFKLMO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B65E10)
#define GPPAJJILOHB_LKAEJCFKLMO_LNGDBLEKGHG_OFFSET UNITYSDK_OFFSET(0x15B66950)
#define GPPAJJILOHB_LKAEJCFKLMO_NOFHFKNDBAO_OFFSET UNITYSDK_OFFSET(0x15B669B0)
#define GPPAJJILOHB_LKAEJCFKLMO_OOBNBAKOAAA_OFFSET UNITYSDK_OFFSET(0x15B66C20)
#define GPPAJJILOHB_LKAEJCFKLMO_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x15B666C0)

	class GPPAJJILOHB_LKAEJCFKLMO : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* LNOPCAPDCKM; // 0x10
		::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect* DFNKOLPGMFI; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* ABAJIOEFDFB; // 0x20
		::System::Single IOLLMKEKMOK; // 0x28
		::System::Single MODIMDALIKJ; // 0x2C
		::System::Single PBADKCDFOMM; // 0x30
		::System::Single LLEAJIENJKP; // 0x34
		::System::Single FLMBFHONNIM; // 0x38
		::GPPAJJILOHB_LKAEJCFKLMO_ShowMatState KDFJODAIIBB; // 0x3C
		static ::Il2CppArray<::System::Int32>** StaticGet_DPOBOPKPMHI()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("", "LKAEJCFKLMO")->GetStaticField(0x6D8E0);
		}

		static ::System::Int32* StaticGet_NIBJBLMPNDF()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LKAEJCFKLMO")->GetStaticField(0x151B0);
		}

		// static const ::System::String* KBOPDMIDNEI; // 0x0
		::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::Material* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Material*, ::System::Single))((::PBYTE)hIl2Cpp + GPPAJJILOHB_LKAEJCFKLMO_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::UnityEngine::Transform* a1, ::UnityEngine::Material* a2, ::GPPAJJILOHB_PFGHFGKDNFP* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Material*, ::GPPAJJILOHB_PFGHFGKDNFP*))((::PBYTE)hIl2Cpp + GPPAJJILOHB_LKAEJCFKLMO_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPPAJJILOHB_LKAEJCFKLMO_CCTOR_OFFSET))();
		}

		::System::Void DIOEAJEHHND(::UnityEngine::Transform* a1, ::UnityEngine::Material* a2, ::GPPAJJILOHB_PFGHFGKDNFP* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Material*, ::GPPAJJILOHB_PFGHFGKDNFP*))((::PBYTE)hIl2Cpp + GPPAJJILOHB_LKAEJCFKLMO_DIOEAJEHHND_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPAJJILOHB_LKAEJCFKLMO_DISPOSE_OFFSET))(this);
		}

		::System::Void NOFHFKNDBAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPAJJILOHB_LKAEJCFKLMO_NOFHFKNDBAO_OFFSET))(this);
		}

		::System::Void LNGDBLEKGHG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPAJJILOHB_LKAEJCFKLMO_LNGDBLEKGHG_OFFSET))(this);
		}

		::System::Void OOBNBAKOAAA(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GPPAJJILOHB_LKAEJCFKLMO_OOBNBAKOAAA_OFFSET))(this, a1, a2);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GPPAJJILOHB_LKAEJCFKLMO_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
