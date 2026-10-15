#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MDDIKNGBPPL;
namespace System { class Object; }

#define MDDIKNGBPPL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9D34B0)
#define MDDIKNGBPPL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9D34F0)
#define MDDIKNGBPPL___C___CCTOR_B__61_0_OFFSET UNITYSDK_OFFSET(0x1E9D3500)

inline static constexpr unsigned int MDDIKNGBPPL___c_TypeDefinitionIndex = 27731;

	class MDDIKNGBPPL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B8C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDDIKNGBPPL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDIKNGBPPL___C_CTOR_OFFSET))(this);
		}

		::MDDIKNGBPPL* __cctor_b__61_0()
		{
			return ((::MDDIKNGBPPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDIKNGBPPL___C___CCTOR_B__61_0_OFFSET))(this);
		}

	};
