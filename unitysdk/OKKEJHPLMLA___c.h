#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKKEJHPLMLA;
namespace System { class Object; }

#define OKKEJHPLMLA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F145290)
#define OKKEJHPLMLA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1452D0)
#define OKKEJHPLMLA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F1452E0)

inline static constexpr unsigned int OKKEJHPLMLA___c_TypeDefinitionIndex = 27104;

	class OKKEJHPLMLA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1E6D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKKEJHPLMLA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKEJHPLMLA___C_CTOR_OFFSET))(this);
		}

		::OKKEJHPLMLA* __cctor_b__28_0()
		{
			return ((::OKKEJHPLMLA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKEJHPLMLA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
