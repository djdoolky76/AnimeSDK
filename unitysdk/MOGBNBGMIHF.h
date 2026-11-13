#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LEEEMFAEDLN.h"
class MOGBNBGMIHF;
namespace UnityEngine { class Component; }
namespace UnityEngine { class Transform; }

#define MOGBNBGMIHF_CIHFGJDCHIA_OFFSET UNITYSDK_OFFSET(0x1B213010)
#define MOGBNBGMIHF_CTOR_OFFSET UNITYSDK_OFFSET(0x1B213490)
#define MOGBNBGMIHF_GGGJDBCCADM_OFFSET UNITYSDK_OFFSET(0x1B213400)
#define MOGBNBGMIHF_ISDONE_OFFSET UNITYSDK_OFFSET(0x1B213210)
#define MOGBNBGMIHF_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1B2131C0)
#define MOGBNBGMIHF_NDPIBCMCJCM_OFFSET UNITYSDK_OFFSET(0x1B212F00)
#define MOGBNBGMIHF_OALHOEELNIA_OFFSET UNITYSDK_OFFSET(0x1B212EF0)
#define MOGBNBGMIHF_OJKBPPHNOIP_OFFSET UNITYSDK_OFFSET(0x1B213370)
#define MOGBNBGMIHF_PINNFKNBBEL_OFFSET UNITYSDK_OFFSET(0x1B212EE0)
#define MOGBNBGMIHF_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0x1B212F70)
#define MOGBNBGMIHF_STEP_OFFSET UNITYSDK_OFFSET(0x1B213260)

inline static constexpr unsigned int MOGBNBGMIHF_TypeDefinitionIndex = 75656;

	class MOGBNBGMIHF : public ::LEEEMFAEDLN
	{
	public:
		::System::Single BFOKLNJOFAI; // 0x30
		::System::Boolean KJPAPBHCGIN; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGBNBGMIHF_CTOR_OFFSET))(this);
		}

		::System::Single PINNFKNBBEL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGBNBGMIHF_PINNFKNBBEL_OFFSET))(this);
		}

		::System::Boolean OALHOEELNIA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGBNBGMIHF_OALHOEELNIA_OFFSET))(this);
		}

		::System::Boolean NDPIBCMCJCM(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOGBNBGMIHF_NDPIBCMCJCM_OFFSET))(this, a1);
		}

		::System::Void StartWithTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOGBNBGMIHF_STARTWITHTARGET_OFFSET))(this, a1);
		}

		::System::Void CIHFGJDCHIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGBNBGMIHF_CIHFGJDCHIA_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGBNBGMIHF_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Boolean IsDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGBNBGMIHF_ISDONE_OFFSET))(this);
		}

		::System::Void Step(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOGBNBGMIHF_STEP_OFFSET))(this, a1);
		}

		::MOGBNBGMIHF* OJKBPPHNOIP(::UnityEngine::Component* a1)
		{
			return ((::MOGBNBGMIHF*(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + MOGBNBGMIHF_OJKBPPHNOIP_OFFSET))(this, a1);
		}

		::MOGBNBGMIHF* GGGJDBCCADM(::UnityEngine::Transform* a1)
		{
			return ((::MOGBNBGMIHF*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOGBNBGMIHF_GGGJDBCCADM_OFFSET))(this, a1);
		}

	};
