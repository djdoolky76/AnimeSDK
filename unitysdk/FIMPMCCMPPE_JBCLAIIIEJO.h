#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RPGAnimationEvent; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define FIMPMCCMPPE_JBCLAIIIEJO_APGHPEDFPIL_OFFSET UNITYSDK_OFFSET(0x157A31D0)
#define FIMPMCCMPPE_JBCLAIIIEJO_CTOR_OFFSET UNITYSDK_OFFSET(0x157A25C0)
#define FIMPMCCMPPE_JBCLAIIIEJO_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x157A3170)
#define FIMPMCCMPPE_JBCLAIIIEJO_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x157A3130)
#define FIMPMCCMPPE_JBCLAIIIEJO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x157A2FA0)
#define FIMPMCCMPPE_JBCLAIIIEJO_LKINLAMMGID_OFFSET UNITYSDK_OFFSET(0x157A30F0)

inline static constexpr unsigned int FIMPMCCMPPE_JBCLAIIIEJO_TypeDefinitionIndex = 58938;

	class FIMPMCCMPPE_JBCLAIIIEJO : public ::System::Object
	{
	public:
		::RPG::Client::RPGAnimationEvent* NAAEEHNDPCJ; // 0x10
		::System::Boolean INJJGMIGFFD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMPMCCMPPE_JBCLAIIIEJO_CTOR_OFFSET))(this);
		}

		::System::Boolean KPJGDHLENIP(::UnityEngine::Transform* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + FIMPMCCMPPE_JBCLAIIIEJO_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Boolean LKINLAMMGID()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMPMCCMPPE_JBCLAIIIEJO_LKINLAMMGID_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMPMCCMPPE_JBCLAIIIEJO_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FIMPMCCMPPE_JBCLAIIIEJO_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void APGHPEDFPIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMPMCCMPPE_JBCLAIIIEJO_APGHPEDFPIL_OFFSET))(this);
		}

	};
