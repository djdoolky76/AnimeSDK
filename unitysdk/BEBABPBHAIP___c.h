#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define BEBABPBHAIP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1630A690)
#define BEBABPBHAIP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1630A6D0)
#define BEBABPBHAIP___C__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0x1630A6E0)

inline static constexpr unsigned int BEBABPBHAIP___c_TypeDefinitionIndex = 52659;

	class BEBABPBHAIP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6DCB0);
		}

		static ::System::Func_2<::System::Int32, ::System::Single>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Single>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6DCB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEBABPBHAIP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEBABPBHAIP___C_CTOR_OFFSET))(this);
		}

		::System::Single _OnTaskBegin_b__2_0(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEBABPBHAIP___C__ONTASKBEGIN_B__2_0_OFFSET))(this, a1);
		}

	};
