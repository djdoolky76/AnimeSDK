#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define DAMOOJJHPME___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x19947E30)
#define DAMOOJJHPME___C_CTOR_OFFSET UNITYSDK_OFFSET(0x19947E70)
#define DAMOOJJHPME___C__EVALUATE_B__1_0_OFFSET UNITYSDK_OFFSET(0x19947E80)

inline static constexpr unsigned int DAMOOJJHPME___c_TypeDefinitionIndex = 53760;

	class DAMOOJJHPME___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4FBD0);
		}

		static ::System::Func_2<::System::Int32, ::System::Single>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Single>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4FBD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAMOOJJHPME___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMOOJJHPME___C_CTOR_OFFSET))(this);
		}

		::System::Single _Evaluate_b__1_0(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DAMOOJJHPME___C__EVALUATE_B__1_0_OFFSET))(this, a1);
		}

	};
