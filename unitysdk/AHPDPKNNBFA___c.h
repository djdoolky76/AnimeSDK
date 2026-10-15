#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define AHPDPKNNBFA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xEB86E60)
#define AHPDPKNNBFA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xEB86EA0)
#define AHPDPKNNBFA___C___CALCCHENLINGEXTRACOINNUMTERM_B__5_0_OFFSET UNITYSDK_OFFSET(0xEB86EC0)
#define AHPDPKNNBFA___C___CALCCHENLINGEXTRAMULTIPLIERTERM_B__8_0_OFFSET UNITYSDK_OFFSET(0xEB86EE0)
#define AHPDPKNNBFA___C___CALCITEMEXTRACOINNUMTERM_B__4_0_OFFSET UNITYSDK_OFFSET(0xEB86EB0)
#define AHPDPKNNBFA___C___CALCITEMEXTRAMULTIPLIERTERM_B__7_0_OFFSET UNITYSDK_OFFSET(0xEB86ED0)

inline static constexpr unsigned int AHPDPKNNBFA___c_TypeDefinitionIndex = 52657;

	class AHPDPKNNBFA___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Int32, ::System::Single>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Single>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52C30);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52C38);
		}

		static ::System::Func_2<::System::Int32, ::System::Single>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Single>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52C40);
		}

		static ::System::Func_2<::System::Int32, ::System::Single>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Single>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52C48);
		}

		static ::System::Func_2<::System::Int32, ::System::Single>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Single>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52C50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHPDPKNNBFA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHPDPKNNBFA___C_CTOR_OFFSET))(this);
		}

		::System::Single __CalcItemExtraCoinNumTerm_b__4_0(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AHPDPKNNBFA___C___CALCITEMEXTRACOINNUMTERM_B__4_0_OFFSET))(this, a1);
		}

		::System::Single __CalcChenLingExtraCoinNumTerm_b__5_0(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AHPDPKNNBFA___C___CALCCHENLINGEXTRACOINNUMTERM_B__5_0_OFFSET))(this, a1);
		}

		::System::Single __CalcItemExtraMultiplierTerm_b__7_0(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AHPDPKNNBFA___C___CALCITEMEXTRAMULTIPLIERTERM_B__7_0_OFFSET))(this, a1);
		}

		::System::Single __CalcChenLingExtraMultiplierTerm_b__8_0(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AHPDPKNNBFA___C___CALCCHENLINGEXTRAMULTIPLIERTERM_B__8_0_OFFSET))(this, a1);
		}

	};
