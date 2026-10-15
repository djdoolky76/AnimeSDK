#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAKADGHNMFK;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define FLKEAGCAIFG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15837330)
#define FLKEAGCAIFG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15837370)
#define FLKEAGCAIFG___C___REORDER_B__5_0_OFFSET UNITYSDK_OFFSET(0x15837380)

	class FLKEAGCAIFG___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::KAKADGHNMFK*>** StaticGet___9__5_0()
		{
			return (::System::Comparison_1<::KAKADGHNMFK*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54350);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54358);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLKEAGCAIFG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLKEAGCAIFG___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __ReOrder_b__5_0(::KAKADGHNMFK* a1, ::KAKADGHNMFK* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::KAKADGHNMFK*, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + FLKEAGCAIFG___C___REORDER_B__5_0_OFFSET))(this, a1, a2);
		}

	};
