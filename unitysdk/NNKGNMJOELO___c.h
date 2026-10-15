#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define NNKGNMJOELO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBCC7690)
#define NNKGNMJOELO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBCC76D0)
#define NNKGNMJOELO___C__GETMERGEDITEMINCOMELIST_B__9_0_OFFSET UNITYSDK_OFFSET(0xBCC76E0)

inline static constexpr unsigned int NNKGNMJOELO___c_TypeDefinitionIndex = 77754;

	class NNKGNMJOELO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54560);
		}

		static ::System::Comparison_1<::System::ValueTuple>** StaticGet___9__9_0()
		{
			return (::System::Comparison_1<::System::ValueTuple>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54568);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNKGNMJOELO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKGNMJOELO___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetMergedItemIncomeList_b__9_0(::System::ValueTuple a1, ::System::ValueTuple a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple, ::System::ValueTuple))((::PBYTE)hIl2Cpp + NNKGNMJOELO___C__GETMERGEDITEMINCOMELIST_B__9_0_OFFSET))(this, a1, a2);
		}

	};
