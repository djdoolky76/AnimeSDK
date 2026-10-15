#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
class HEHPINDHNON;
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { class IGroup; }

#define CMNPNBHOIJM_BJOBAAEPAFP_OFFSET UNITYSDK_OFFSET(0xDA3D7D0)
#define CMNPNBHOIJM_CTOR_OFFSET UNITYSDK_OFFSET(0xDA3CCC0)
#define CMNPNBHOIJM_EXECUTE_OFFSET UNITYSDK_OFFSET(0xDA3CDA0)
#define CMNPNBHOIJM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xDA3CD60)
#define CMNPNBHOIJM_NLIKKGJKNJF_OFFSET UNITYSDK_OFFSET(0xDA3E2C0)
#define CMNPNBHOIJM_NOCPEOHJFOE_OFFSET UNITYSDK_OFFSET(0xDA3D090)
#define CMNPNBHOIJM_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xDA3E280)

	class CMNPNBHOIJM : public ::System::Object
	{
	public:
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x10
		::Entitas::IGroup* EJNOEADLPEK; // 0x18
		::NDDFLGNNMDK* FKINCGODJEP; // 0x20
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + CMNPNBHOIJM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMNPNBHOIJM_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMNPNBHOIJM_EXECUTE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMNPNBHOIJM_TEARDOWN_OFFSET))(this);
		}

		::System::Void NOCPEOHJFOE(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + CMNPNBHOIJM_NOCPEOHJFOE_OFFSET))(this, a1);
		}

		::System::Void BJOBAAEPAFP(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + CMNPNBHOIJM_BJOBAAEPAFP_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 NLIKKGJKNJF(::HEHPINDHNON* a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::HEHPINDHNON*))((::PBYTE)hIl2Cpp + CMNPNBHOIJM_NLIKKGJKNJF_OFFSET))(this, a1);
		}

	};
