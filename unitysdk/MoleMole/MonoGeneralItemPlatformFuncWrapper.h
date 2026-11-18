#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class FBHPDPBIGPK;
namespace MoleMole { class UIBaseController; }
namespace System { class EventArgs; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER_BBOMPEENOJB_OFFSET UNITYSDK_OFFSET(0x12B62150)
#define MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER_CHCLDJFDJIL_OFFSET UNITYSDK_OFFSET(0x12B62000)
#define MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER_INIT_OFFSET UNITYSDK_OFFSET(0x12B61910)
#define MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER_KONGCDPEAFE_OFFSET UNITYSDK_OFFSET(0x12B623E0)
#define MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER_LEEIIKCDLJE_OFFSET UNITYSDK_OFFSET(0x12B621F0)
#define MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER_MAMNIGKOFLN_OFFSET UNITYSDK_OFFSET(0x12B61980)
#define MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER_NGPOOKMBOLH_OFFSET UNITYSDK_OFFSET(0x12B62820)
#define MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x12B62100)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGeneralItemPlatformFuncWrapper_TypeDefinitionIndex = 48135;

	class MonoGeneralItemPlatformFuncWrapper : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* NameTrans; // 0x18
		::UnityEngine::UI::Extension::UILocalizationText* Name; // 0x20
		::UnityEngine::Transform* PlatformIDTrans; // 0x28
		::UnityEngine::UI::Extension::UILocalizationText* PlatformOnlineID; // 0x30
		::UnityEngine::UI::Image* PlatformIcon; // 0x38
		::UnityEngine::Transform* PCIDTrans; // 0x40
		::UnityEngine::UI::Extension::UILocalizationText* PCID; // 0x48
		::MoleMole::UIBaseController* DCLGMFLNFNG; // 0x50
		::FBHPDPBIGPK* GDCLMGGIEGF; // 0x58
		::System::Boolean CMHBOEIKBLG; // 0x60
		::System::Boolean AOOBMBKAMII; // 0x61
		::System::Byte _padding0[0x6];
		::UnityEngine::UI::Extension::UILocalizationText* APGMDFGJFAH; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER__CTOR_OFFSET))(this);
		}

		::System::Void Init(::MoleMole::UIBaseController* NCIMBHDKIJM, ::FBHPDPBIGPK* GBJOIIAJFKL)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::FBHPDPBIGPK*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER_INIT_OFFSET))(this, NCIMBHDKIJM, GBJOIIAJFKL);
		}

		::System::Void BBOMPEENOJB(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER_BBOMPEENOJB_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Void LEEIIKCDLJE(::System::Boolean JLHONNMFNHJ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER_LEEIIKCDLJE_OFFSET))(this, JLHONNMFNHJ);
		}

		::System::Void KONGCDPEAFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER_KONGCDPEAFE_OFFSET))(this);
		}

		::System::Void MAMNIGKOFLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER_MAMNIGKOFLN_OFFSET))(this);
		}

		::System::Void CHCLDJFDJIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER_CHCLDJFDJIL_OFFSET))(this);
		}

		::System::Void NGPOOKMBOLH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALITEMPLATFORMFUNCWRAPPER_NGPOOKMBOLH_OFFSET))(this);
		}
	};
}
