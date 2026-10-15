#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLIFGIMBMBD;
namespace System { class Object; }

#define JLIFGIMBMBD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E77C2E0)
#define JLIFGIMBMBD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E77C320)
#define JLIFGIMBMBD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E77C330)

inline static constexpr unsigned int JLIFGIMBMBD___c_TypeDefinitionIndex = 27036;

	class JLIFGIMBMBD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69760);
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
