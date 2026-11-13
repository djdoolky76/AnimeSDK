#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OIDOOKMAEKE;
namespace System { class Object; }

#define OIDOOKMAEKE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCEC110)
#define OIDOOKMAEKE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FCEC140)
#define OIDOOKMAEKE___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1FCEC150)

inline static constexpr unsigned int OIDOOKMAEKE___c_TypeDefinitionIndex = 26819;

	class OIDOOKMAEKE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17FE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIDOOKMAEKE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDOOKMAEKE___C_CTOR_OFFSET))(this);
		}

		::OIDOOKMAEKE* __cctor_b__43_0()
		{
			return ((::OIDOOKMAEKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDOOKMAEKE___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
