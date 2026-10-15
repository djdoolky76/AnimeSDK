#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDLKLEPOLOK;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { class KeyValuePair; }

#define BIIIEFAKFPF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB4ACEE0)
#define BIIIEFAKFPF___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB4ACF20)
#define BIIIEFAKFPF___C___CTOR_B__39_0_OFFSET UNITYSDK_OFFSET(0xB4ACF30)

inline static constexpr unsigned int BIIIEFAKFPF___c_TypeDefinitionIndex = 80109;

	class BIIIEFAKFPF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F1E0);
		}

		static ::System::Func_2<::GDLKLEPOLOK*, ::System::Collections::Generic::KeyValuePair*>** StaticGet___9__39_0()
		{
			return (::System::Func_2<::GDLKLEPOLOK*, ::System::Collections::Generic::KeyValuePair*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F1E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BIIIEFAKFPF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIIIEFAKFPF___C_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::KeyValuePair* __ctor_b__39_0(::GDLKLEPOLOK* a1)
		{
			return ((::System::Collections::Generic::KeyValuePair*(*)(::PVOID, ::GDLKLEPOLOK*))((::PBYTE)hIl2Cpp + BIIIEFAKFPF___C___CTOR_B__39_0_OFFSET))(this, a1);
		}

	};
