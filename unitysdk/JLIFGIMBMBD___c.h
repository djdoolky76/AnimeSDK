#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLIFGIMBMBD;
namespace System { class Object; }

#define JLIFGIMBMBD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE76B00)
#define JLIFGIMBMBD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE76B40)
#define JLIFGIMBMBD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FE76B50)

inline static constexpr unsigned int JLIFGIMBMBD___c_TypeDefinitionIndex = 27567;

	class JLIFGIMBMBD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x62CB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLIFGIMBMBD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLIFGIMBMBD___C_CTOR_OFFSET))(this);
		}

		::JLIFGIMBMBD* __cctor_b__33_0()
		{
			return ((::JLIFGIMBMBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLIFGIMBMBD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
