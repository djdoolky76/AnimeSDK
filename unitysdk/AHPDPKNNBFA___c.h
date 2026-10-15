#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define AHPDPKNNBFA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xEB8C0E0)
#define AHPDPKNNBFA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xEB8C120)
#define AHPDPKNNBFA___C___CALCCHENLINGEXTRACOINNUMTERM_B__5_0_OFFSET UNITYSDK_OFFSET(0xEB8C140)
#define AHPDPKNNBFA___C___CALCCHENLINGEXTRAMULTIPLIERTERM_B__8_0_OFFSET UNITYSDK_OFFSET(0xEB8C160)
#define AHPDPKNNBFA___C___CALCITEMEXTRACOINNUMTERM_B__4_0_OFFSET UNITYSDK_OFFSET(0xEB8C130)
#define AHPDPKNNBFA___C___CALCITEMEXTRAMULTIPLIERTERM_B__7_0_OFFSET UNITYSDK_OFFSET(0xEB8C150)

inline static constexpr unsigned int AHPDPKNNBFA___c_TypeDefinitionIndex = 52657;

	class AHPDPKNNBFA___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Int32, ::System::Single>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Single>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56E20);
		}

		static ::System::Func_2<::System::Int32, ::System::Single>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Single>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56E28);
		}

		static ::System::Func_2<::System::Int32, ::System::Single>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Single>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56E30);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56E38);
		}

		static ::System::Func_2<::System::Int32, ::System::Single>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Single>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56E40);
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
