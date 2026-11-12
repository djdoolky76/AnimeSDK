#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PPGEBEBPMJC;
namespace System { class Object; }

#define PPGEBEBPMJC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F28ABC0)
#define PPGEBEBPMJC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F28AC00)
#define PPGEBEBPMJC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F28AC10)

inline static constexpr unsigned int PPGEBEBPMJC___c_TypeDefinitionIndex = 30048;

	class PPGEBEBPMJC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48BB0);
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
