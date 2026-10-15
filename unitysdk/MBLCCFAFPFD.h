#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MBLCCFAFPFD_MPPAFMHFEEA;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::GameCore { class FiveDimRTPCConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MBLCCFAFPFD_ALFMHBHCKOF_OFFSET UNITYSDK_OFFSET(0xB85FE70)
#define MBLCCFAFPFD_CMHNGDDPFFB_OFFSET UNITYSDK_OFFSET(0xB860160)
#define MBLCCFAFPFD_COBDNLCNDED_OFFSET UNITYSDK_OFFSET(0xB860A50)
#define MBLCCFAFPFD_CTOR_OFFSET UNITYSDK_OFFSET(0xB85FAA0)
#define MBLCCFAFPFD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB85FBE0)
#define MBLCCFAFPFD_DMEABHILNOD_OFFSET UNITYSDK_OFFSET(0xB8603F0)
#define MBLCCFAFPFD_FNOACBMHFKA_OFFSET UNITYSDK_OFFSET(0xB8609D0)
#define MBLCCFAFPFD_JIFPPKNBGMH_OFFSET UNITYSDK_OFFSET(0xB860B50)
#define MBLCCFAFPFD_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB85FC60)
#define MBLCCFAFPFD_KAOPDJDKIMF_OFFSET UNITYSDK_OFFSET(0xB860760)
#define MBLCCFAFPFD_MGMDCDBEMNK_OFFSET UNITYSDK_OFFSET(0xB8604D0)

	class MBLCCFAFPFD : public ::System::Object
	{
	public:
		::RPG::PoolDictionary_2<::System::String*, ::RPG::GameCore::FiveDimRTPCConfig*>* PBOCHNGLHGK; // 0x10
		::RPG::PoolDictionary_2<::System::String*, ::System::Object*>* DFLEJHNNIJL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLCCFAFPFD_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLCCFAFPFD_DISPOSE_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLCCFAFPFD_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void CMHNGDDPFFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLCCFAFPFD_CMHNGDDPFFB_OFFSET))(this);
		}

		::RPG::GameCore::FiveDimRTPCConfig* DMEABHILNOD(::System::String* a1)
		{
			return ((::RPG::GameCore::FiveDimRTPCConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MBLCCFAFPFD_DMEABHILNOD_OFFSET))(this, a1);
		}

		::System::Void MGMDCDBEMNK(::System::String* a1, ::System::Single a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MBLCCFAFPFD_MGMDCDBEMNK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KAOPDJDKIMF(::System::String* a1, ::System::Single a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MBLCCFAFPFD_KAOPDJDKIMF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ALFMHBHCKOF(::MBLCCFAFPFD_MPPAFMHFEEA* a1, ::RPG::GameCore::FiveDimRTPCConfig* a2, ::System::Single a3, ::UnityEngine::GameObject* a4)
		{
			return ((::System::Void(*)(::PVOID, ::MBLCCFAFPFD_MPPAFMHFEEA*, ::RPG::GameCore::FiveDimRTPCConfig*, ::System::Single, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MBLCCFAFPFD_ALFMHBHCKOF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void FNOACBMHFKA(::System::String* a1, ::System::Single a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MBLCCFAFPFD_FNOACBMHFKA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void COBDNLCNDED(::System::String* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MBLCCFAFPFD_COBDNLCNDED_OFFSET))(this, a1, a2);
		}

		::System::Void JIFPPKNBGMH(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MBLCCFAFPFD_JIFPPKNBGMH_OFFSET))(this, a1, a2);
		}

	};
