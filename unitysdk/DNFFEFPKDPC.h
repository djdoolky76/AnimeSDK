#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFJHNEJLDPG.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DNFFEFPKDPC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MonoBehaviour; }

#define DNFFEFPKDPC_AIEADKNIADN_OFFSET UNITYSDK_OFFSET(0x1CA2F940)
#define DNFFEFPKDPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA2FC80)
#define DNFFEFPKDPC_EKDMEIHGIOB_OFFSET UNITYSDK_OFFSET(0x1CA2FBC0)
#define DNFFEFPKDPC_HAFOLABPGFH_OFFSET UNITYSDK_OFFSET(0x1CA2F800)
#define DNFFEFPKDPC_KJGMCDBJPLM_OFFSET UNITYSDK_OFFSET(0x1CA2F6C0)
#define DNFFEFPKDPC_MKGCOBMBCFL_OFFSET UNITYSDK_OFFSET(0x1CA2FA80)

	class DNFFEFPKDPC : public ::DFJHNEJLDPG
	{
	public:
		::System::String* IBCPOFKJGDH; // 0x68
		::UnityEngine::MonoBehaviour* KCKBEDBOFPN; // 0x70
		::UnityEngine::GameObject* CDANMPGNPHN; // 0x78
		::DNFFEFPKDPC* BNLCCCCMABF; // 0x80
		::System::Collections::Generic::List_1<::DNFFEFPKDPC*>* EGGCADJJJOD; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNFFEFPKDPC_CTOR_OFFSET))(this);
		}

		::System::Single KJGMCDBJPLM(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DNFFEFPKDPC_KJGMCDBJPLM_OFFSET))(this, a1);
		}

		::System::Single HAFOLABPGFH(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DNFFEFPKDPC_HAFOLABPGFH_OFFSET))(this, a1);
		}

		::System::Single AIEADKNIADN(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DNFFEFPKDPC_AIEADKNIADN_OFFSET))(this, a1);
		}

		::System::Single MKGCOBMBCFL(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DNFFEFPKDPC_MKGCOBMBCFL_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 EKDMEIHGIOB()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DNFFEFPKDPC_EKDMEIHGIOB_OFFSET))(this);
		}

	};
