#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
class GDLKLEPOLOK;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define BIIIEFAKFPF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BABB4D0)
#define BIIIEFAKFPF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BABB510)
#define BIIIEFAKFPF___C___CTOR_B__39_0_OFFSET UNITYSDK_OFFSET(0x1BABB520)

inline static constexpr unsigned int BIIIEFAKFPF___c_TypeDefinitionIndex = 82885;

	class BIIIEFAKFPF___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::GDLKLEPOLOK*, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>>** StaticGet___9__39_0()
		{
			return (::System::Func_2<::GDLKLEPOLOK*, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x661E0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x661E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BIIIEFAKFPF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIIIEFAKFPF___C_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32> __ctor_b__39_0(::GDLKLEPOLOK* a1)
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>(*)(::PVOID, ::GDLKLEPOLOK*))((::PBYTE)hIl2Cpp + BIIIEFAKFPF___C___CTOR_B__39_0_OFFSET))(this, a1);
		}

	};
