#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define IPKBMMPHPGL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D6E5560)
#define IPKBMMPHPGL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E55A0)
#define IPKBMMPHPGL___C___TRYCREATECHIPSPREDICATETRACKER_B__2_0_OFFSET UNITYSDK_OFFSET(0x1D6E55B0)

inline static constexpr unsigned int IPKBMMPHPGL___c_TypeDefinitionIndex = 42811;

	class IPKBMMPHPGL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10180);
		}

		static ::System::Func_2<::System::Int32, ::System::UInt32>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::System::Int32, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10188);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPKBMMPHPGL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPKBMMPHPGL___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 __TryCreateChipsPredicateTracker_b__2_0(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IPKBMMPHPGL___C___TRYCREATECHIPSPREDICATETRACKER_B__2_0_OFFSET))(this, a1);
		}

	};
