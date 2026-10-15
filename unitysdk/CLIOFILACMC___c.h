#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLIOFILACMC;
namespace System { class Object; }

#define CLIOFILACMC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0CCE10)
#define CLIOFILACMC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0CCE50)
#define CLIOFILACMC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E0CCE60)

inline static constexpr unsigned int CLIOFILACMC___c_TypeDefinitionIndex = 30874;

	class CLIOFILACMC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B5C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLIOFILACMC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIOFILACMC___C_CTOR_OFFSET))(this);
		}

		::CLIOFILACMC* __cctor_b__28_0()
		{
			return ((::CLIOFILACMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIOFILACMC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
