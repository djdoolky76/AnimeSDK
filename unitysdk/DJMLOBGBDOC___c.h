#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGNHALFCLJB;
class JEOCDNBFEBF;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define DJMLOBGBDOC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xF23B100)
#define DJMLOBGBDOC___C_CTOR_OFFSET UNITYSDK_OFFSET(0xF23B140)
#define DJMLOBGBDOC___C__GET_REACTIVESELECTED_B__8_0_OFFSET UNITYSDK_OFFSET(0xF23B150)

inline static constexpr unsigned int DJMLOBGBDOC___c_TypeDefinitionIndex = 79509;

	class DJMLOBGBDOC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53A70);
		}

		static ::System::Func_2<::JEOCDNBFEBF*, ::CGNHALFCLJB*>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::JEOCDNBFEBF*, ::CGNHALFCLJB*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53A78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJMLOBGBDOC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMLOBGBDOC___C_CTOR_OFFSET))(this);
		}

		::CGNHALFCLJB* _get_ReactiveSelected_b__8_0(::JEOCDNBFEBF* a1)
		{
			return ((::CGNHALFCLJB*(*)(::PVOID, ::JEOCDNBFEBF*))((::PBYTE)hIl2Cpp + DJMLOBGBDOC___C__GET_REACTIVESELECTED_B__8_0_OFFSET))(this, a1);
		}

	};
