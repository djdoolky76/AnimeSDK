#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
class HEHPINDHNON;
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { template <typename T> class IGroup_1; }

#define CMNPNBHOIJM_BJOBAAEPAFP_OFFSET UNITYSDK_OFFSET(0xDA36180)
#define CMNPNBHOIJM_CTOR_OFFSET UNITYSDK_OFFSET(0xDA35670)
#define CMNPNBHOIJM_EXECUTE_OFFSET UNITYSDK_OFFSET(0xDA35750)
#define CMNPNBHOIJM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xDA35710)
#define CMNPNBHOIJM_NLIKKGJKNJF_OFFSET UNITYSDK_OFFSET(0xDA36C70)
#define CMNPNBHOIJM_NOCPEOHJFOE_OFFSET UNITYSDK_OFFSET(0xDA35A40)
#define CMNPNBHOIJM_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xDA36C30)

inline static constexpr unsigned int CMNPNBHOIJM_TypeDefinitionIndex = 77157;

	class CMNPNBHOIJM : public ::System::Object
	{
	public:
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x10
		::NDDFLGNNMDK* FKINCGODJEP; // 0x18
		::Entitas::IGroup_1<::HIOEAKHGILF*>* EJNOEADLPEK; // 0x20
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
