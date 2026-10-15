#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLFIGBPHLHI;
class GOEKCFLMFFO;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define ODCPCHEIMKK_AGHABIKPPNO_OFFSET UNITYSDK_OFFSET(0xBD8FDA0)
#define ODCPCHEIMKK_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0xBD8F2A0)
#define ODCPCHEIMKK_CTOR_OFFSET UNITYSDK_OFFSET(0xBD8F1C0)
#define ODCPCHEIMKK_EAFGOEBBJJO_OFFSET UNITYSDK_OFFSET(0xBD8FA00)
#define ODCPCHEIMKK_EDOAOGNPJDO_OFFSET UNITYSDK_OFFSET(0xBD8F630)
#define ODCPCHEIMKK_EEJFPHJHDNC_OFFSET UNITYSDK_OFFSET(0xBD8FC80)
#define ODCPCHEIMKK_FKOEBJADPKP_OFFSET UNITYSDK_OFFSET(0xBD8F300)
#define ODCPCHEIMKK_FMPEIOJAJKG_OFFSET UNITYSDK_OFFSET(0xBD8FCE0)
#define ODCPCHEIMKK_KCPIKIJIMHL_OFFSET UNITYSDK_OFFSET(0xBD8F860)
#define ODCPCHEIMKK_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBD8FD30)

	class ODCPCHEIMKK : public ::System::Object
	{
	public:
		::GOEKCFLMFFO* DIDIJLEPPGH; // 0x10
		::UnityEngine::GameObject* FOEDLGPOINO; // 0x18
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::GOEKCFLMFFO*>* MAPGAJCHDFF; // 0x20
		::System::Single KIKIMCMLLKN; // 0x28
		::System::Boolean CFCCLEAFGPI; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCPCHEIMKK_CTOR_OFFSET))(this);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCPCHEIMKK_BJMNKLGEMPM_OFFSET))(this);
		}

		::System::Void FKOEBJADPKP(::CLFIGBPHLHI* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::CLFIGBPHLHI*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + ODCPCHEIMKK_FKOEBJADPKP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EDOAOGNPJDO(::CLFIGBPHLHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLFIGBPHLHI*))((::PBYTE)hIl2Cpp + ODCPCHEIMKK_EDOAOGNPJDO_OFFSET))(this, a1);
		}

		::System::Void KCPIKIJIMHL(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ODCPCHEIMKK_KCPIKIJIMHL_OFFSET))(this, a1);
		}

		::System::Void EAFGOEBBJJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCPCHEIMKK_EAFGOEBBJJO_OFFSET))(this);
		}

		::System::Void EEJFPHJHDNC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ODCPCHEIMKK_EEJFPHJHDNC_OFFSET))(this, a1);
		}

		::System::Void FMPEIOJAJKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCPCHEIMKK_FMPEIOJAJKG_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCPCHEIMKK_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Void AGHABIKPPNO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ODCPCHEIMKK_AGHABIKPPNO_OFFSET))(this, a1);
		}

	};
