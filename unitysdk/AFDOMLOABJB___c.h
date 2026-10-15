#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFDOMLOABJB;
namespace System { class Object; }

#define AFDOMLOABJB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E116A90)
#define AFDOMLOABJB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E116AD0)
#define AFDOMLOABJB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E116AE0)

inline static constexpr unsigned int AFDOMLOABJB___c_TypeDefinitionIndex = 32129;

	class AFDOMLOABJB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2E4C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFDOMLOABJB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFDOMLOABJB___C_CTOR_OFFSET))(this);
		}

		::AFDOMLOABJB* __cctor_b__23_0()
		{
			return ((::AFDOMLOABJB*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFDOMLOABJB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
