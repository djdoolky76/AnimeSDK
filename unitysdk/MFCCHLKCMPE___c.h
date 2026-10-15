#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MFCCHLKCMPE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB8E7BC0)
#define MFCCHLKCMPE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB8E7C00)
#define MFCCHLKCMPE___C__CONVERTTOBINARYFORMAT_B__1_0_OFFSET UNITYSDK_OFFSET(0xB8E7C10)
#define MFCCHLKCMPE___C__CONVERTTOBINARYFORMAT_B__1_1_OFFSET UNITYSDK_OFFSET(0xB8E7C20)

inline static constexpr unsigned int MFCCHLKCMPE___c_TypeDefinitionIndex = 73759;

	class MFCCHLKCMPE___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::System::Int32, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x639F0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x639F8);
		}

		static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x63A00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFCCHLKCMPE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCCHLKCMPE___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _ConvertToBinaryFormat_b__1_0(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MFCCHLKCMPE___C__CONVERTTOBINARYFORMAT_B__1_0_OFFSET))(this, a1);
		}

		::System::Boolean _ConvertToBinaryFormat_b__1_1(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MFCCHLKCMPE___C__CONVERTTOBINARYFORMAT_B__1_1_OFFSET))(this, a1);
		}

	};
