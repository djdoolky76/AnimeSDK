#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MDDIKNGBPPL;
namespace System { class Object; }

#define MDDIKNGBPPL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD4ABA0)
#define MDDIKNGBPPL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD4ABE0)
#define MDDIKNGBPPL___C___CCTOR_B__61_0_OFFSET UNITYSDK_OFFSET(0x1FD4ABF0)

inline static constexpr unsigned int MDDIKNGBPPL___c_TypeDefinitionIndex = 28262;

	class MDDIKNGBPPL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A800);
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
