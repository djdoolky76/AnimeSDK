#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Material; }

#define OKOCMKPKEPA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBEF2E10)
#define OKOCMKPKEPA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBEF2E50)
#define OKOCMKPKEPA___C___CTOR_B__30_0_OFFSET UNITYSDK_OFFSET(0xBEF2E60)

	class OKOCMKPKEPA___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::Material*, ::UnityEngine::Material*>** StaticGet___9__30_0()
		{
			return (::System::Func_2<::UnityEngine::Material*, ::UnityEngine::Material*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56F20);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56F28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKOCMKPKEPA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOCMKPKEPA___C_CTOR_OFFSET))(this);
		}

		::UnityEngine::Material* __ctor_b__30_0(::UnityEngine::Material* a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + OKOCMKPKEPA___C___CTOR_B__30_0_OFFSET))(this, a1);
		}

	};
