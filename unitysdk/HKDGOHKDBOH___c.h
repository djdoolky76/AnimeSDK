#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define HKDGOHKDBOH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15D33110)
#define HKDGOHKDBOH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15D33150)
#define HKDGOHKDBOH___C__EVALUATE_B__1_0_OFFSET UNITYSDK_OFFSET(0x15D33160)

inline static constexpr unsigned int HKDGOHKDBOH___c_TypeDefinitionIndex = 52655;

	class HKDGOHKDBOH___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Int32, ::System::Single>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Single>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22F70);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22F78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKDGOHKDBOH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKDGOHKDBOH___C_CTOR_OFFSET))(this);
		}

		::System::Single _Evaluate_b__1_0(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HKDGOHKDBOH___C__EVALUATE_B__1_0_OFFSET))(this, a1);
		}

	};
