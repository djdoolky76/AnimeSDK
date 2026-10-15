#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFLICGOLBIG;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define GPDLKLOEOJG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15B429E0)
#define GPDLKLOEOJG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15B42A20)
#define GPDLKLOEOJG___C__SORTHOLDEDDICES_B__83_0_OFFSET UNITYSDK_OFFSET(0x15B42A30)

inline static constexpr unsigned int GPDLKLOEOJG___c_TypeDefinitionIndex = 60319;

	class GPDLKLOEOJG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6EA50);
		}

		static ::System::Comparison_1<::IFLICGOLBIG*>** StaticGet___9__83_0()
		{
			return (::System::Comparison_1<::IFLICGOLBIG*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6EA58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPDLKLOEOJG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _SortHoldedDices_b__83_0(::IFLICGOLBIG* a1, ::IFLICGOLBIG* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::IFLICGOLBIG*, ::IFLICGOLBIG*))((::PBYTE)hIl2Cpp + GPDLKLOEOJG___C__SORTHOLDEDDICES_B__83_0_OFFSET))(this, a1, a2);
		}

	};
