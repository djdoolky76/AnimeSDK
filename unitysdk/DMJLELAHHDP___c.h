#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DCHICFMEANN.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define DMJLELAHHDP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xFEBD420)
#define DMJLELAHHDP___C_CTOR_OFFSET UNITYSDK_OFFSET(0xFEBD460)
#define DMJLELAHHDP___C__ONTASKBEGIN_B__1_1_OFFSET UNITYSDK_OFFSET(0xFEBD470)
#define DMJLELAHHDP___C__ONTASKBEGIN_B__1_2_OFFSET UNITYSDK_OFFSET(0xFEBD480)

inline static constexpr unsigned int DMJLELAHHDP___c_TypeDefinitionIndex = 52302;

	class DMJLELAHHDP___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::DCHICFMEANN>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::System::UInt32, ::DCHICFMEANN>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5BA40);
		}

		static ::System::Func_2<::System::UInt32, ::DCHICFMEANN>** StaticGet___9__1_2()
		{
			return (::System::Func_2<::System::UInt32, ::DCHICFMEANN>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5BA48);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5BA50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMJLELAHHDP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMJLELAHHDP___C_CTOR_OFFSET))(this);
		}

		::DCHICFMEANN _OnTaskBegin_b__1_1(::System::UInt32 a1)
		{
			return ((::DCHICFMEANN(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DMJLELAHHDP___C__ONTASKBEGIN_B__1_1_OFFSET))(this, a1);
		}

		::DCHICFMEANN _OnTaskBegin_b__1_2(::System::UInt32 a1)
		{
			return ((::DCHICFMEANN(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DMJLELAHHDP___C__ONTASKBEGIN_B__1_2_OFFSET))(this, a1);
		}

	};
