#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FIMPMCCMPPE_FCDGLADNKBH_WaitingState.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define FIMPMCCMPPE_FCDGLADNKBH_BPPILILFAHI_OFFSET UNITYSDK_OFFSET(0x166CFBE0)
#define FIMPMCCMPPE_FCDGLADNKBH_CTOR_OFFSET UNITYSDK_OFFSET(0x166CF2A0)
#define FIMPMCCMPPE_FCDGLADNKBH_JCNGMJOEDHJ_OFFSET UNITYSDK_OFFSET(0x166CFB40)
#define FIMPMCCMPPE_FCDGLADNKBH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x166CF970)
#define FIMPMCCMPPE_FCDGLADNKBH_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x166CF920)
#define FIMPMCCMPPE_FCDGLADNKBH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x166CF750)
#define FIMPMCCMPPE_FCDGLADNKBH_LKINLAMMGID_OFFSET UNITYSDK_OFFSET(0x166CF8D0)

inline static constexpr unsigned int FIMPMCCMPPE_FCDGLADNKBH_TypeDefinitionIndex = 60212;

	class FIMPMCCMPPE_FCDGLADNKBH : public ::System::Object
	{
	public:
		::UnityEngine::Animator* PMNEFFHNIAK; // 0x10
		::UnityEngine::Animation* COPMANIKIIA; // 0x18
		::FIMPMCCMPPE_FCDGLADNKBH_WaitingState DLNIGFGLPLJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMPMCCMPPE_FCDGLADNKBH_CTOR_OFFSET))(this);
		}

		::System::Boolean KPJGDHLENIP(::UnityEngine::Transform* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + FIMPMCCMPPE_FCDGLADNKBH_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Boolean LKINLAMMGID()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMPMCCMPPE_FCDGLADNKBH_LKINLAMMGID_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMPMCCMPPE_FCDGLADNKBH_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FIMPMCCMPPE_FCDGLADNKBH_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean JCNGMJOEDHJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMPMCCMPPE_FCDGLADNKBH_JCNGMJOEDHJ_OFFSET))(this);
		}

		::System::Boolean BPPILILFAHI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMPMCCMPPE_FCDGLADNKBH_BPPILILFAHI_OFFSET))(this);
		}

	};
