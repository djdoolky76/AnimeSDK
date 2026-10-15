#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define KAFGBNNMFGL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB2D5FF0)
#define KAFGBNNMFGL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB2D6030)
#define KAFGBNNMFGL___C__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0xB2D6040)
#define KAFGBNNMFGL___C__ONTASKBEGIN_B__1_1_OFFSET UNITYSDK_OFFSET(0xB2D6050)

inline static constexpr unsigned int KAFGBNNMFGL___c_TypeDefinitionIndex = 52650;

	class KAFGBNNMFGL___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Int32, ::System::Single>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Single>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2F780);
		}

		static ::System::Func_2<::System::Int32, ::System::Single>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::System::Int32, ::System::Single>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2F788);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2F790);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KAFGBNNMFGL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAFGBNNMFGL___C_CTOR_OFFSET))(this);
		}

		::System::Single _OnTaskBegin_b__1_0(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KAFGBNNMFGL___C__ONTASKBEGIN_B__1_0_OFFSET))(this, a1);
		}

		::System::Single _OnTaskBegin_b__1_1(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KAFGBNNMFGL___C__ONTASKBEGIN_B__1_1_OFFSET))(this, a1);
		}

	};
