#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define ACOMAONLNKP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB12B460)
#define ACOMAONLNKP___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB12B4A0)
#define ACOMAONLNKP___C__SELECTTAKEBYCOUNT_B__13_0_OFFSET UNITYSDK_OFFSET(0xB12B4B0)

inline static constexpr unsigned int ACOMAONLNKP___c_TypeDefinitionIndex = 79403;

	class ACOMAONLNKP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44A90);
		}

		static ::System::Func_2<::System::Int32, ::System::Int32>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44A98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACOMAONLNKP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACOMAONLNKP___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _SelectTakeByCount_b__13_0(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ACOMAONLNKP___C__SELECTTAKEBYCOUNT_B__13_0_OFFSET))(this, a1);
		}

	};
