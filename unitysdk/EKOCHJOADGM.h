#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BNLHGENFEHG;
class FDPALAEIHPB;
class HNDIJDAJBNH;
class PGBLBOJBDGG;
namespace UnityEngine { class Transform; }

#define EKOCHJOADGM_AFANEJAMLIN_OFFSET UNITYSDK_OFFSET(0x155070B0)
#define EKOCHJOADGM_APCGKNBLMPE_OFFSET UNITYSDK_OFFSET(0x15506430)
#define EKOCHJOADGM_CCTOR_OFFSET UNITYSDK_OFFSET(0x155089D0)
#define EKOCHJOADGM_CKCFLDHDBIG_OFFSET UNITYSDK_OFFSET(0x15507A30)
#define EKOCHJOADGM_CTOR_OFFSET UNITYSDK_OFFSET(0x15506290)
#define EKOCHJOADGM_EXECUTE_OFFSET UNITYSDK_OFFSET(0x155062D0)
#define EKOCHJOADGM_FKNGIDNPNGE_OFFSET UNITYSDK_OFFSET(0x155068F0)
#define EKOCHJOADGM_FNCEDJLDBMC_OFFSET UNITYSDK_OFFSET(0x15506DD0)
#define EKOCHJOADGM_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x15506D90)

inline static constexpr unsigned int EKOCHJOADGM_TypeDefinitionIndex = 77272;

	class EKOCHJOADGM : public ::System::Object
	{
	public:
		::BNLHGENFEHG* PDENFEFCAGN; // 0x10
		::HNDIJDAJBNH* EEOKAMAGEKP; // 0x18
		::PGBLBOJBDGG* EEFMDEHLLFI; // 0x20
		::System::Single PJJLEJDPNHI; // 0x28
		::UnityEngine::Vector2 MNOKAIAOCPH; // 0x2C
		::UnityEngine::Ray PNGHABAEDBC; // 0x34
		::UnityEngine::Vector3 ODJNEAOMGIL; // 0x4C
		static ::System::Single* StaticGet_GAPFHIBIGBD()
		{
			return (::System::Single*)UnitySDK::FromName("", "EKOCHJOADGM")->GetStaticField(0xB900);
		}

		::System::Void _ctor(::FDPALAEIHPB* a1, ::BNLHGENFEHG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::BNLHGENFEHG*))((::PBYTE)hIl2Cpp + EKOCHJOADGM_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKOCHJOADGM_CCTOR_OFFSET))();
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOCHJOADGM_EXECUTE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOCHJOADGM_TEARDOWN_OFFSET))(this);
		}

		::System::Void FNCEDJLDBMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOCHJOADGM_FNCEDJLDBMC_OFFSET))(this);
		}

		::System::Void AFANEJAMLIN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EKOCHJOADGM_AFANEJAMLIN_OFFSET))(this, a1);
		}

		::System::Void APCGKNBLMPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOCHJOADGM_APCGKNBLMPE_OFFSET))(this);
		}

		::System::Void FKNGIDNPNGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOCHJOADGM_FKNGIDNPNGE_OFFSET))(this);
		}

		::System::Boolean CKCFLDHDBIG(::UnityEngine::Transform* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + EKOCHJOADGM_CKCFLDHDBIG_OFFSET))(this, a1);
		}

	};
