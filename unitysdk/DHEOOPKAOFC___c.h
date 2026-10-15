#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DHEOOPKAOFC;
namespace System { class Object; }

#define DHEOOPKAOFC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E185530)
#define DHEOOPKAOFC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E185570)
#define DHEOOPKAOFC___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E185580)

inline static constexpr unsigned int DHEOOPKAOFC___c_TypeDefinitionIndex = 30365;

	class DHEOOPKAOFC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30730);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHEOOPKAOFC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHEOOPKAOFC___C_CTOR_OFFSET))(this);
		}

		::DHEOOPKAOFC* __cctor_b__53_0()
		{
			return ((::DHEOOPKAOFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHEOOPKAOFC___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
