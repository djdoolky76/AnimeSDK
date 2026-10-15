#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FHLEKKNDBBE.h"
#include "unitysdk/System/Object.h"
class DMDDINNHIOE;
namespace System { class Object; }

#define DMDDINNHIOE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1EACB0)
#define DMDDINNHIOE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1EACE0)
#define DMDDINNHIOE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E1EACF0)
#define DMDDINNHIOE___C___CCTOR_B__28_1_OFFSET UNITYSDK_OFFSET(0x1E1EAD80)
#define DMDDINNHIOE___C___CCTOR_B__28_2_OFFSET UNITYSDK_OFFSET(0x1E1EAD90)

	class DMDDINNHIOE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3ED00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMDDINNHIOE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMDDINNHIOE___C_CTOR_OFFSET))(this);
		}

		::DMDDINNHIOE* __cctor_b__28_0()
		{
			return ((::DMDDINNHIOE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMDDINNHIOE___C___CCTOR_B__28_0_OFFSET))(this);
		}

		::System::Int32 __cctor_b__28_1(::FHLEKKNDBBE a1)
		{
			return ((::System::Int32(*)(::PVOID, ::FHLEKKNDBBE))((::PBYTE)hIl2Cpp + DMDDINNHIOE___C___CCTOR_B__28_1_OFFSET))(this, a1);
		}

		::FHLEKKNDBBE __cctor_b__28_2(::System::Int32 a1)
		{
			return ((::FHLEKKNDBBE(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DMDDINNHIOE___C___CCTOR_B__28_2_OFFSET))(this, a1);
		}

	};
