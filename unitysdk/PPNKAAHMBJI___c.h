#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAKADGHNMFK;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define PPNKAAHMBJI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC396B00)
#define PPNKAAHMBJI___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC396B40)
#define PPNKAAHMBJI___C__EVALUATE_B__12_0_OFFSET UNITYSDK_OFFSET(0xC396B50)

inline static constexpr unsigned int PPNKAAHMBJI___c_TypeDefinitionIndex = 77572;

	class PPNKAAHMBJI___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::KAKADGHNMFK*, ::System::Boolean>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::KAKADGHNMFK*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0xE150);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xE158);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPNKAAHMBJI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNKAAHMBJI___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _Evaluate_b__12_0(::KAKADGHNMFK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + PPNKAAHMBJI___C__EVALUATE_B__12_0_OFFSET))(this, a1);
		}

	};
