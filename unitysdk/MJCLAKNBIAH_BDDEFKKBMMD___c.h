#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKLECLLJCEH;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MJCLAKNBIAH_BDDEFKKBMMD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB9638B0)
#define MJCLAKNBIAH_BDDEFKKBMMD___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB9638F0)
#define MJCLAKNBIAH_BDDEFKKBMMD___C___CREATETRAITS_B__10_0_OFFSET UNITYSDK_OFFSET(0xB963900)

inline static constexpr unsigned int MJCLAKNBIAH_BDDEFKKBMMD___c_TypeDefinitionIndex = 79739;

	class MJCLAKNBIAH_BDDEFKKBMMD___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::FKLECLLJCEH*, ::System::Boolean>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::FKLECLLJCEH*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69A90);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69A98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJCLAKNBIAH_BDDEFKKBMMD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCLAKNBIAH_BDDEFKKBMMD___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __CreateTraits_b__10_0(::FKLECLLJCEH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKLECLLJCEH*))((::PBYTE)hIl2Cpp + MJCLAKNBIAH_BDDEFKKBMMD___C___CREATETRAITS_B__10_0_OFFSET))(this, a1);
		}

	};
