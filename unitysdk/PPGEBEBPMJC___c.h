#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PPGEBEBPMJC;
namespace System { class Object; }

#define PPGEBEBPMJC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFAC050)
#define PPGEBEBPMJC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFAC090)
#define PPGEBEBPMJC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DFAC0A0)

inline static constexpr unsigned int PPGEBEBPMJC___c_TypeDefinitionIndex = 29337;

	class PPGEBEBPMJC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46A00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPGEBEBPMJC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGEBEBPMJC___C_CTOR_OFFSET))(this);
		}

		::PPGEBEBPMJC* __cctor_b__33_0()
		{
			return ((::PPGEBEBPMJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGEBEBPMJC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
