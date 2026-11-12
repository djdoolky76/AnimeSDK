#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKLECLLJCEH;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MJCLAKNBIAH_BDDEFKKBMMD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC21F8D0)
#define MJCLAKNBIAH_BDDEFKKBMMD___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC21F910)
#define MJCLAKNBIAH_BDDEFKKBMMD___C___CREATETRAITS_B__10_0_OFFSET UNITYSDK_OFFSET(0xC21F920)

inline static constexpr unsigned int MJCLAKNBIAH_BDDEFKKBMMD___c_TypeDefinitionIndex = 82517;

	class MJCLAKNBIAH_BDDEFKKBMMD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x736B0);
		}

		static ::System::Func_2<::FKLECLLJCEH*, ::System::Boolean>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::FKLECLLJCEH*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x736B8);
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
