#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MFCCHLKCMPE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x17C779A0)
#define MFCCHLKCMPE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x17C779E0)
#define MFCCHLKCMPE___C__CONVERTTOBINARYFORMAT_B__1_0_OFFSET UNITYSDK_OFFSET(0x17C779F0)
#define MFCCHLKCMPE___C__CONVERTTOBINARYFORMAT_B__1_1_OFFSET UNITYSDK_OFFSET(0x17C77A00)

inline static constexpr unsigned int MFCCHLKCMPE___c_TypeDefinitionIndex = 75883;

	class MFCCHLKCMPE___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::System::Int32, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x73390);
		}

		static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x73398);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x733A0);
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
