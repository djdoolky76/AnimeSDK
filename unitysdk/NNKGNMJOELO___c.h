#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define NNKGNMJOELO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBCC0550)
#define NNKGNMJOELO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBCC0590)
#define NNKGNMJOELO___C__GETMERGEDITEMINCOMELIST_B__9_0_OFFSET UNITYSDK_OFFSET(0xBCC05A0)

inline static constexpr unsigned int NNKGNMJOELO___c_TypeDefinitionIndex = 77753;

	class NNKGNMJOELO___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::ValueTuple_2<::System::UInt32, ::System::Int32>>** StaticGet___9__9_0()
		{
			return (::System::Comparison_1<::System::ValueTuple_2<::System::UInt32, ::System::Int32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4F080);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4F088);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNKGNMJOELO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKGNMJOELO___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetMergedItemIncomeList_b__9_0(::System::ValueTuple_2<::System::UInt32, ::System::Int32> a1, ::System::ValueTuple_2<::System::UInt32, ::System::Int32> a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::Int32>, ::System::ValueTuple_2<::System::UInt32, ::System::Int32>))((::PBYTE)hIl2Cpp + NNKGNMJOELO___C__GETMERGEDITEMINCOMELIST_B__9_0_OFFSET))(this, a1, a2);
		}

	};
