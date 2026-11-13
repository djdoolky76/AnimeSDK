#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFIMNLJALNN;
class IHPIHJDMOPL;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define MIDAKCNMMPF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C262820)
#define MIDAKCNMMPF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C262850)
#define MIDAKCNMMPF___C___SORT_B__15_0_OFFSET UNITYSDK_OFFSET(0x1C262860)
#define MIDAKCNMMPF___C___SORT_B__15_1_OFFSET UNITYSDK_OFFSET(0x1C2628E0)

inline static constexpr unsigned int MIDAKCNMMPF___c_TypeDefinitionIndex = 44623;

	class MIDAKCNMMPF___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::GFIMNLJALNN*>** StaticGet___9__15_1()
		{
			return (::System::Comparison_1<::GFIMNLJALNN*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4ECC0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4ECC8);
		}

		static ::System::Comparison_1<::IHPIHJDMOPL*>** StaticGet___9__15_0()
		{
			return (::System::Comparison_1<::IHPIHJDMOPL*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4ECD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIDAKCNMMPF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIDAKCNMMPF___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __Sort_b__15_0(::IHPIHJDMOPL* a1, ::IHPIHJDMOPL* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::IHPIHJDMOPL*, ::IHPIHJDMOPL*))((::PBYTE)hIl2Cpp + MIDAKCNMMPF___C___SORT_B__15_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 __Sort_b__15_1(::GFIMNLJALNN* a1, ::GFIMNLJALNN* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::GFIMNLJALNN*, ::GFIMNLJALNN*))((::PBYTE)hIl2Cpp + MIDAKCNMMPF___C___SORT_B__15_1_OFFSET))(this, a1, a2);
		}

	};
