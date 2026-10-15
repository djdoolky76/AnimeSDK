#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKKMKFFFCAA;
class JEOCDNBFEBF;
class NFICHOKOCMH;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CGNHALFCLJB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCC8C510)
#define CGNHALFCLJB___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCC8C550)
#define CGNHALFCLJB___C__GET_REACTIVEDRAGGED_B__22_0_OFFSET UNITYSDK_OFFSET(0xCC8C5D0)
#define CGNHALFCLJB___C__GET_REACTIVEIDLE_B__17_0_OFFSET UNITYSDK_OFFSET(0xCC8C560)

inline static constexpr unsigned int CGNHALFCLJB___c_TypeDefinitionIndex = 79518;

	class CGNHALFCLJB___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::JEOCDNBFEBF*, ::NFICHOKOCMH*>** StaticGet___9__17_0()
		{
			return (::System::Func_2<::JEOCDNBFEBF*, ::NFICHOKOCMH*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26770);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26778);
		}

		static ::System::Func_2<::JEOCDNBFEBF*, ::CKKMKFFFCAA*>** StaticGet___9__22_0()
		{
			return (::System::Func_2<::JEOCDNBFEBF*, ::CKKMKFFFCAA*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26780);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGNHALFCLJB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGNHALFCLJB___C_CTOR_OFFSET))(this);
		}

		::NFICHOKOCMH* _get_ReactiveIdle_b__17_0(::JEOCDNBFEBF* a1)
		{
			return ((::NFICHOKOCMH*(*)(::PVOID, ::JEOCDNBFEBF*))((::PBYTE)hIl2Cpp + CGNHALFCLJB___C__GET_REACTIVEIDLE_B__17_0_OFFSET))(this, a1);
		}

		::CKKMKFFFCAA* _get_ReactiveDragged_b__22_0(::JEOCDNBFEBF* a1)
		{
			return ((::CKKMKFFFCAA*(*)(::PVOID, ::JEOCDNBFEBF*))((::PBYTE)hIl2Cpp + CGNHALFCLJB___C__GET_REACTIVEDRAGGED_B__22_0_OFFSET))(this, a1);
		}

	};
