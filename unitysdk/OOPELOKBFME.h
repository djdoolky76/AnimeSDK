#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBCMHADMLOP.h"
#include "unitysdk/PFIGIPFMDHO.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace UnityEngine { class Collider; }

#define OOPELOKBFME_AAFMOAMOILM_OFFSET UNITYSDK_OFFSET(0xC8979D0)
#define OOPELOKBFME_AJNIEEOPFCA_OFFSET UNITYSDK_OFFSET(0xC898C00)
#define OOPELOKBFME_CCTOR_OFFSET UNITYSDK_OFFSET(0xC8991F0)
#define OOPELOKBFME_CKOHELHMPFM_OFFSET UNITYSDK_OFFSET(0xC8991D0)
#define OOPELOKBFME_CTOR_OFFSET UNITYSDK_OFFSET(0xC8991E0)
#define OOPELOKBFME_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0xC8979C0)
#define OOPELOKBFME_JDCLKAFLGNL_OFFSET UNITYSDK_OFFSET(0xC897700)
#define OOPELOKBFME_JMOKABKDLFJ_OFFSET UNITYSDK_OFFSET(0xC897C90)
#define OOPELOKBFME_KLFCHLLJLEK_OFFSET UNITYSDK_OFFSET(0xC898A10)
#define OOPELOKBFME_LHKNGJBAAIA_OFFSET UNITYSDK_OFFSET(0xC898DF0)
#define OOPELOKBFME_MJLNIAKBHOA_OFFSET UNITYSDK_OFFSET(0xC897F50)
#define OOPELOKBFME_NBNHABPGIIB_OFFSET UNITYSDK_OFFSET(0xC897B30)
#define OOPELOKBFME_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0xC898FE0)
#define OOPELOKBFME_NNCBMAJEMOD_OFFSET UNITYSDK_OFFSET(0xC884FA0)
#define OOPELOKBFME_ONINIT_OFFSET UNITYSDK_OFFSET(0xC896E10)
#define OOPELOKBFME_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xC8972E0)
#define OOPELOKBFME_PHGOPGMPGNP_OFFSET UNITYSDK_OFFSET(0xC898880)

inline static constexpr unsigned int OOPELOKBFME_TypeDefinitionIndex = 61564;

	class OOPELOKBFME : public ::HBCMHADMLOP
	{
	public:
		::RPG::GameCore::GameEntity* LFCEGIBFIGG; // 0x20
		::PFIGIPFMDHO LKFNPEJCKCL; // 0x28
		::RPG::GameCore::GameEntity* CMNJDMKPPIA; // 0x30
		static ::Il2CppArray<::System::UInt32>** StaticGet_GHEOGBPFPHE()
		{
			return (::Il2CppArray<::System::UInt32>**)UnitySDK::FromName("", "OOPELOKBFME")->GetStaticField(0x5B590);
		}

		static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_ICFIGLGAALH()
		{
			return (::Il2CppArray<::UnityEngine::Collider*>**)UnitySDK::FromName("", "OOPELOKBFME")->GetStaticField(0x5B598);
		}

		// static const ::System::Object NCCGNFPJILH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOPELOKBFME_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOPELOKBFME_CCTOR_OFFSET))();
		}

		::System::Void OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOPELOKBFME_ONINIT_OFFSET))(this);
		}

		::System::Void OnUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOPELOKBFME_ONUNINIT_OFFSET))(this);
		}

		::System::Boolean get_NeedTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OOPELOKBFME_GET_NEEDTICK_OFFSET))(this);
		}

		::System::Void NNCBMAJEMOD(::RPG::GameCore::GameEntity* a1, ::PFIGIPFMDHO a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::PFIGIPFMDHO))((::PBYTE)hIl2Cpp + OOPELOKBFME_NNCBMAJEMOD_OFFSET))(this, a1, a2);
		}

		::System::Void JDCLKAFLGNL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OOPELOKBFME_JDCLKAFLGNL_OFFSET))(this, a1);
		}

		::System::Void JMOKABKDLFJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OOPELOKBFME_JMOKABKDLFJ_OFFSET))(this, a1);
		}

		::System::Boolean MJLNIAKBHOA(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OOPELOKBFME_MJLNIAKBHOA_OFFSET))(this, a1);
		}

		::System::Void NBNHABPGIIB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OOPELOKBFME_NBNHABPGIIB_OFFSET))(this, a1);
		}

		::System::Void AAFMOAMOILM(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OOPELOKBFME_AAFMOAMOILM_OFFSET))(this, a1);
		}

		::System::Void PHGOPGMPGNP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOPELOKBFME_PHGOPGMPGNP_OFFSET))(this);
		}

		::System::Void KLFCHLLJLEK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OOPELOKBFME_KLFCHLLJLEK_OFFSET))(this, a1);
		}

		::System::Void AJNIEEOPFCA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OOPELOKBFME_AJNIEEOPFCA_OFFSET))(this, a1);
		}

		::System::Void LHKNGJBAAIA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OOPELOKBFME_LHKNGJBAAIA_OFFSET))(this, a1);
		}

		::System::Void NMPLHCJKEOI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OOPELOKBFME_NMPLHCJKEOI_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* CKOHELHMPFM()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOPELOKBFME_CKOHELHMPFM_OFFSET))(this);
		}

	};
