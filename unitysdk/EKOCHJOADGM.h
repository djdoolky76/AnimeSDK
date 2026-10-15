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

#define EKOCHJOADGM_AFANEJAMLIN_OFFSET UNITYSDK_OFFSET(0x15512D20)
#define EKOCHJOADGM_APCGKNBLMPE_OFFSET UNITYSDK_OFFSET(0x155120A0)
#define EKOCHJOADGM_CCTOR_OFFSET UNITYSDK_OFFSET(0x15514640)
#define EKOCHJOADGM_CKCFLDHDBIG_OFFSET UNITYSDK_OFFSET(0x155136A0)
#define EKOCHJOADGM_CTOR_OFFSET UNITYSDK_OFFSET(0x15511F00)
#define EKOCHJOADGM_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15511F40)
#define EKOCHJOADGM_FKNGIDNPNGE_OFFSET UNITYSDK_OFFSET(0x15512560)
#define EKOCHJOADGM_FNCEDJLDBMC_OFFSET UNITYSDK_OFFSET(0x15512A40)
#define EKOCHJOADGM_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x15512A00)

	class EKOCHJOADGM : public ::System::Object
	{
	public:
		::BNLHGENFEHG* PDENFEFCAGN; // 0x10
		::HNDIJDAJBNH* EEOKAMAGEKP; // 0x18
		::PGBLBOJBDGG* EEFMDEHLLFI; // 0x20
		::UnityEngine::Ray PNGHABAEDBC; // 0x28
		::UnityEngine::Vector2 MNOKAIAOCPH; // 0x40
		::UnityEngine::Vector3 ODJNEAOMGIL; // 0x48
		::System::Single PJJLEJDPNHI; // 0x54
		static ::System::Single* StaticGet_GAPFHIBIGBD()
		{
			return (::System::Single*)UnitySDK::FromName("", "EKOCHJOADGM")->GetStaticField(0x11020);
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
