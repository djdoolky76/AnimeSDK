#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJLNGGEEFKD;
namespace System { class Object; }

#define AJLNGGEEFKD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E396F20)
#define AJLNGGEEFKD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E396F50)
#define AJLNGGEEFKD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E396F60)

inline static constexpr unsigned int AJLNGGEEFKD___c_TypeDefinitionIndex = 25395;

	class AJLNGGEEFKD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3DE90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJLNGGEEFKD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJLNGGEEFKD___C_CTOR_OFFSET))(this);
		}

		::AJLNGGEEFKD* __cctor_b__33_0()
		{
			return ((::AJLNGGEEFKD*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJLNGGEEFKD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
