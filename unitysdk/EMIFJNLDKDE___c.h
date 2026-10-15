#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMIFJNLDKDE;
namespace System { class Object; }

#define EMIFJNLDKDE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2E2EE0)
#define EMIFJNLDKDE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2E2F10)
#define EMIFJNLDKDE___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E2E2F20)

inline static constexpr unsigned int EMIFJNLDKDE___c_TypeDefinitionIndex = 30918;

	class EMIFJNLDKDE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53960);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMIFJNLDKDE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMIFJNLDKDE___C_CTOR_OFFSET))(this);
		}

		::EMIFJNLDKDE* __cctor_b__18_0()
		{
			return ((::EMIFJNLDKDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMIFJNLDKDE___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
