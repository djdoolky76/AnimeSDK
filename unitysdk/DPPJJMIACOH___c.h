#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAKADGHNMFK;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define DPPJJMIACOH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x126615B0)
#define DPPJJMIACOH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x126615F0)
#define DPPJJMIACOH___C___TRYAPPLY_B__4_0_OFFSET UNITYSDK_OFFSET(0x12661600)

inline static constexpr unsigned int DPPJJMIACOH___c_TypeDefinitionIndex = 77469;

	class DPPJJMIACOH___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::KAKADGHNMFK*>** StaticGet___9__4_0()
		{
			return (::System::Comparison_1<::KAKADGHNMFK*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F980);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F988);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPPJJMIACOH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPJJMIACOH___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __TryApply_b__4_0(::KAKADGHNMFK* a1, ::KAKADGHNMFK* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::KAKADGHNMFK*, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + DPPJJMIACOH___C___TRYAPPLY_B__4_0_OFFSET))(this, a1, a2);
		}

	};
